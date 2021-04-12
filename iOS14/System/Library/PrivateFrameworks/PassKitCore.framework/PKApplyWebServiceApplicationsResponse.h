/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKApplyWebServiceResponse.h>

@class NSArray, NSString;

@interface PKApplyWebServiceApplicationsResponse : PKApplyWebServiceResponse {

	NSArray* _allFeatureApplications;
	NSString* _lastUpdated;

}

@property (nonatomic,readonly) NSArray * allFeatureApplications;              //@synthesize allFeatureApplications=_allFeatureApplications - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastUpdated;                   //@synthesize lastUpdated=_lastUpdated - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)lastUpdated;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)allFeatureApplications;
@end

