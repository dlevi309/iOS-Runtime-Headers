/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSString;

@interface FAEligiblityEvaluationRequest : FAFamilyCircleRequest {

	NSString* _propertyName;
	NSString* _bundleID;

}

@property (nonatomic,copy,readonly) NSString * propertyName;              //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                  //@synthesize bundleID=_bundleID - In the implementation block
-(id)initWithPropertyName:(id)arg1 bundleID:(id)arg2 ;
-(void)startRequestWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)fetchEligibilityWithError:(id*)arg1 ;
-(NSString *)bundleID;
-(NSString *)propertyName;
@end

