/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSString, NSData;

@interface MRCryptoPairingIdentity : NSObject {

	NSString* _identifier;
	NSData* _publicKey;
	NSData* _privateKey;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSData * publicKey;                 //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,readonly) NSData * privateKey;                //@synthesize privateKey=_privateKey - In the implementation block
-(NSData *)publicKey;
-(id)init;
-(NSData *)privateKey;
-(id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 ;
-(NSString *)identifier;
@end

