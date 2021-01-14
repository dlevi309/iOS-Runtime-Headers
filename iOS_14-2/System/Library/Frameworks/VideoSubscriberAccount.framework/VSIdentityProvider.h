/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, VSOptional, NSNumber, NSArray, NSURL;

@interface VSIdentityProvider : NSObject <NSCopying, NSSecureCoding> {

	NSString* _displayName;
	BOOL _prohibitedByStore;
	BOOL _developer;
	BOOL _application;
	BOOL _isSetTopBoxSupported;
	BOOL _isSTBOptOutAllowed;
	VSOptional* _uniqueID;
	VSOptional* _providerID;
	VSOptional* _providerInfo;
	NSString* _nameForSorting;
	NSNumber* _rankForSorting;
	NSArray* _supportedTemplates;
	NSArray* _supportedAuthenticationSchemes;
	NSURL* _authenticationURL;
	NSURL* _appStoreRoomURL;
	NSArray* _appAdamIDs;
	NSString* _defaultAppId;
	NSString* _providerArtworkTemplateURL;
	NSString* _providerAppArtworkTemplateURL;
	NSNumber* _appPlacementPosition;
	NSString* _userToken;

}

@property (nonatomic,retain) VSOptional * uniqueID;                                          //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,retain) VSOptional * providerID;                                        //@synthesize providerID=_providerID - In the implementation block
@property (nonatomic,retain) VSOptional * providerInfo;                                      //@synthesize providerInfo=_providerInfo - In the implementation block
@property (nonatomic,copy) NSString * nameForSorting;                                        //@synthesize nameForSorting=_nameForSorting - In the implementation block
@property (nonatomic,copy) NSNumber * rankForSorting;                                        //@synthesize rankForSorting=_rankForSorting - In the implementation block
@property (nonatomic,readonly) VSOptional * displayName; 
@property (nonatomic,copy) NSArray * supportedTemplates;                                     //@synthesize supportedTemplates=_supportedTemplates - In the implementation block
@property (nonatomic,copy) NSArray * supportedAuthenticationSchemes;                         //@synthesize supportedAuthenticationSchemes=_supportedAuthenticationSchemes - In the implementation block
@property (assign,getter=isProhibitedByStore,nonatomic) BOOL prohibitedByStore;              //@synthesize prohibitedByStore=_prohibitedByStore - In the implementation block
@property (assign,getter=isDeveloper,nonatomic) BOOL developer;                              //@synthesize developer=_developer - In the implementation block
@property (assign,getter=isApplication,nonatomic) BOOL application;                          //@synthesize application=_application - In the implementation block
@property (nonatomic,copy) NSURL * authenticationURL;                                        //@synthesize authenticationURL=_authenticationURL - In the implementation block
@property (nonatomic,copy) NSURL * appStoreRoomURL;                                          //@synthesize appStoreRoomURL=_appStoreRoomURL - In the implementation block
@property (nonatomic,copy) NSArray * appAdamIDs;                                             //@synthesize appAdamIDs=_appAdamIDs - In the implementation block
@property (nonatomic,copy) NSString * defaultAppId;                                          //@synthesize defaultAppId=_defaultAppId - In the implementation block
@property (nonatomic,copy) NSString * providerArtworkTemplateURL;                            //@synthesize providerArtworkTemplateURL=_providerArtworkTemplateURL - In the implementation block
@property (assign,nonatomic) BOOL isSetTopBoxSupported;                                      //@synthesize isSetTopBoxSupported=_isSetTopBoxSupported - In the implementation block
@property (assign,nonatomic) BOOL isSTBOptOutAllowed;                                        //@synthesize isSTBOptOutAllowed=_isSTBOptOutAllowed - In the implementation block
@property (nonatomic,copy) NSString * providerAppArtworkTemplateURL;                         //@synthesize providerAppArtworkTemplateURL=_providerAppArtworkTemplateURL - In the implementation block
@property (nonatomic,copy) NSNumber * appPlacementPosition;                                  //@synthesize appPlacementPosition=_appPlacementPosition - In the implementation block
@property (nonatomic,copy) NSString * userToken;                                             //@synthesize userToken=_userToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setApplication:(BOOL)arg1 ;
-(VSOptional *)providerID;
-(void)setUniqueID:(VSOptional *)arg1 ;
-(VSOptional *)uniqueID;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isApplication;
-(id)description;
-(NSString *)userToken;
-(void)setUserToken:(NSString *)arg1 ;
-(void)setProviderID:(VSOptional *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(VSOptional *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)appAdamIDs;
-(VSOptional *)providerInfo;
-(void)setAuthenticationURL:(NSURL *)arg1 ;
-(NSURL *)authenticationURL;
-(NSArray *)supportedAuthenticationSchemes;
-(BOOL)isSetTopBoxSupported;
-(BOOL)isFullySupportedForRequestsExpectingAuthenticationSchemes:(id)arg1 ;
-(void)setProviderInfo:(VSOptional *)arg1 ;
-(NSString *)nameForSorting;
-(BOOL)isDeveloper;
-(BOOL)isProhibitedByStore;
-(BOOL)supportsRequestsExpectingAuthenticationSchemes:(id)arg1 ;
-(id)initWithApplicationProvider:(id)arg1 ;
-(void)setNameForSorting:(NSString *)arg1 ;
-(void)setDeveloper:(BOOL)arg1 ;
-(NSArray *)supportedTemplates;
-(NSNumber *)rankForSorting;
-(void)setRankForSorting:(NSNumber *)arg1 ;
-(void)setSupportedTemplates:(NSArray *)arg1 ;
-(void)setSupportedAuthenticationSchemes:(NSArray *)arg1 ;
-(void)setProhibitedByStore:(BOOL)arg1 ;
-(NSURL *)appStoreRoomURL;
-(void)setAppStoreRoomURL:(NSURL *)arg1 ;
-(void)setAppAdamIDs:(NSArray *)arg1 ;
-(NSString *)defaultAppId;
-(void)setDefaultAppId:(NSString *)arg1 ;
-(NSString *)providerArtworkTemplateURL;
-(void)setProviderArtworkTemplateURL:(NSString *)arg1 ;
-(void)setIsSetTopBoxSupported:(BOOL)arg1 ;
-(BOOL)isSTBOptOutAllowed;
-(void)setIsSTBOptOutAllowed:(BOOL)arg1 ;
-(NSString *)providerAppArtworkTemplateURL;
-(void)setProviderAppArtworkTemplateURL:(NSString *)arg1 ;
-(NSNumber *)appPlacementPosition;
-(void)setAppPlacementPosition:(NSNumber *)arg1 ;
@end

