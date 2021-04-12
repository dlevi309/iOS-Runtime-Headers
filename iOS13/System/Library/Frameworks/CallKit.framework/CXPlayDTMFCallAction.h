/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)digits;
-(id)customDescription;
-(void)setDigits:(NSString *)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)initWithCallUUID:(id)arg1 digits:(id)arg2 type:(long long)arg3 ;
@end

