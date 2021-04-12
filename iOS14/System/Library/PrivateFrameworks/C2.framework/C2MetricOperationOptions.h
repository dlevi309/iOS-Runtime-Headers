/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)operationType;
-(NSString *)operationId;
-(void)encodeWithCoder:(id)arg1 ;
-(C2MetricOperationGroupOptions *)operationGroup;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setOperationType:(NSString *)arg1 ;
-(void)setOperationGroup:(C2MetricOperationGroupOptions *)arg1 ;
-(void)setOperationId:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

