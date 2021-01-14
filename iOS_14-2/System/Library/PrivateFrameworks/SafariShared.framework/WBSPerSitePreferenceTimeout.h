/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

