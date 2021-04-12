/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/

#import <C2/C2-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class C2MetricOperationGroupOptions, NSString;

@interface C2MetricOperationOptions : NSObject <NSSecureCoding> {

	C2MetricOperationGroupOptions* _operationGroup;
	NSString* _operationId;
	NSString* _operationType;

}

@property (nonatomic,copy) C2MetricOperationGroupOptions * operationGroup;              //@synthesize operationGroup=_operationGroup - In the implementation block
@property (nonatomic,copy) NSString * operationId;                                      //@synthesize operationId=_operationId - In the implementation block
@property (nonatomic,copy) NSString * operationType;                                    //@synthesize operationType=_operationType - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)operationType;
-(void)setOperationType:(NSString *)arg1 ;
-(C2MetricOperationGroupOptions *)operationGroup;
-(NSString *)operationId;
-(void)setOperationId:(NSString *)arg1 ;
-(void)setOperationGroup:(C2MetricOperationGroupOptions *)arg1 ;
@end

