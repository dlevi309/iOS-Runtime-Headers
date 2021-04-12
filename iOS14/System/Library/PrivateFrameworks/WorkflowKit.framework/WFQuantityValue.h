/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber, NSString;

@interface WFQuantityValue : NSObject <NSSecureCoding> {

	NSDecimalNumber* _magnitude;
	NSString* _unitString;

}

@property (nonatomic,readonly) NSDecimalNumber * magnitude;              //@synthesize magnitude=_magnitude - In the implementation block
@property (nonatomic,copy,readonly) NSString * unitString;               //@synthesize unitString=_unitString - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)unitString;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDecimalNumber *)magnitude;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMagnitude:(id)arg1 unitString:(id)arg2 ;
@end

