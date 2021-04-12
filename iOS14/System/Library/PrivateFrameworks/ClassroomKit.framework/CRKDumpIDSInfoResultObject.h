/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKDumpIDSInfoResultObject : CATTaskResultObject {

	NSDictionary* _info;

}

@property (nonatomic,copy,readonly) NSDictionary * info;              //@synthesize info=_info - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)info;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInfo:(id)arg1 ;
@end

