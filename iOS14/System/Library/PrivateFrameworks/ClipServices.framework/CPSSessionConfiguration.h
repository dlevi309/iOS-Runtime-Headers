/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface CPSSessionConfiguration : NSObject <NSSecureCoding> {

	BOOL _usedByPPT;
	BOOL _useLocalContent;
	BOOL _originIsControlCenter;
	BOOL _isForSwitcherOverlay;
	NSUUID* _sessionID;
	NSString* _sourceBundleID;
	NSString* _referrerBundleID;
	NSString* _fallbackClipBundleID;
	NSString* _launchReason;

}

@property (nonatomic,retain) NSUUID * sessionID;                                    //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSString * sourceBundleID;                             //@synthesize sourceBundleID=_sourceBundleID - In the implementation block
@property (assign,nonatomic) BOOL usedByPPT;                                        //@synthesize usedByPPT=_usedByPPT - In the implementation block
@property (assign,nonatomic) BOOL useLocalContent;                                  //@synthesize useLocalContent=_useLocalContent - In the implementation block
@property (nonatomic,copy) NSString * fallbackClipBundleID;                         //@synthesize fallbackClipBundleID=_fallbackClipBundleID - In the implementation block
@property (nonatomic,copy) NSString * referrerBundleID;                             //@synthesize referrerBundleID=_referrerBundleID - In the implementation block
@property (nonatomic,readonly) BOOL canPrefetchEncryptionKey; 
@property (nonatomic,readonly) BOOL mayLaunchWithoutInvocationUI; 
@property (nonatomic,copy) NSString * launchReason;                                 //@synthesize launchReason=_launchReason - In the implementation block
@property (nonatomic,readonly) NSString * analyticsReferrerBundleID; 
@property (nonatomic,readonly) NSString * analyticsLaunchReason; 
@property (nonatomic,readonly) BOOL analyticsShouldIncludeReferrerURL; 
@property (assign,nonatomic) BOOL originIsControlCenter;                            //@synthesize originIsControlCenter=_originIsControlCenter - In the implementation block
@property (assign,nonatomic) BOOL isForSwitcherOverlay;                             //@synthesize isForSwitcherOverlay=_isForSwitcherOverlay - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)standardConfiguration;
+(id)standardConfigurationWithFallbackClipBundleID:(id)arg1 ;
+(id)reasonForSourceBundleID:(id)arg1 ;
+(id)_defaultSourceBundleIDToReasonMap;
+(id)localConfiguration;
+(id)pptConfiguration;
+(id)pptLocalConfiguration;
-(NSUUID *)sessionID;
-(void)setSessionID:(NSUUID *)arg1 ;
-(void)setLaunchReason:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)sourceBundleID;
-(NSString *)referrerBundleID;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setReferrerBundleID:(NSString *)arg1 ;
-(NSString *)launchReason;
-(BOOL)canPrefetchEncryptionKey;
-(NSString *)analyticsReferrerBundleID;
-(NSString *)analyticsLaunchReason;
-(BOOL)usedByPPT;
-(BOOL)useLocalContent;
-(BOOL)isForSwitcherOverlay;
-(void)setIsForSwitcherOverlay:(BOOL)arg1 ;
-(NSString *)fallbackClipBundleID;
-(BOOL)originIsControlCenter;
-(void)setSourceBundleID:(NSString *)arg1 ;
-(void)setFallbackClipBundleID:(NSString *)arg1 ;
-(void)setUseLocalContent:(BOOL)arg1 ;
-(void)setUsedByPPT:(BOOL)arg1 ;
-(BOOL)analyticsShouldIncludeReferrerURL;
-(BOOL)mayLaunchWithoutInvocationUI;
-(void)setOriginIsControlCenter:(BOOL)arg1 ;
@end

