/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class NSData, NSString;

@interface EDInteractionEventLogSaltProvider : NSObject <EFLoggable> {

	os_unfair_lock_s _lock;
	NSData* _salt;

}

@property (nonatomic,retain) NSData * salt;                         //@synthesize salt=_salt - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)saltProviderFromKeyChain;
+(id)saltProviderWithString:(id)arg1 ;
-(id)init;
-(NSData *)salt;
-(void)setSalt:(NSData *)arg1 ;
-(id)_findOrCreateSalt;
-(id)_findExistingSaltError:(out id*)arg1 ;
-(void)_deleteSalt;
-(id)_createSalt;
-(id)_queryKeychainError:(out id*)arg1 ;
-(BOOL)migrateAccessClass;
@end

