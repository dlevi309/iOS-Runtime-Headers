/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/NSCopying.h>

@interface FCPaywallTopOffsetConfiguration : NSObject <NSCopying> {

	double _compactPortraitTopOffsetRatio;
	double _compactLandscapeTopOffsetRatio;
	double _regularPortraitTopOffsetRatio;
	double _regularLandscapeTopOffsetRatio;

}

@property (nonatomic,readonly) double compactPortraitTopOffsetRatio;               //@synthesize compactPortraitTopOffsetRatio=_compactPortraitTopOffsetRatio - In the implementation block
@property (nonatomic,readonly) double compactLandscapeTopOffsetRatio;              //@synthesize compactLandscapeTopOffsetRatio=_compactLandscapeTopOffsetRatio - In the implementation block
@property (nonatomic,readonly) double regularPortraitTopOffsetRatio;               //@synthesize regularPortraitTopOffsetRatio=_regularPortraitTopOffsetRatio - In the implementation block
@property (nonatomic,readonly) double regularLandscapeTopOffsetRatio;              //@synthesize regularLandscapeTopOffsetRatio=_regularLandscapeTopOffsetRatio - In the implementation block
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)init;
-(double)compactPortraitTopOffsetRatio;
-(double)regularLandscapeTopOffsetRatio;
-(double)compactLandscapeTopOffsetRatio;
-(id)initWithCompactPortraitTopOffsetRatio:(double)arg1 compactLandscapeTopOffsetRatio:(double)arg2 regularPortraitTopOffsetRatio:(double)arg3 regularLandscapeTopOffsetRatio:(double)arg4 ;
-(double)regularPortraitTopOffsetRatio;
@end

