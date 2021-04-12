/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSMutableDictionary, NSObject, NSArray, NSSet, NSDate, NSString, ICURLBagRadioConfiguration, ICURLBagLibraryDAAPConfiguration;

@interface ICURLBag : NSObject {

	NSDictionary* _bagValues;
	NSMutableDictionary* _convertedActionsCache;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _GUIDURLRegexPatterns;
	NSSet* _GUIDURLSchemes;
	NSDate* _expirationDate;
	NSString* _serverCorrelationKey;
	NSString* _serverEnvironment;

}

@property (nonatomic,copy) NSDictionary * bagValues;                                                     //@synthesize bagValues=_bagValues - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * convertedActionsCache;                                //@synthesize convertedActionsCache=_convertedActionsCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                         //@synthesize queue=_queue - In the implementation block
@property (getter=UIDURLRegexPatterns,nonatomic,retain) NSArray * GUIDURLRegexPatterns;                  //@synthesize GUIDURLRegexPatterns=_GUIDURLRegexPatterns - In the implementation block
@property (getter=UIDURLSchemes,nonatomic,retain) NSSet * GUIDURLSchemes;                                //@synthesize GUIDURLSchemes=_GUIDURLSchemes - In the implementation block
@property (nonatomic,readonly) NSDictionary * _propertyListRepresentation; 
@property (setter=_setExpirationDate:,nonatomic,copy) NSDate * expirationDate;                           //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * allValues; 
@property (nonatomic,readonly) BOOL canPostKeybagSyncData; 
@property (nonatomic,readonly) ICURLBagRadioConfiguration * radioConfiguration; 
@property (nonatomic,readonly) ICURLBagLibraryDAAPConfiguration * libraryDAAPConfiguration; 
@property (nonatomic,copy,readonly) NSString * storefrontHeaderSuffix; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,copy,readonly) NSString * serverCorrelationKey;                                     //@synthesize serverCorrelationKey=_serverCorrelationKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverEnvironment;                                        //@synthesize serverEnvironment=_serverEnvironment - In the implementation block
-(id)valueForBagKey:(id)arg1 ;
-(ICURLBagRadioConfiguration *)radioConfiguration;
-(NSSet *)GUIDURLSchemes;
-(void)_setExpirationDate:(id)arg1 ;
-(BOOL)shouldAppendMachineDataHeadersForURL:(id)arg1 ;
-(id)mescalConfigurationForRequestURL:(id)arg1 ;
-(id)_initWithDictionary:(id)arg1 expirationDate:(id)arg2 serverCorrelationKey:(id)arg3 serverEnvironment:(id)arg4 ;
-(void)_validateGUIDURLConfigIfNeeded;
-(id)mescalConfigurationForRequest:(id)arg1 ;
-(BOOL)_shouldMescalSignBodyForURL:(id)arg1 withSignatureConfiguration:(id)arg2 ;
-(id)urlForBagKey:(id)arg1 ;
-(BOOL)canPostKeybagSyncData;
-(void)setConvertedActionsCache:(NSMutableDictionary *)arg1 ;
-(void)setBagValues:(NSDictionary *)arg1 ;
-(NSDictionary *)_propertyListRepresentation;
-(NSDate *)expirationDate;
-(id)mescalConfigurationForResponseURL:(id)arg1 ;
-(BOOL)isExpired;
-(NSArray *)GUIDURLRegexPatterns;
-(ICURLBagLibraryDAAPConfiguration *)libraryDAAPConfiguration;
-(NSDictionary *)allValues;
-(id)mescalConfigurationForResponse:(id)arg1 ;
-(NSString *)serverEnvironment;
-(long long)int64ValueForBagKey:(id)arg1 ;
-(void)setGUIDURLRegexPatterns:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableDictionary *)convertedActionsCache;
-(id)_initWithPropertyListRepresentation:(id)arg1 ;
-(BOOL)boolValueForBagKey:(id)arg1 ;
-(NSString *)storefrontHeaderSuffix;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)shouldAppendDeviceGUIDForURL:(id)arg1 ;
-(BOOL)hasValueForBagKey:(id)arg1 ;
-(void)setGUIDURLSchemes:(NSSet *)arg1 ;
-(NSDictionary *)bagValues;
-(NSString *)serverCorrelationKey;
@end

