/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/


@protocol IMChatTranscriptLayoutEngineDataSource;
#import <IMSharedUI/IMSharedUI-Structs.h>
@class NSMutableArray, IMChatTranscriptLayoutSpecification, NSArray;

@interface IMChatTranscriptLayoutEngine : NSObject {

	NSMutableArray* _cachedDrawables;
	id<IMChatTranscriptLayoutEngineDataSource> _dataSource;
	IMChatTranscriptLayoutSpecification* _layoutSpecification;
	NSArray* _layoutAttributes;
	CGSize _contentSize;

}

@property (assign,nonatomic) CGSize contentSize;                                                        //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,copy) NSArray * layoutAttributes;                                                  //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<IMChatTranscriptLayoutEngineDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) IMChatTranscriptLayoutSpecification * layoutSpecification;                 //@synthesize layoutSpecification=_layoutSpecification - In the implementation block
-(id)init;
-(CGSize)contentSize;
-(id<IMChatTranscriptLayoutEngineDataSource>)dataSource;
-(void)setDataSource:(id<IMChatTranscriptLayoutEngineDataSource>)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)invalidateLayout;
-(void)reloadData;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(NSArray *)layoutAttributes;
-(void)setLayoutAttributes:(NSArray *)arg1 ;
-(void)_updateContentSize;
-(void)_invalidateCachedItemData;
-(unsigned long long)_numberOfTranscriptItems;
-(id)_cachedDrawableForTranscriptItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(double)_spaceForVerticalSpaceDescriptor:(long long)arg1 ;
-(void)_updateFrames;
-(void)_buildLayoutAttributesIfNeeded;
-(id)_makeDrawableForTranscriptItem:(id)arg1 ;
-(id)_cachedDrawableAtIndexOrNil:(unsigned long long)arg1 ;
-(void)setLayoutSpecification:(IMChatTranscriptLayoutSpecification *)arg1 ;
-(id)drawableAtIndex:(unsigned long long)arg1 ;
-(void)removeItemsAtIndexPaths:(id)arg1 insertItemsAtIndexPaths:(id)arg2 ;
-(IMChatTranscriptLayoutSpecification *)layoutSpecification;
@end

