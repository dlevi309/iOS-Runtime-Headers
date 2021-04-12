/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)operationType;
-(NSString *)operationID;
-(NSString *)operationGroupID;
-(id)initWithOperation:(id)arg1 ;
@end

