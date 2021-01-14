/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSArray;

@interface CRKIdentityServiceFetchCertificatesRequest : CATTaskRequest {

	NSArray* _personLinkIDs;

}

@property (nonatomic,copy) NSArray * personLinkIDs;              //@synthesize personLinkIDs=_personLinkIDs - In the implementation block
-(NSArray *)personLinkIDs;
-(void)setPersonLinkIDs:(NSArray *)arg1 ;
@end

