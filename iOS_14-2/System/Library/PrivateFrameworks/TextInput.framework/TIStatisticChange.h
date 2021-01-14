/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TIStatisticChange : NSObject <NSCopying, NSSecureCoding> {

	int _value;
	NSString* _name;
	NSString* _inputMode;

}

@property (nonatomic,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int value;                         //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * inputMode;              //@synthesize inputMode=_inputMode - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)statisticChangeWithName:(id)arg1 andValue:(int)arg2 andInputMode:(id)arg3 ;
-(NSString *)inputMode;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 andValue:(int)arg2 andInputMode:(id)arg3 ;
-(NSString *)name;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)value;
@end

