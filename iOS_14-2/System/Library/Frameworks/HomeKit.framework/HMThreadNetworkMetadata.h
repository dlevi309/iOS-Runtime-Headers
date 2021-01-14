/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface HMThreadNetworkMetadata : HMFObject <NSSecureCoding> {

	unsigned char _channel;
	NSString* _name;
	NSData* _PANID;
	NSData* _extendedPANID;
	NSData* _masterKey;
	NSString* _passPhrase;
	NSData* _PSKc;

}

@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned char channel;               //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) NSData * PANID;                      //@synthesize PANID=_PANID - In the implementation block
@property (nonatomic,readonly) NSData * extendedPANID;              //@synthesize extendedPANID=_extendedPANID - In the implementation block
@property (nonatomic,readonly) NSData * masterKey;                  //@synthesize masterKey=_masterKey - In the implementation block
@property (nonatomic,readonly) NSString * passPhrase;               //@synthesize passPhrase=_passPhrase - In the implementation block
@property (nonatomic,readonly) NSData * PSKc;                       //@synthesize PSKc=_PSKc - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)PSKc;
-(NSData *)PANID;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned char)channel;
-(NSString *)name;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)masterKey;
-(id)initWithName:(id)arg1 channel:(unsigned char)arg2 PANID:(id)arg3 extendedPANID:(id)arg4 masterKey:(id)arg5 passPhrase:(id)arg6 PSKc:(id)arg7 ;
-(NSData *)extendedPANID;
-(NSString *)passPhrase;
@end

