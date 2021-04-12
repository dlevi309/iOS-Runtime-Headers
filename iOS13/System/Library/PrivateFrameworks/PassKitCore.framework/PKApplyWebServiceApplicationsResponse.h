/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)lastUpdated;
-(NSArray *)allFeatureApplications;
@end

