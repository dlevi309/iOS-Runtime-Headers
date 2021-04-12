/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class NSMutableArray, NSMutableDictionary;

@interface PUCollectionViewData : NSObject {

	long long _cachedPageCount;
	CGRect _currentContentBounds;
	NSMutableArray* _itemLayoutAttributes;
	NSMutableDictionary* _itemLayoutAttributesByIndexPath;

}

@property (nonatomic,readonly) long long cachedPageCount;                                          //@synthesize cachedPageCount=_cachedPageCount - In the implementation block
@property (assign,nonatomic) CGRect currentContentBounds;                                          //@synthesize currentContentBounds=_currentContentBounds - In the implementation block
@property (nonatomic,readonly) NSMutableArray * itemLayoutAttributes;                              //@synthesize itemLayoutAttributes=_itemLayoutAttributes - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * itemLayoutAttributesByIndexPath;              //@synthesize itemLayoutAttributesByIndexPath=_itemLayoutAttributesByIndexPath - In the implementation block
-(id)init;
-(long long)cachedPageCount;
-(BOOL)hasReferenceIndexPath;
-(CGRect)currentContentBounds;
-(void)setCurrentContentBounds:(CGRect)arg1 ;
-(NSMutableArray *)itemLayoutAttributes;
-(NSMutableDictionary *)itemLayoutAttributesByIndexPath;
-(void)invalidate;
@end

