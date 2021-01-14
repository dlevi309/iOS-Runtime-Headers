/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/ASDAppMetadata.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ASDScreenSyncAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding> {

	NSString* _accountName;
	NSString* _bundleID;
	NSNumber* _externalVersionIdentifier;
	NSNumber* _itemID;
	NSString* _itemName;
	NSNumber* _purchaserDSID;
	NSNumber* _storeFront;
	NSString* _vendorName;

}

@property (copy) NSString * accountName;                            //@synthesize accountName=_accountName - In the implementation block
@property (readonly) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (copy) NSNumber * externalVersionIdentifier;              //@synthesize externalVersionIdentifier=_externalVersionIdentifier - In the implementation block
@property (copy) NSNumber * itemID;                                 //@synthesize itemID=_itemID - In the implementation block
@property (copy) NSString * itemName;                               //@synthesize itemName=_itemName - In the implementation block
@property (copy) NSNumber * purchaserDSID;                          //@synthesize purchaserDSID=_purchaserDSID - In the implementation block
@property (copy) NSNumber * storeFront;                             //@synthesize storeFront=_storeFront - In the implementation block
@property (copy) NSString * vendorName;                             //@synthesize vendorName=_vendorName - In the implementation block
@property (readonly) long long metadataType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setAccountName:(NSString *)arg1 ;
-(NSString *)vendorName;
-(NSString *)accountName;
-(void)setItemID:(NSNumber *)arg1 ;
-(NSNumber *)externalVersionIdentifier;
-(NSNumber *)storeFront;
-(void)setExternalVersionIdentifier:(NSNumber *)arg1 ;
-(void)setStoreFront:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
-(NSNumber *)purchaserDSID;
-(NSString *)itemName;
-(void)setPurchaserDSID:(NSNumber *)arg1 ;
-(NSNumber *)itemID;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(long long)metadataType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVendorName:(NSString *)arg1 ;
-(void)setItemName:(NSString *)arg1 ;
@end

