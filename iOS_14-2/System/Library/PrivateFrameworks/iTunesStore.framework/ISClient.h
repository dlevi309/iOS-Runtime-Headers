/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@class NSString, NSDictionary, NSLock;

@interface ISClient : NSObject {

	NSString* _appleClientVersions;
	NSString* _appleClientApplication;
	NSString* _identifier;
	NSString* _partnerHeader;
	NSString* _userAgent;
	NSDictionary* _clientProvidedHeaders;
	NSLock* _lock;

}

@property (nonatomic,retain) NSLock * lock;                         //@synthesize lock=_lock - In the implementation block
@property (copy) NSString * appleClientApplication;                 //@synthesize appleClientApplication=_appleClientApplication - In the implementation block
@property (copy) NSString * userAgent;                              //@synthesize userAgent=_userAgent - In the implementation block
@property (readonly) NSString * appleClientVersions;                //@synthesize appleClientVersions=_appleClientVersions - In the implementation block
@property (copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * partnerHeader;                          //@synthesize partnerHeader=_partnerHeader - In the implementation block
@property (copy) NSDictionary * clientProvidedHeaders;              //@synthesize clientProvidedHeaders=_clientProvidedHeaders - In the implementation block
+(id)currentClient;
-(void)_softwareMapInvalidatedNotification:(id)arg1 ;
-(id)init;
-(NSLock *)lock;
-(void)setAppleClientApplication:(NSString *)arg1 ;
-(void)setPartnerHeader:(NSString *)arg1 ;
-(id)localStoreFrontID;
-(void)setLock:(NSLock *)arg1 ;
-(id)_appleClientVersions;
-(NSDictionary *)clientProvidedHeaders;
-(NSString *)userAgent;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)appleClientVersions;
-(NSString *)appleClientApplication;
-(NSString *)partnerHeader;
-(void)setClientProvidedHeaders:(NSDictionary *)arg1 ;
-(void)dealloc;
@end

