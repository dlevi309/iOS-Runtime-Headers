/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <libobjc.A.dylib/ICDataPersister.h>

@protocol ICDataPersister
@required
-(id)loadDataForIdentifier:(id)arg1;
-(BOOL)saveData:(id)arg1 identifier:(id)arg2;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICDataCryptor, NSURL, NSString, NSMutableArray, NSMutableDictionary;

@interface ICDataPersister : NSObject <ICDataPersister, NSSecureCoding> {

	unsigned long long _accumulatedDataSize;
	ICDataCryptor* _dataCryptor;
	NSURL* _cacheDirectoryURL;
	NSString* _objectIdentifier;
	NSMutableArray* _allURLs;
	NSMutableDictionary* _identifierToDataDictionary;

}

@property (nonatomic,readonly) ICDataCryptor * dataCryptor;                                   //@synthesize dataCryptor=_dataCryptor - In the implementation block
@property (nonatomic,readonly) NSURL * cacheDirectoryURL;                                     //@synthesize cacheDirectoryURL=_cacheDirectoryURL - In the implementation block
@property (nonatomic,readonly) NSString * objectIdentifier;                                   //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableArray * allURLs;                                      //@synthesize allURLs=_allURLs - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * identifierToDataDictionary;              //@synthesize identifierToDataDictionary=_identifierToDataDictionary - In the implementation block
@property (assign,nonatomic) unsigned long long accumulatedDataSize;                          //@synthesize accumulatedDataSize=_accumulatedDataSize - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)rootCacheDirectoryPathForPasteboard:(BOOL)arg1 ;
+(void)deletePasteboardDataFiles;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableArray *)allURLs;
-(NSString *)objectIdentifier;
-(NSURL *)cacheDirectoryURL;
-(id)loadDataForIdentifier:(id)arg1 ;
-(BOOL)saveData:(id)arg1 identifier:(id)arg2 ;
-(void)createDataCryptorIfNecessary;
-(BOOL)makeSureCacheDirectoryExists;
-(ICDataCryptor *)dataCryptor;
-(unsigned long long)accumulatedDataSize;
-(void)setAccumulatedDataSize:(unsigned long long)arg1 ;
-(NSMutableDictionary *)identifierToDataDictionary;
-(id)initWithObjectIdentifier:(id)arg1 forPasteboard:(BOOL)arg2 ;
-(void)deleteDataFiles;
-(BOOL)verifyDataFiles;
@end

