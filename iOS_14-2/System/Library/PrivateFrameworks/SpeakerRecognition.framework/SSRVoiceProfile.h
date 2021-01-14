/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSNumber;

@interface SSRVoiceProfile : NSObject <NSSecureCoding> {

	NSString* _locale;
	NSString* _appDomain;
	NSDate* _dateAdded;
	NSString* _profileID;
	NSString* _siriProfileId;
	NSString* _profileBasePath;
	NSNumber* _profilePitch;
	NSString* _userName;

}

@property (nonatomic,retain) NSString * profileBasePath;                                 //@synthesize profileBasePath=_profileBasePath - In the implementation block
@property (nonatomic,readonly) NSString * voiceProfileBasePath; 
@property (nonatomic,readonly) NSString * voiceProfileImplicitCacheDirPath; 
@property (nonatomic,readonly) NSString * voiceProfileIdentity; 
@property (nonatomic,readonly) unsigned long long voiceProfileVersion; 
@property (nonatomic,readonly) unsigned long long productCategory; 
@property (nonatomic,readonly) NSString * pruningCookie; 
@property (nonatomic,readonly) BOOL profileLocallyAvailable; 
@property (nonatomic,retain) NSNumber * profilePitch;                                    //@synthesize profilePitch=_profilePitch - In the implementation block
@property (nonatomic,retain) NSString * userName;                                        //@synthesize userName=_userName - In the implementation block
@property (nonatomic,readonly) NSString * locale;                                        //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) NSString * appDomain;                                     //@synthesize appDomain=_appDomain - In the implementation block
@property (nonatomic,readonly) NSDate * dateAdded;                                       //@synthesize dateAdded=_dateAdded - In the implementation block
@property (nonatomic,readonly) NSString * profileID;                                     //@synthesize profileID=_profileID - In the implementation block
@property (nonatomic,readonly) NSString * siriProfileId;                                 //@synthesize siriProfileId=_siriProfileId - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(NSString *)locale;
-(NSString *)userName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)profileID;
-(NSDate *)dateAdded;
-(NSString *)siriProfileId;
-(NSString *)appDomain;
-(unsigned long long)productCategory;
-(NSString *)voiceProfileBasePath;
-(id)initNewVoiceProfileWithLocale:(id)arg1 withAppDomain:(id)arg2 ;
-(NSNumber *)profilePitch;
-(id)voiceProfileAudioDirPathForSpidType:(unsigned long long)arg1 ;
-(id)getExplicitEnrollmentUtterancesForType:(unsigned long long)arg1 ;
-(BOOL)isMarkedSATEnrolled;
-(NSString *)voiceProfileImplicitCacheDirPath;
-(NSString *)voiceProfileIdentity;
-(unsigned long long)voiceProfileVersion;
-(id)getImplicitEnrollmentUtterancesPriorTo:(id)arg1 forType:(unsigned long long)arg2 ;
-(id)voiceProfileModelDirForSpidType:(unsigned long long)arg1 recognizerType:(unsigned long long)arg2 ;
-(id)addUtterances:(id)arg1 spIdType:(unsigned long long)arg2 ;
-(id)getEnrollmentUtterancesForModelType:(unsigned long long)arg1 ;
-(id)_voiceProfilePathForSpidType:(unsigned long long)arg1 ;
-(id)_getProfileVersionFilePath;
-(void)_updateVoiceProfileVersionFile;
-(BOOL)_markSATEnrollmentWithMarker:(id)arg1 ;
-(BOOL)_isSATMarkedWithMarker:(id)arg1 ;
-(void)setSharedSiriProfileId:(id)arg1 ;
-(id)voiceProfileModelFilePathForRecognizerType:(unsigned long long)arg1 spIdType:(unsigned long long)arg2 ;
-(id)importVoiceProfileAtPath:(id)arg1 ;
-(id)getExplicitMarkedEnrollmentUtterancesForType:(unsigned long long)arg1 ;
-(id)getImplicitEnrollmentUtterancesForType:(unsigned long long)arg1 ;
-(BOOL)profileLocallyAvailable;
-(BOOL)deleteModelForSpidType:(unsigned long long)arg1 recognizerType:(unsigned long long)arg2 ;
-(BOOL)markSATEnrollmentSuccess;
-(BOOL)markSATEnrollmentMigrated;
-(BOOL)isMarkedSATMigrated;
-(NSString *)pruningCookie;
-(BOOL)updatePruningCookie:(id)arg1 ;
-(NSString *)profileBasePath;
-(void)setProfileBasePath:(NSString *)arg1 ;
-(void)setProfilePitch:(NSNumber *)arg1 ;
@end

