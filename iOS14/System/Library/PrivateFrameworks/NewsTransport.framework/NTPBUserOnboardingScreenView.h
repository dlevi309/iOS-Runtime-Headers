/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBUserOnboardingScreenView : PBCodable <NSCopying> {

	int _channelPickerPresentationReason;
	int _countOfNotificationsSelected;
	int _onboardingScreenType;
	int _previouslyCompletedOnboardingOsVersion;
	NSString* _referringSourceApplication;
	NSString* _referringUrl;
	int _userAction;
	NSString* _userActivityType;
	BOOL _fromPersonalizeNews;
	SCD_Struct_NT9 _has;

}

@property (assign,nonatomic) BOOL hasOnboardingScreenType; 
@property (assign,nonatomic) int onboardingScreenType;                                    //@synthesize onboardingScreenType=_onboardingScreenType - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringSourceApplication; 
@property (nonatomic,retain) NSString * referringSourceApplication;                       //@synthesize referringSourceApplication=_referringSourceApplication - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringUrl; 
@property (nonatomic,retain) NSString * referringUrl;                                     //@synthesize referringUrl=_referringUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasUserActivityType; 
@property (nonatomic,retain) NSString * userActivityType;                                 //@synthesize userActivityType=_userActivityType - In the implementation block
@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                              //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) BOOL hasCountOfNotificationsSelected; 
@property (assign,nonatomic) int countOfNotificationsSelected;                            //@synthesize countOfNotificationsSelected=_countOfNotificationsSelected - In the implementation block
@property (assign,nonatomic) BOOL hasPreviouslyCompletedOnboardingOsVersion; 
@property (assign,nonatomic) int previouslyCompletedOnboardingOsVersion;                  //@synthesize previouslyCompletedOnboardingOsVersion=_previouslyCompletedOnboardingOsVersion - In the implementation block
@property (assign,nonatomic) BOOL hasFromPersonalizeNews; 
@property (assign,nonatomic) BOOL fromPersonalizeNews;                                    //@synthesize fromPersonalizeNews=_fromPersonalizeNews - In the implementation block
@property (assign,nonatomic) BOOL hasChannelPickerPresentationReason; 
@property (assign,nonatomic) int channelPickerPresentationReason;                         //@synthesize channelPickerPresentationReason=_channelPickerPresentationReason - In the implementation block
-(NSString *)userActivityType;
-(NSString *)referringSourceApplication;
-(id)dictionaryRepresentation;
-(BOOL)hasReferringSourceApplication;
-(void)setReferringSourceApplication:(NSString *)arg1 ;
-(NSString *)referringUrl;
-(BOOL)hasReferringUrl;
-(void)setReferringUrl:(NSString *)arg1 ;
-(BOOL)hasUserActivityType;
-(BOOL)hasOnboardingScreenType;
-(void)setUserActivityType:(NSString *)arg1 ;
-(void)setHasCountOfNotificationsSelected:(BOOL)arg1 ;
-(void)setHasOnboardingScreenType:(BOOL)arg1 ;
-(void)setCountOfNotificationsSelected:(int)arg1 ;
-(id)channelPickerPresentationReasonAsString:(int)arg1 ;
-(void)setHasPreviouslyCompletedOnboardingOsVersion:(BOOL)arg1 ;
-(BOOL)fromPersonalizeNews;
-(void)mergeFrom:(id)arg1 ;
-(int)onboardingScreenType;
-(id)description;
-(int)userAction;
-(void)setChannelPickerPresentationReason:(int)arg1 ;
-(BOOL)hasUserAction;
-(int)StringAsChannelPickerPresentationReason:(id)arg1 ;
-(BOOL)hasChannelPickerPresentationReason;
-(void)setPreviouslyCompletedOnboardingOsVersion:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasPreviouslyCompletedOnboardingOsVersion;
-(int)channelPickerPresentationReason;
-(BOOL)readFrom:(id)arg1 ;
-(void)setOnboardingScreenType:(int)arg1 ;
-(void)setHasChannelPickerPresentationReason:(BOOL)arg1 ;
-(void)setHasFromPersonalizeNews:(BOOL)arg1 ;
-(void)setUserAction:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(int)previouslyCompletedOnboardingOsVersion;
-(BOOL)hasFromPersonalizeNews;
-(void)setFromPersonalizeNews:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasCountOfNotificationsSelected;
-(int)countOfNotificationsSelected;
-(BOOL)isEqual:(id)arg1 ;
@end

