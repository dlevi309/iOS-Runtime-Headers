/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/ASDAppMetadata.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ASDWatchAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding> {

	BOOL _skipIfInstalled;
	NSString* _altDSID;
	NSString* _appleID;
	NSString* _bundleID;
	NSNumber* _downloaderID;
	NSNumber* _externalVersionID;
	NSNumber* _itemID;
	NSNumber* _previousExternalVersionID;
	NSString* _previousVariantID;
	NSNumber* _purchaserID;
	NSString* _redownloadParams;

}

@property (assign) BOOL skipIfInstalled;                            //@synthesize skipIfInstalled=_skipIfInstalled - In the implementation block
@property (copy) NSString * altDSID;                                //@synthesize altDSID=_altDSID - In the implementation block
@property (copy) NSString * appleID;                                //@synthesize appleID=_appleID - In the implementation block
@property (copy) NSString * bundleID;                               //@synthesize bundleID=_bundleID - In the implementation block
@property (copy) NSNumber * downloaderID;                           //@synthesize downloaderID=_downloaderID - In the implementation block
@property (copy) NSNumber * externalVersionID;                      //@synthesize externalVersionID=_externalVersionID - In the implementation block
@property (copy) NSNumber * itemID;                                 //@synthesize itemID=_itemID - In the implementation block
@property (copy) NSNumber * previousExternalVersionID;              //@synthesize previousExternalVersionID=_previousExternalVersionID - In the implementation block
@property (copy) NSString * previousVariantID;                      //@synthesize previousVariantID=_previousVariantID - In the implementation block
@property (copy) NSNumber * purchaserID;                            //@synthesize purchaserID=_purchaserID - In the implementation block
@property (copy) NSString * redownloadParams;                       //@synthesize redownloadParams=_redownloadParams - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) long long metadataType; 
+(BOOL)supportsSecureCoding;
+(id)metadataFromStoreMetadata:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(NSNumber *)itemID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(NSString *)appleID;
-(long long)metadataType;
-(void)setAppleID:(NSString *)arg1 ;
-(NSString *)redownloadParams;
-(void)setDownloaderID:(NSNumber *)arg1 ;
-(void)setPurchaserID:(NSNumber *)arg1 ;
-(void)setRedownloadParams:(NSString *)arg1 ;
-(NSNumber *)downloaderID;
-(NSNumber *)purchaserID;
-(id)initWithStoreMetadata:(id)arg1 ;
-(id)initWithItemID:(id)arg1 externalVersionID:(id)arg2 ;
-(void)setExternalVersionID:(NSNumber *)arg1 ;
-(void)setPreviousExternalVersionID:(NSNumber *)arg1 ;
-(void)setPreviousVariantID:(NSString *)arg1 ;
-(void)setSkipIfInstalled:(BOOL)arg1 ;
-(id)initWithItemID:(id)arg1 ;
-(NSNumber *)externalVersionID;
-(NSNumber *)previousExternalVersionID;
-(NSString *)previousVariantID;
-(BOOL)skipIfInstalled;
@end

