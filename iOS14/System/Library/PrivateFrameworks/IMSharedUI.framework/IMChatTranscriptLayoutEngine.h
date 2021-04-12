/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)invalidateLayout;
-(void)setContentSize:(CGSize)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)setLayoutAttributes:(NSArray *)arg1 ;
-(void)prepareLayout;
-(NSArray *)layoutAttributes;
-(id)init;
-(CGSize)contentSize;
-(id<IMChatTranscriptLayoutEngineDataSource>)dataSource;
-(void)setDataSource:(id<IMChatTranscriptLayoutEngineDataSource>)arg1 ;
-(void)reloadData;
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

