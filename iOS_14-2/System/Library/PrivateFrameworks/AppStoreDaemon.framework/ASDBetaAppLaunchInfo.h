/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, ASDBetaAppDisplayNames, NSDate, NSDictionary, ASDBetaAppVersion;

@interface ASDBetaAppLaunchInfo : NSObject <NSSecureCoding> {

	BOOL _feedbackEnabled;
	BOOL _launchScreenEnabled;
	BOOL _sharedFeedback;
	NSString* _artistName;
	ASDBetaAppDisplayNames* _displayNames;
	NSDate* _expirationDate;
	NSString* _iconURLTemplate;
	NSDate* _lastWelcomeScreenViewDate;
	NSDictionary* _localizedTestNotes;
	NSString* _testerEmail;
	ASDBetaAppVersion* _version;

}

@property (copy) NSString * artistName;                                         //@synthesize artistName=_artistName - In the implementation block
@property (copy) ASDBetaAppDisplayNames * displayNames;                         //@synthesize displayNames=_displayNames - In the implementation block
@property (copy) NSDate * expirationDate;                                       //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isFeedbackEnabled) BOOL feedbackEnabled;                      //@synthesize feedbackEnabled=_feedbackEnabled - In the implementation block
@property (copy) NSString * iconURLTemplate;                                    //@synthesize iconURLTemplate=_iconURLTemplate - In the implementation block
@property (copy) NSDate * lastWelcomeScreenViewDate;                            //@synthesize lastWelcomeScreenViewDate=_lastWelcomeScreenViewDate - In the implementation block
@property (getter=isLaunchScreenEnabled) BOOL launchScreenEnabled;              //@synthesize launchScreenEnabled=_launchScreenEnabled - In the implementation block
@property (copy) NSDictionary * localizedTestNotes;                             //@synthesize localizedTestNotes=_localizedTestNotes - In the implementation block
@property (getter=hasSharedFeedback) BOOL sharedFeedback;                       //@synthesize sharedFeedback=_sharedFeedback - In the implementation block
@property (copy) NSString * testerEmail;                                        //@synthesize testerEmail=_testerEmail - In the implementation block
@property (copy) ASDBetaAppVersion * version;                                   //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setArtistName:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)artistName;
-(id)description;
-(NSDate *)expirationDate;
-(id)initWithCoder:(id)arg1 ;
-(void)setVersion:(ASDBetaAppVersion *)arg1 ;
-(ASDBetaAppDisplayNames *)displayNames;
-(void)setDisplayNames:(ASDBetaAppDisplayNames *)arg1 ;
-(ASDBetaAppVersion *)version;
-(BOOL)isFeedbackEnabled;
-(NSString *)iconURLTemplate;
-(NSDate *)lastWelcomeScreenViewDate;
-(NSDictionary *)localizedTestNotes;
-(BOOL)hasSharedFeedback;
-(NSString *)testerEmail;
-(void)setFeedbackEnabled:(BOOL)arg1 ;
-(void)setIconURLTemplate:(NSString *)arg1 ;
-(void)setLastWelcomeScreenViewDate:(NSDate *)arg1 ;
-(BOOL)isLaunchScreenEnabled;
-(void)setLaunchScreenEnabled:(BOOL)arg1 ;
-(void)setLocalizedTestNotes:(NSDictionary *)arg1 ;
-(void)setSharedFeedback:(BOOL)arg1 ;
-(void)setTesterEmail:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

