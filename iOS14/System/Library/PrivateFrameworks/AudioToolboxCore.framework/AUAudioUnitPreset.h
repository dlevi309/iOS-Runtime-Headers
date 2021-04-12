/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AUAudioUnitPreset : NSObject <NSSecureCoding> {

	long long _number;
	NSString* _name;

}

@property (assign,nonatomic) long long number;              //@synthesize number=_number - In the implementation block
@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setNumber:(long long)arg1 ;
-(long long)number;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)dealloc;
@end

