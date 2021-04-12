/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate.h>
#import <CoreDAV/CoreDAVOptionsTaskDelegate.h>
#import <CoreDAV/CoreDAVPrincipalSearchPropertySetTaskDelegate.h>
#import <CoreDAV/CoreDAVTaskDelegate.h>

@class NSURL, NSString, NSSet, NSMutableSet;

@interface CoreDAVGetAccountPropertiesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate, CoreDAVTaskDelegate> {

	NSURL* _principalURL;
	NSString* _displayName;
	NSURL* _resourceID;
	NSSet* _emailAddresses;
	NSSet* _collections;
	NSSet* _principalSearchProperties;
	BOOL _isExpandPropertyReportSupported;
	BOOL _fetchPrincipalSearchProperties;
	BOOL _shouldIgnoreHomeSetOnDifferentHost;
	NSMutableSet* _redirectHistory;

}

@property (nonatomic,readonly) NSURL * principalURL;                                                        //@synthesize principalURL=_principalURL - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                                                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSURL * resourceID;                                                          //@synthesize resourceID=_resourceID - In the implementation block
@property (nonatomic,readonly) NSSet * emailAddresses;                                                      //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,readonly) NSSet * collections;                                                         //@synthesize collections=_collections - In the implementation block
@property (nonatomic,readonly) NSSet * principalSearchProperties;                                           //@synthesize principalSearchProperties=_principalSearchProperties - In the implementation block
@property (nonatomic,readonly) BOOL isExpandPropertyReportSupported;                                        //@synthesize isExpandPropertyReportSupported=_isExpandPropertyReportSupported - In the implementation block
@property (assign,nonatomic) BOOL fetchPrincipalSearchProperties;                                           //@synthesize fetchPrincipalSearchProperties=_fetchPrincipalSearchProperties - In the implementation block
@property (assign,nonatomic,__weak) id<CoreDAVGetAccountPropertiesTaskGroupDelegate> delegate; 
@property (assign,nonatomic) BOOL shouldIgnoreHomeSetOnDifferentHost;                                       //@synthesize shouldIgnoreHomeSetOnDifferentHost=_shouldIgnoreHomeSetOnDifferentHost - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)displayName;
-(NSSet *)emailAddresses;
-(NSURL *)principalURL;
-(NSURL *)resourceID;
-(NSSet *)collections;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(BOOL)isExpandPropertyReportSupported;
-(void)setFetchPrincipalSearchProperties:(BOOL)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(id)_copyAccountPropertiesPropFindElements;
-(void)_setPropertiesFromParsedResponses:(id)arg1 ;
-(BOOL)fetchPrincipalSearchProperties;
-(void)processPrincipalHeaders:(id)arg1 ;
-(id)homeSet;
-(BOOL)forceOptionsRequest;
-(void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
-(NSSet *)principalSearchProperties;
-(BOOL)shouldIgnoreHomeSetOnDifferentHost;
-(void)coaxServerForPrincipalHeaders;
-(void)_taskCompleted:(id)arg1 withError:(id)arg2 ;
-(void)searchPropertySetTask:(id)arg1 completetWithPropertySearchSet:(id)arg2 error:(id)arg3 ;
-(void)setShouldIgnoreHomeSetOnDifferentHost:(BOOL)arg1 ;
@end

