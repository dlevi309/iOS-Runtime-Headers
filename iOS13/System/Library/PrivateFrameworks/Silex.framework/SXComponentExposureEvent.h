/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXAnalyticsEvent.h>

@class NSString, NSDictionary;

@interface SXComponentExposureEvent : SXAnalyticsEvent {

	NSString* _componentIdentifier;
	NSString* _componentType;
	NSString* _componentRole;
	NSDictionary* _metaData;

}

@property (nonatomic,readonly) NSString * componentIdentifier;              //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * componentType;                    //@synthesize componentType=_componentType - In the implementation block
@property (nonatomic,readonly) NSString * componentRole;                    //@synthesize componentRole=_componentRole - In the implementation block
@property (nonatomic,readonly) NSDictionary * metaData;                     //@synthesize metaData=_metaData - In the implementation block
-(id)description;
-(NSString *)componentType;
-(NSDictionary *)metaData;
-(id)initWithComponent:(id)arg1 ;
-(NSString *)componentIdentifier;
-(NSString *)componentRole;
@end

