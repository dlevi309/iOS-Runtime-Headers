/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PBItemDetection : NSObject <NSSecureCoding> {

	BOOL _present;
	id _value;

}

@property (nonatomic,readonly) BOOL present;              //@synthesize present=_present - In the implementation block
@property (nonatomic,readonly) id value;                  //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_allowedValueClasses;
+(id)detectionAbsent;
+(id)detectionPresent;
+(id)detectionPresentWithValue:(id)arg1 ;
-(BOOL)present;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(id)initWithPresent:(BOOL)arg1 value:(id)arg2 ;
@end

