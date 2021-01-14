/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXAnalyticsEvent.h>

@class NSString, NSURL;

@interface SXWebContentComponentExposureEvent : SXAnalyticsEvent {

	NSString* _componentIdentifier;
	NSURL* _URL;
	NSString* _exposureIdentifier;

}

@property (nonatomic,readonly) NSString * componentIdentifier;              //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                 //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSString * exposureIdentifier;               //@synthesize exposureIdentifier=_exposureIdentifier - In the implementation block
-(id)initWithComponent:(id)arg1 ;
-(NSURL *)URL;
-(NSString *)componentIdentifier;
-(NSString *)exposureIdentifier;
@end

