/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSString, NSDate;

@interface CSUserVoiceProfile : NSObject {

	NSString* _locale;
	NSDate* _dateAdded;
	NSString* _voiceProfileFilePath;
	NSString* _profileID;
	NSString* _siriProfileId;
	unsigned long long _onboardedType;
	long long _numberOfExplicitSatVectors;
	long long _numberOfBaseProfileSatVectors;
	long long _numberOfImplicitProfileSatVectors;
	NSString* _sharedHomeID;
	NSString* _siriDebugID;
	NSString* _userName;

}

@property (nonatomic,retain) NSString * locale;                                        //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSDate * dateAdded;                                       //@synthesize dateAdded=_dateAdded - In the implementation block
@property (nonatomic,retain) NSString * voiceProfileFilePath;                          //@synthesize voiceProfileFilePath=_voiceProfileFilePath - In the implementation block
@property (nonatomic,retain) NSString * profileID;                                     //@synthesize profileID=_profileID - In the implementation block
@property (nonatomic,retain) NSString * siriProfileId;                                 //@synthesize siriProfileId=_siriProfileId - In the implementation block
@property (assign,nonatomic) unsigned long long onboardedType;                         //@synthesize onboardedType=_onboardedType - In the implementation block
@property (assign,nonatomic) long long numberOfExplicitSatVectors;                     //@synthesize numberOfExplicitSatVectors=_numberOfExplicitSatVectors - In the implementation block
@property (assign,nonatomic) long long numberOfBaseProfileSatVectors;                  //@synthesize numberOfBaseProfileSatVectors=_numberOfBaseProfileSatVectors - In the implementation block
@property (assign,nonatomic) long long numberOfImplicitProfileSatVectors;              //@synthesize numberOfImplicitProfileSatVectors=_numberOfImplicitProfileSatVectors - In the implementation block
@property (nonatomic,retain) NSString * sharedHomeID;                                  //@synthesize sharedHomeID=_sharedHomeID - In the implementation block
@property (nonatomic,retain) NSString * siriDebugID;                                   //@synthesize siriDebugID=_siriDebugID - In the implementation block
@property (nonatomic,retain) NSString * userName;                                      //@synthesize userName=_userName - In the implementation block
-(id)description;
-(NSString *)userName;
-(void)setLocale:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)locale;
-(id)dictionaryRepresentation;
-(NSString *)profileID;
-(void)setUserName:(NSString *)arg1 ;
-(NSDate *)dateAdded;
-(void)setDateAdded:(NSDate *)arg1 ;
-(NSString *)siriDebugID;
-(NSString *)siriProfileId;
-(unsigned long long)onboardedType;
-(long long)numberOfBaseProfileSatVectors;
-(void)setNumberOfBaseProfileSatVectors:(long long)arg1 ;
-(long long)numberOfImplicitProfileSatVectors;
-(void)setNumberOfImplicitProfileSatVectors:(long long)arg1 ;
-(long long)numberOfExplicitSatVectors;
-(NSString *)voiceProfileFilePath;
-(id)initNewVoiceProfileWithLocale:(id)arg1 ;
-(void)setSiriDebugID:(NSString *)arg1 ;
-(void)setSharedHomeID:(NSString *)arg1 ;
-(void)setNumberOfExplicitSatVectors:(long long)arg1 ;
-(void)setSiriProfileId:(NSString *)arg1 ;
-(void)setOnboardedType:(unsigned long long)arg1 ;
-(NSString *)sharedHomeID;
-(void)setVoiceProfileFilePath:(NSString *)arg1 ;
-(void)setProfileID:(NSString *)arg1 ;
@end

