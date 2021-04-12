/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@class NSString;

@interface CXPlayDTMFCallAction : CXCallAction {

	NSString* _digits;
	long long _type;

}

@property (nonatomic,copy) NSString * digits;              //@synthesize digits=_digits - In the implementation block
@property (assign,nonatomic) long long type;               //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setDigits:(NSString *)arg1 ;
-(NSString *)digits;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)initWithCallUUID:(id)arg1 digits:(id)arg2 type:(long long)arg3 ;
@end

