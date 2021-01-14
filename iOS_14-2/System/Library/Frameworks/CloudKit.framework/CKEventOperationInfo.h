/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKEventOperationInfo : NSObject <NSSecureCoding> {

	NSString* _operationID;
	NSString* _operationType;
	NSString* _operationGroupID;

}

@property (nonatomic,readonly) NSString * operationID;                   //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,readonly) NSString * operationType;                 //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,readonly) NSString * operationGroupID;              //@synthesize operationGroupID=_operationGroupID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithOperation:(id)arg1 ;
-(NSString *)operationType;
-(NSString *)operationID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)operationGroupID;
-(id)initWithCoder:(id)arg1 ;
@end

