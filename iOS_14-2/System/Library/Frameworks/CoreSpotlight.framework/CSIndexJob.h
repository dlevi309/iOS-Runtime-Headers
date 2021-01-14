/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, CSSearchContext, NSData;

@interface CSIndexJob : NSObject <NSSecureCoding, NSCopying> {

	long long _jobType;
	long long _jobOptions;
	NSArray* _identifiersToReindex;
	NSArray* _bundleIDs;
	NSArray* _excludedBundleIDs;
	NSString* _providerIdentifier;
	NSString* _providerType;
	NSString* _extensionBundleID;
	CSSearchContext* _searchContext;
	NSData* _importData;
	NSString* _fileType;
	NSArray* _fileAttributeSets;

}

@property (assign,nonatomic) long long jobType;                            //@synthesize jobType=_jobType - In the implementation block
@property (assign,nonatomic) long long jobOptions;                         //@synthesize jobOptions=_jobOptions - In the implementation block
@property (nonatomic,retain) NSArray * identifiersToReindex;               //@synthesize identifiersToReindex=_identifiersToReindex - In the implementation block
@property (nonatomic,retain) NSArray * bundleIDs;                          //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,retain) NSArray * excludedBundleIDs;                  //@synthesize excludedBundleIDs=_excludedBundleIDs - In the implementation block
@property (nonatomic,retain) NSString * providerIdentifier;                //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
@property (nonatomic,retain) NSString * providerType;                      //@synthesize providerType=_providerType - In the implementation block
@property (nonatomic,retain) NSString * extensionBundleID;                 //@synthesize extensionBundleID=_extensionBundleID - In the implementation block
@property (nonatomic,retain) CSSearchContext * searchContext;              //@synthesize searchContext=_searchContext - In the implementation block
@property (nonatomic,retain) NSData * importData;                          //@synthesize importData=_importData - In the implementation block
@property (nonatomic,retain) NSString * fileType;                          //@synthesize fileType=_fileType - In the implementation block
@property (nonatomic,copy) NSArray * fileAttributeSets;                    //@synthesize fileAttributeSets=_fileAttributeSets - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)xpc_dictionary;
-(NSArray *)bundleIDs;
-(void)setJobType:(long long)arg1 ;
-(NSString *)providerIdentifier;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(void)setExtensionBundleID:(NSString *)arg1 ;
-(id)initWithXPCDict:(id)arg1 ;
-(id)initWithJobType:(long long)arg1 jobOptions:(long long)arg2 ;
-(long long)jobType;
-(void)setFileType:(NSString *)arg1 ;
-(void)setProviderIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setProviderType:(NSString *)arg1 ;
-(long long)jobOptions;
-(void)setImportData:(NSData *)arg1 ;
-(id)initWithJobType:(long long)arg1 ;
-(id)description;
-(NSArray *)fileAttributeSets;
-(NSArray *)identifiersToReindex;
-(NSString *)providerType;
-(void)setExcludedBundleIDs:(NSArray *)arg1 ;
-(void)setSearchContext:(CSSearchContext *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(CSSearchContext *)searchContext;
-(void)setJobOptions:(long long)arg1 ;
-(NSArray *)excludedBundleIDs;
-(void)setFileAttributeSets:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)extensionBundleID;
-(void)setIdentifiersToReindex:(NSArray *)arg1 ;
-(NSData *)importData;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)fileType;
@end

