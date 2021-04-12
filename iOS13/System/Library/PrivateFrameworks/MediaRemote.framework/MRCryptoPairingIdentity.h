/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)identifier;
-(NSData *)publicKey;
-(NSData *)privateKey;
-(id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 ;
@end

