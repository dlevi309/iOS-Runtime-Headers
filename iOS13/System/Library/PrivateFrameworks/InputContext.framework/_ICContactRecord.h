/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/


#import <InputContext/InputContext-Structs.h>
@class NSString, _ICContact;

@interface _ICContactRecord : NSObject {

	unsigned char _changeType;
	NSString* _identifier;
	_ICContact* _contact;

}

@property (nonatomic,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) _ICContact * contact;                  //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) unsigned char changeType;              //@synthesize changeType=_changeType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(unsigned char)changeType;
-(_ICContact *)contact;
-(id)initWithIdentifier:(id)arg1 contact:(id)arg2 changeType:(unsigned char)arg3 ;
-(BOOL)isEqualToContactRecord:(id)arg1 ;
@end

