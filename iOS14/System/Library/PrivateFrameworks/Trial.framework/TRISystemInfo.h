/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface TRISystemInfo : NSObject <NSSecureCoding> {

	BOOL _isEnrolledInBetaProgram;
	BOOL _logUserSettingsLanguageCode;
	BOOL _logUserSettingsRegionCode;
	BOOL _logUserKeyboardEnabledInputMode;
	NSArray* _enabledInputModeIdentifiers;

}

@property (assign,nonatomic) BOOL isEnrolledInBetaProgram;                       //@synthesize isEnrolledInBetaProgram=_isEnrolledInBetaProgram - In the implementation block
@property (nonatomic,retain) NSArray * enabledInputModeIdentifiers;              //@synthesize enabledInputModeIdentifiers=_enabledInputModeIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL logUserSettingsLanguageCode;                   //@synthesize logUserSettingsLanguageCode=_logUserSettingsLanguageCode - In the implementation block
@property (assign,nonatomic) BOOL logUserSettingsRegionCode;                     //@synthesize logUserSettingsRegionCode=_logUserSettingsRegionCode - In the implementation block
@property (assign,nonatomic) BOOL logUserKeyboardEnabledInputMode;               //@synthesize logUserKeyboardEnabledInputMode=_logUserKeyboardEnabledInputMode - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)info;
+(id)loadSystemInfo;
+(id)systemInfoFromFile:(id)arg1 ;
+(id)createSystemInfoWithFactorProvider:(id)arg1 ;
+(id)_persistentSystemInfoPath;
+(BOOL)_sysIsEnrolledInBetaProgram;
+(id)_sysEnabledInputModeIdentifiers;
+(BOOL)_sysIsProfileInstalledWithIdentifier:(id)arg1 ;
-(NSArray *)enabledInputModeIdentifiers;
-(BOOL)save;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)saveToFile:(id)arg1 ;
-(id)initFromSystemWithFactorProvider:(id)arg1 ;
-(BOOL)isEnrolledInBetaProgram;
-(BOOL)logUserSettingsRegionCode;
-(BOOL)logUserSettingsLanguageCode;
-(BOOL)logUserKeyboardEnabledInputMode;
-(void)setIsEnrolledInBetaProgram:(BOOL)arg1 ;
-(void)setEnabledInputModeIdentifiers:(NSArray *)arg1 ;
-(void)setLogUserSettingsLanguageCode:(BOOL)arg1 ;
-(void)setLogUserSettingsRegionCode:(BOOL)arg1 ;
-(void)setLogUserKeyboardEnabledInputMode:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

