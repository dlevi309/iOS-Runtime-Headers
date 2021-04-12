/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateComponents, NSString, NSUUID;

@interface DNDSLegacyBehaviorOverrideEffectiveInterval : NSObject <NSCopying, NSSecureCoding> {

	NSDateComponents* _startComponents;
	NSDateComponents* _endComponents;
	NSString* _calendarIdentifier;
	unsigned long long _repeatInterval;
	NSUUID* _identifier;

}

@property (nonatomic,copy,readonly) NSDateComponents * startComponents;              //@synthesize startComponents=_startComponents - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * endComponents;                //@synthesize endComponents=_endComponents - In the implementation block
@property (nonatomic,copy,readonly) NSString * calendarIdentifier;                   //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long repeatInterval;                    //@synthesize repeatInterval=_repeatInterval - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                             //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)calendarIdentifier;
-(NSUUID *)identifier;
-(unsigned long long)repeatInterval;
-(id)initWithStartComponents:(id)arg1 endComponents:(id)arg2 calendarIdentifier:(id)arg3 repeatInterval:(unsigned long long)arg4 identifier:(id)arg5 ;
-(NSDateComponents *)startComponents;
-(NSDateComponents *)endComponents;
@end

