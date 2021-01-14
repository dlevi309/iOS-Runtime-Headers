/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchAdHocConfigurationResultObject : CATTaskResultObject {

	NSDictionary* _configuration;

}

@property (nonatomic,copy) NSDictionary * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)configuration;
-(id)initWithCoder:(id)arg1 ;
-(void)setConfiguration:(NSDictionary *)arg1 ;
@end

