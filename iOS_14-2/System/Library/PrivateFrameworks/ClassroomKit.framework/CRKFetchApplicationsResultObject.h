/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchApplicationsResultObject : CATTaskResultObject {

	NSDictionary* _applicationsByIdentifier;

}

@property (nonatomic,copy) NSDictionary * applicationsByIdentifier;              //@synthesize applicationsByIdentifier=_applicationsByIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)applicationsByIdentifier;
-(void)setApplicationsByIdentifier:(NSDictionary *)arg1 ;
@end

