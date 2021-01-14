/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithComponent:(id)arg1 ;
-(id)description;
-(NSDictionary *)metaData;
-(NSString *)componentType;
-(NSString *)componentIdentifier;
-(NSString *)componentRole;
@end

