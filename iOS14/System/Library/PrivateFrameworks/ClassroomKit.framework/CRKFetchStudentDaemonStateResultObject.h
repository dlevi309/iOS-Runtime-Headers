/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchStudentDaemonStateResultObject : CATTaskResultObject {

	NSDictionary* _stateDictionary;

}

@property (nonatomic,copy) NSDictionary * stateDictionary;              //@synthesize stateDictionary=_stateDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)stateDictionary;
-(id)initWithCoder:(id)arg1 ;
-(void)setStateDictionary:(NSDictionary *)arg1 ;
@end

