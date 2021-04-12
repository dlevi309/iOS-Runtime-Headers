/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@interface WBSPerSitePreferenceTimeout : NSObject {

	double _interval;
	id _fallbackValue;

}

@property (nonatomic,readonly) double interval;               //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) id fallbackValue;              //@synthesize fallbackValue=_fallbackValue - In the implementation block
+(id)timeoutWithInterval:(double)arg1 fallbackValue:(id)arg2 ;
-(double)interval;
-(id)initWithInterval:(double)arg1 fallbackValue:(id)arg2 ;
-(id)fallbackValue;
@end

