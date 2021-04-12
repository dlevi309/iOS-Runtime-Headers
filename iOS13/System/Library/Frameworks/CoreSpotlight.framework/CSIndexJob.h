/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)providerIdentifier;
-(void)setProviderIdentifier:(NSString *)arg1 ;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(CSSearchContext *)searchContext;
-(void)setSearchContext:(CSSearchContext *)arg1 ;
-(void)setProviderType:(NSString *)arg1 ;
-(long long)jobType;
-(void)setJobType:(long long)arg1 ;
-(id)initWithXPCDict:(id)arg1 ;
-(long long)jobOptions;
-(NSArray *)identifiersToReindex;
-(NSString *)extensionBundleID;
-(void)setIdentifiersToReindex:(NSArray *)arg1 ;
-(NSString *)providerType;
-(NSData *)importData;
-(id)xpc_dictionary;
-(void)setJobOptions:(long long)arg1 ;
-(id)initWithJobType:(long long)arg1 jobOptions:(long long)arg2 ;
-(NSArray *)excludedBundleIDs;
-(void)setExcludedBundleIDs:(NSArray *)arg1 ;
-(void)setExtensionBundleID:(NSString *)arg1 ;
-(void)setImportData:(NSData *)arg1 ;
-(id)initWithJobType:(long long)arg1 ;
@end

