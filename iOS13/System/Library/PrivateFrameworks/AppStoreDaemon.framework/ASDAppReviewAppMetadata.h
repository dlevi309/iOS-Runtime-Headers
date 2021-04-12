/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/ASDAppMetadata.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSNumber, NSData, MIStoreMetadata;

@interface ASDAppReviewAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding> {

	BOOL _beta;
	BOOL _hasMessagesExtension;
	BOOL _launchProhibited;
	NSURL* _artworkURL;
	NSString* _bundleID;
	NSNumber* _externalVersionIdentifier;
	NSNumber* _initialODRSize;
	NSNumber* _itemID;
	NSString* _itemName;
	NSURL* _messagesArtworkURL;
	NSData* _packageDPInfo;
	NSData* _packageSINF;
	NSURL* _packageURL;
	MIStoreMetadata* _storeMetadata;
	NSString* _variantID;
	NSString* _vendorName;

}

@property (nonatomic,copy) NSURL * artworkURL;                                             //@synthesize artworkURL=_artworkURL - In the implementation block
@property (assign,getter=isBeta,nonatomic) BOOL beta;                                      //@synthesize beta=_beta - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                                        //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSNumber * externalVersionIdentifier;                           //@synthesize externalVersionIdentifier=_externalVersionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasMessagesExtension;                                    //@synthesize hasMessagesExtension=_hasMessagesExtension - In the implementation block
@property (nonatomic,copy) NSNumber * initialODRSize;                                      //@synthesize initialODRSize=_initialODRSize - In the implementation block
@property (nonatomic,copy) NSNumber * itemID;                                              //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * itemName;                                            //@synthesize itemName=_itemName - In the implementation block
@property (assign,getter=isLaunchProhibited,nonatomic) BOOL launchProhibited;              //@synthesize launchProhibited=_launchProhibited - In the implementation block
@property (nonatomic,copy) NSURL * messagesArtworkURL;                                     //@synthesize messagesArtworkURL=_messagesArtworkURL - In the implementation block
@property (nonatomic,copy) NSData * packageDPInfo;                                         //@synthesize packageDPInfo=_packageDPInfo - In the implementation block
@property (nonatomic,copy) NSData * packageSINF;                                           //@synthesize packageSINF=_packageSINF - In the implementation block
@property (nonatomic,copy) NSURL * packageURL;                                             //@synthesize packageURL=_packageURL - In the implementation block
@property (nonatomic,copy) MIStoreMetadata * storeMetadata;                                //@synthesize storeMetadata=_storeMetadata - In the implementation block
@property (nonatomic,copy) NSString * variantID;                                           //@synthesize variantID=_variantID - In the implementation block
@property (nonatomic,copy) NSString * vendorName;                                          //@synthesize vendorName=_vendorName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) long long metadataType; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(BOOL)isLaunchProhibited;
-(NSNumber *)itemID;
-(NSNumber *)externalVersionIdentifier;
-(NSString *)vendorName;
-(NSString *)itemName;
-(void)setItemID:(NSNumber *)arg1 ;
-(long long)metadataType;
-(void)setStoreMetadata:(MIStoreMetadata *)arg1 ;
-(MIStoreMetadata *)storeMetadata;
-(BOOL)isBeta;
-(NSURL *)artworkURL;
-(void)setArtworkURL:(NSURL *)arg1 ;
-(void)setVendorName:(NSString *)arg1 ;
-(BOOL)hasMessagesExtension;
-(void)setHasMessagesExtension:(BOOL)arg1 ;
-(NSURL *)messagesArtworkURL;
-(void)setMessagesArtworkURL:(NSURL *)arg1 ;
-(void)setLaunchProhibited:(BOOL)arg1 ;
-(void)setExternalVersionIdentifier:(NSNumber *)arg1 ;
-(void)setBeta:(BOOL)arg1 ;
-(void)setInitialODRSize:(NSNumber *)arg1 ;
-(void)setVariantID:(NSString *)arg1 ;
-(void)setItemName:(NSString *)arg1 ;
-(NSURL *)packageURL;
-(void)setPackageURL:(NSURL *)arg1 ;
-(NSNumber *)initialODRSize;
-(NSString *)variantID;
-(id)initWithStoreMetadata:(id)arg1 ;
-(NSData *)packageDPInfo;
-(void)setPackageDPInfo:(NSData *)arg1 ;
-(NSData *)packageSINF;
-(void)setPackageSINF:(NSData *)arg1 ;
@end

