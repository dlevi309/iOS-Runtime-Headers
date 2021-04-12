/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKEventOperationGroupInfo : NSObject <NSSecureCoding> {

	NSString* _operationGroupID;
	NSString* _operationGroupName;

}

@property (nonatomic,readonly) NSString * operationGroupID;                //@synthesize operationGroupID=_operationGroupID - In the implementation block
@property (nonatomic,readonly) NSString * operationGroupName;              //@synthesize operationGroupName=_operationGroupName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)operationGroupID;
-(id)initWithOperationGroup:(id)arg1 ;
-(NSString *)operationGroupName;
-(id)initWithCoder:(id)arg1 ;
@end

