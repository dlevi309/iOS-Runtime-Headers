/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
*/

#import <libobjc.A.dylib/GSAdditionStoringPrivate.h>
#import <libobjc.A.dylib/GSAdditionStoring.h>

@class NSURL, GSDocumentIdentifier, GSStagingPrefix, NSData;

@interface GSPermanentStorage : NSObject <GSAdditionStoringPrivate, GSAdditionStoring> {

	GSDocumentIdentifier* _documentID;
	GSStagingPrefix* _stagingPrefix;
	NSURL* _documentURL;
	unsigned long long _remoteID;
	unsigned long long _storageID;
	NSData* _pubExtension;
	NSData* _privExtension;
	long long _pubHandle;
	long long _privHandle;

}

@property (nonatomic,readonly) long long remoteID; 
@property (nonatomic,retain) GSStagingPrefix * stagingPrefix;                                   //@synthesize stagingPrefix=_stagingPrefix - In the implementation block
@property (retain) NSData * pubExtension; 
@property (retain) NSData * privExtension; 
@property (nonatomic,readonly) GSDocumentIdentifier * documentID; 
@property (nonatomic,readonly) unsigned long long storageID;                                    //@synthesize storageID=_storageID - In the implementation block
@property (retain) NSURL * documentURL;                                                         //@synthesize documentURL=_documentURL - In the implementation block
@property (nonatomic,readonly) id<NSCopying><NSSecureCoding> persistentIdentifier;              //@synthesize documentID=_documentID - In the implementation block
+(id)storagePrefixForFileDescriptor:(int)arg1 error:(id*)arg2 ;
+(id)storageIDForItemAtURL:(id)arg1 error:(id*)arg2 ;
-(void)_invalidate;
-(id)enumeratorForAdditionsInNameSpace:(id)arg1 withOptions:(unsigned long long)arg2 withoutOptions:(unsigned long long)arg3 ordering:(int)arg4 ;
-(id)prepareAdditionCreationWithItemAtURL:(id)arg1 byMoving:(BOOL)arg2 creationInfo:(id)arg3 error:(id*)arg4 ;
-(void)createAdditionStagedAtURL:(id)arg1 creationInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)finalize;
-(id)init;
-(void)removeAllAdditionsForNamespaces:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAdditions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)additionWithName:(id)arg1 inNameSpace:(id)arg2 error:(id*)arg3 ;
-(NSURL *)documentURL;
-(id<NSCopying><NSSecureCoding>)persistentIdentifier;
-(id)description;
-(GSDocumentIdentifier *)documentID;
-(unsigned long long)hash;
-(long long)remoteID;
-(void)cleanupStagingURL:(id)arg1 ;
-(void)setDocumentURL:(NSURL *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)storageID;
-(BOOL)replaceDocumentWithContentsOfAddition:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id*)arg3 error:(id*)arg4 ;
-(id)stagingURLforCreatingAdditionWithError:(id*)arg1 ;
-(NSData *)privExtension;
-(NSData *)pubExtension;
-(id)getAdditionDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAdditionOptions:(id)arg1 value:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)setAdditionDisplayName:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(id)setAdditionNameSpace:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(BOOL)mergeAdditionUserInfo:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(void)_connectionWithDaemonWasLost;
-(id)URLforReplacingItemWithError:(id*)arg1 ;
-(void)setPubExtension:(NSData *)arg1 ;
-(void)setPrivExtension:(NSData *)arg1 ;
-(BOOL)_refreshRemoteIDWithFileDescriptor:(int)arg1 error:(id*)arg2 ;
-(BOOL)replaceDocumentWithContentsOfItemAtURL:(id)arg1 preservingCurrentVersionWithCreationInfo:(id)arg2 createdAddition:(id*)arg3 error:(id*)arg4 ;
-(id)additionsWithNames:(id)arg1 inNameSpace:(id)arg2 error:(id*)arg3 ;
-(id)initWithFileDescriptor:(int)arg1 documentID:(id)arg2 forItemAtURL:(id)arg3 error:(id*)arg4 ;
-(BOOL)transferToItemAtURL:(id)arg1 error:(id*)arg2 ;
-(GSStagingPrefix *)stagingPrefix;
-(void)setStagingPrefix:(GSStagingPrefix *)arg1 ;
@end

