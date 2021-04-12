/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/

#import <C2/C2-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface C2MetricOperationGroupOptions : NSObject <NSSecureCoding> {

	NSString* _operationGroupId;
	NSString* _operationGroupName;

}

@property (nonatomic,copy) NSString * operationGroupId;                //@synthesize operationGroupId=_operationGroupId - In the implementation block
@property (nonatomic,copy) NSString * operationGroupName;              //@synthesize operationGroupName=_operationGroupName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)operationGroupName;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)operationGroupId;
-(void)setOperationGroupId:(NSString *)arg1 ;
-(void)setOperationGroupName:(NSString *)arg1 ;
@end

