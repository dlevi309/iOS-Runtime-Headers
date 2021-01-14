/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class NSMutableArray, NSMutableDictionary;

@interface PUSectionedGridLayoutData : NSObject {

	long long _numberOfPagesToCache;
	CGRect _currentContentBounds;
	NSMutableArray* _headerLayoutAttributes;
	NSMutableDictionary* _headerLayoutAttributesByVisualSection;

}

@property (nonatomic,readonly) long long numberOfPagesToCache;                                           //@synthesize numberOfPagesToCache=_numberOfPagesToCache - In the implementation block
@property (assign,nonatomic) CGRect currentContentBounds;                                                //@synthesize currentContentBounds=_currentContentBounds - In the implementation block
@property (nonatomic,readonly) NSMutableArray * headerLayoutAttributes;                                  //@synthesize headerLayoutAttributes=_headerLayoutAttributes - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * headerLayoutAttributesByVisualSection;              //@synthesize headerLayoutAttributesByVisualSection=_headerLayoutAttributesByVisualSection - In the implementation block
-(id)init;
-(CGRect)currentContentBounds;
-(void)setCurrentContentBounds:(CGRect)arg1 ;
-(void)invalidate;
-(long long)numberOfPagesToCache;
-(NSMutableArray *)headerLayoutAttributes;
-(NSMutableDictionary *)headerLayoutAttributesByVisualSection;
@end

