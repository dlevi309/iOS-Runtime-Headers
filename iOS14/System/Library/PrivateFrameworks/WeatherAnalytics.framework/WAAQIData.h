/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSNumber, NSString, WAProviderDataOrigination;

@interface WAAQIData : NSObject <AADataEventType> {

	NSNumber* _index;
	NSNumber* _category;
	NSString* _scale;
	WAProviderDataOrigination* _providerDataOrigination;

}

@property (nonatomic,readonly) NSNumber * index;                                                 //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSNumber * category;                                              //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSString * scale;                                                 //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) WAProviderDataOrigination * providerDataOrigination;              //@synthesize providerDataOrigination=_providerDataOrigination - In the implementation block
+(id)dataName;
-(NSNumber *)index;
-(id)toDict;
-(NSString *)scale;
-(NSNumber *)category;
-(WAProviderDataOrigination *)providerDataOrigination;
-(id)initWithIndex:(id)arg1 category:(id)arg2 scale:(id)arg3 providerDataOrigination:(id)arg4 ;
@end

