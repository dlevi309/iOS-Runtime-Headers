/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
*/


#import <BookCoverUtility/BookCoverUtility-Structs.h>
@class BCULayerRenderer, NSArray;

@interface BCUCoverEffects : NSObject {

	BCULayerRenderer* _renderer;
	NSArray* _bookFilters;
	NSArray* _seriesFilters;
	NSArray* _templateImageFilters;

}
+(CGImageRef)restrictedImageFrom:(CGImageRef)arg1 size:(CGSize)arg2 ;
+(id)_effectIdentifierForEffectIndex:(unsigned long long)arg1 ;
+(id)effectIdentifierWithRTL:(BOOL)arg1 style:(unsigned long long)arg2 content:(unsigned long long)arg3 nightMode:(BOOL)arg4 ;
+(id)effectIdentifierForAsset:(id)arg1 withEnvironment:(id)arg2 ;
+(id)effectIdentifierForFilterInfo:(id)arg1 ;
-(id)initWithRenderer:(id)arg1 ;
-(id)bookCoverEffectFilters;
-(id)bookCoverEffectFilterForEffectIdentifier:(id)arg1 ;
-(id)seriesCoverEffectFilters;
-(id)templateImageFilters;
-(id)welcomeScreenBookCoverEffectFilters;
@end

