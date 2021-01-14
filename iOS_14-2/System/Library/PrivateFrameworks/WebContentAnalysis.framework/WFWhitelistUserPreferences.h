/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/


@class WFWhitelistSiteBuffer, NSString;

@interface WFWhitelistUserPreferences : NSObject {

	WFWhitelistSiteBuffer* filterWhitelist;
	WFWhitelistSiteBuffer* filterBlacklist;
	WFWhitelistSiteBuffer* webWhitelist;
	BOOL filterEnabled;
	BOOL whitelistEnabled;
	BOOL alwaysAllowHTTPS;
	NSString* username;

}

@property (assign) BOOL filterEnabled; 
@property (assign) BOOL whitelistEnabled; 
@property (assign) BOOL alwaysAllowHTTPS; 
@property (retain) NSString * username; 
@property (readonly) WFWhitelistSiteBuffer * filterWhitelist; 
@property (readonly) WFWhitelistSiteBuffer * filterBlacklist; 
@property (readonly) WFWhitelistSiteBuffer * webWhitelist; 
+(id)metasitesPath;
+(id)_arrayByConvertingLinesInStringsAtPath:(id)arg1 ;
+(id)metasitesExceptionPath;
+(id)_metasiteDomainNamesArray;
+(id)_sharedMetasiteDomainNamesDictionary;
+(id)_sharedMetasiteExceptionsDomainNamesArray;
+(id)preferencesPathForUsername:(id)arg1 ;
+(id)whitelistWithPreferences:(id)arg1 ;
+(id)_modificationDateForFileAtPath:(id)arg1 ;
+(id)_cachedWhitelistForPath:(id)arg1 username:(id)arg2 ;
+(BOOL)_isURLMetasite:(id)arg1 ;
+(id)whitelistForUser:(id)arg1 ;
+(id)defaultWhitelistForUser:(id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(id)init;
-(BOOL)alwaysAllowHTTPS;
-(NSString *)username;
-(id)description;
-(id)initWithPreferences:(id)arg1 ;
-(void)setAlwaysAllowHTTPS:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isURLAllowed:(id)arg1 reason:(id*)arg2 shouldFilter:(BOOL*)arg3 foundOnList:(BOOL*)arg4 ;
-(BOOL)isURL:(id)arg1 onList:(id)arg2 ;
-(BOOL)isURLAllowed:(id)arg1 ;
-(id)pronounceOnPageURLString:(id)arg1 shouldFilter:(BOOL*)arg2 ;
-(BOOL)filterEnabled;
-(void)setFilterEnabled:(BOOL)arg1 ;
-(BOOL)whitelistEnabled;
-(void)setWhitelistEnabled:(BOOL)arg1 ;
-(WFWhitelistSiteBuffer *)filterWhitelist;
-(WFWhitelistSiteBuffer *)filterBlacklist;
-(WFWhitelistSiteBuffer *)webWhitelist;
@end

