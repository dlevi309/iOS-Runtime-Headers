/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPFileCoordinatorDelegate.h>
#import <TSPersistence/TSPPassphraseConsumer.h>

@class TSPPackage, NSString, NSURL, TSPDocumentProperties, SFUCryptoKey, NSData;

@interface TSPPackageDataReader : NSObject <TSPFileCoordinatorDelegate, TSPPassphraseConsumer> {

	TSPPackage* _package;
	NSString* _lastPasswordAttempted;
	NSURL* _URL;

}

@property (nonatomic,readonly) NSURL * URL;                                             //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) long long packageType; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) TSPDocumentProperties * documentProperties; 
@property (nonatomic,readonly) BOOL isPasswordProtected; 
@property (nonatomic,readonly) NSString * passwordHint; 
@property (nonatomic,readonly) SFUCryptoKey * lastDecryptionKeyAttempted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * lastPasswordAttempted; 
@property (nonatomic,readonly) NSString * passphraseHint; 
@property (nonatomic,readonly) NSData * keychainGenericItem; 
@property (nonatomic,readonly) BOOL requiresNetworkValidation; 
-(id)init;
-(NSString *)passwordHint;
-(BOOL)isValid;
-(NSURL *)URL;
-(BOOL)isPasswordProtected;
-(BOOL)setPassphrase:(id)arg1 ;
-(TSPDocumentProperties *)documentProperties;
-(NSString *)lastPasswordAttempted;
-(id)initWithURL:(id)arg1 decryptionKey:(id)arg2 ;
-(void)performReadUsingAccessor:(/*^block*/id)arg1 ;
-(long long)packageType;
-(BOOL)checkPassword:(id)arg1 ;
-(BOOL)hasDataAtRelativePath:(id)arg1 ;
-(CGImageSourceRef)newCGImageSourceAtRelativePath:(id)arg1 ;
-(SFUCryptoKey *)lastDecryptionKeyAttempted;
-(CGDataProviderRef)newCGDataProviderAtRelativePath:(id)arg1 ;
-(CGImageRef)newCGImageAtRelativePath:(id)arg1 ;
@end

