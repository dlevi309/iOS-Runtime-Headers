/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_ICContact *)contact;
-(unsigned char)changeType;
-(id)description;
-(BOOL)isEqualToContactRecord:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 contact:(id)arg2 changeType:(unsigned char)arg3 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

