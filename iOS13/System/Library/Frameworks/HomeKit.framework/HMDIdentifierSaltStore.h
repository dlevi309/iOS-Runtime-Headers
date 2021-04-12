/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class HMFUnfairLock, NSData;

@interface HMDIdentifierSaltStore : NSObject {

	HMFUnfairLock* _lock;
	NSData* _identifierSalt;
	NSData* _assistantIdentifierSalt;

}

@property (nonatomic,retain) NSData * identifierSalt;                       //@synthesize identifierSalt=_identifierSalt - In the implementation block
@property (nonatomic,retain) NSData * assistantIdentifierSalt;              //@synthesize assistantIdentifierSalt=_assistantIdentifierSalt - In the implementation block
-(id)init;
-(NSData *)identifierSalt;
-(void)setIdentifierSalt:(NSData *)arg1 ;
-(NSData *)assistantIdentifierSalt;
-(void)setAssistantIdentifierSalt:(NSData *)arg1 ;
@end

