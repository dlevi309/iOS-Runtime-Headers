/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ASDBetaAppVersion *)version;
-(void)setVersion:(ASDBetaAppVersion *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(ASDBetaAppDisplayNames *)displayNames;
-(BOOL)isFeedbackEnabled;
-(NSString *)iconURLTemplate;
-(NSDate *)lastWelcomeScreenViewDate;
-(NSDictionary *)localizedTestNotes;
-(BOOL)hasSharedFeedback;
-(NSString *)testerEmail;
-(void)setDisplayNames:(ASDBetaAppDisplayNames *)arg1 ;
-(void)setFeedbackEnabled:(BOOL)arg1 ;
-(void)setIconURLTemplate:(NSString *)arg1 ;
-(void)setLastWelcomeScreenViewDate:(NSDate *)arg1 ;
-(BOOL)isLaunchScreenEnabled;
-(void)setLaunchScreenEnabled:(BOOL)arg1 ;
-(void)setLocalizedTestNotes:(NSDictionary *)arg1 ;
-(void)setSharedFeedback:(BOOL)arg1 ;
-(void)setTesterEmail:(NSString *)arg1 ;
@end

