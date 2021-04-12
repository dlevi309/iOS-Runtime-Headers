/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSURL *)URL;
-(id)initWithComponent:(id)arg1 ;
-(NSString *)componentIdentifier;
-(NSString *)exposureIdentifier;
@end

