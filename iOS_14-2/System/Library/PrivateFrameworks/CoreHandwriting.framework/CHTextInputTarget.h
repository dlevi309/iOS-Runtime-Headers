/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CHTextInputTarget : NSObject <NSSecureCoding> {

	NSNumber* _inputTargetIdentifier;
	CGRect _frame;

}

@property (nonatomic,copy,readonly) NSNumber * inputTargetIdentifier;              //@synthesize inputTargetIdentifier=_inputTargetIdentifier - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                       //@synthesize frame=_frame - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)frame;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSNumber *)inputTargetIdentifier;
-(id)initWithIdentifier:(id)arg1 frame:(CGRect)arg2 ;
-(BOOL)isEqualToInputTarget:(id)arg1 ;
@end

