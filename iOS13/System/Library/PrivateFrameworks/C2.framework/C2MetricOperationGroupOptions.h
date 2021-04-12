/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)operationGroupName;
-(void)setOperationGroupName:(NSString *)arg1 ;
-(void)setOperationGroupId:(NSString *)arg1 ;
-(NSString *)operationGroupId;
@end

