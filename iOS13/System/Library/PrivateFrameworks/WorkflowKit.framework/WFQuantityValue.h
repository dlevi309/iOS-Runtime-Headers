/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDecimalNumber *)magnitude;
-(NSString *)unitString;
-(id)initWithMagnitude:(id)arg1 unitString:(id)arg2 ;
@end

