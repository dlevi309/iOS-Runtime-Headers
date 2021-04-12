/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <AppleAccount/AAResponse.h>

@class NSArray;

@interface FASharedServicesResponse : AAResponse {

	NSArray* _services;
	NSArray* _serviceGroups;

}

@property (nonatomic,readonly) NSArray * services;                   //@synthesize services=_services - In the implementation block
@property (nonatomic,readonly) NSArray * serviceGroups;              //@synthesize serviceGroups=_serviceGroups - In the implementation block
-(NSArray *)services;
-(NSArray *)serviceGroups;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(void)_sharedServicesWithNoGrouping:(id)arg1 ;
-(void)_initializeServicesMapWithGroups:(id)arg1 andServices:(id)arg2 ;
@end

