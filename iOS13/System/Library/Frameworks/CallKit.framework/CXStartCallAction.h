/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>
#import <libobjc.A.dylib/CXVideoAspectRatioDescriptor.h>

@class CXHandle, NSString, NSDate, NSUUID;

@interface CXStartCallAction : CXCallAction <CXVideoAspectRatioDescriptor> {

	BOOL _video;
	BOOL _relay;
	BOOL _upgrade;
	BOOL _retry;
	BOOL _emergency;
	BOOL _voicemail;
	BOOL _shouldSuppressInCallUI;
	CXHandle* _handle;
	NSString* _contactIdentifier;
	NSDate* _dateStarted;
	long long _ttyType;
	NSUUID* _localSenderIdentityUUID;
	CGSize _localPortraitAspectRatio;
	CGSize _localLandscapeAspectRatio;

}

@property (nonatomic,copy) NSDate * dateStarted;                                //@synthesize dateStarted=_dateStarted - In the implementation block
@property (assign,getter=isRelay,nonatomic) BOOL relay;                         //@synthesize relay=_relay - In the implementation block
@property (assign,getter=isUpgrade,nonatomic) BOOL upgrade;                     //@synthesize upgrade=_upgrade - In the implementation block
@property (assign,getter=isRetry,nonatomic) BOOL retry;                         //@synthesize retry=_retry - In the implementation block
@property (assign,getter=isEmergency,nonatomic) BOOL emergency;                 //@synthesize emergency=_emergency - In the implementation block
@property (assign,getter=isVoicemail,nonatomic) BOOL voicemail;                 //@synthesize voicemail=_voicemail - In the implementation block
@property (assign,setter=setTTYType:,nonatomic) long long ttyType;              //@synthesize ttyType=_ttyType - In the implementation block
@property (nonatomic,retain) NSUUID * localSenderIdentityUUID;                  //@synthesize localSenderIdentityUUID=_localSenderIdentityUUID - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressInCallUI;                       //@synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI - In the implementation block
@property (nonatomic,copy) CXHandle * handle;                                   //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier;                        //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (assign,getter=isVideo,nonatomic) BOOL video;                         //@synthesize video=_video - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize localLandscapeAspectRatio;                  //@synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio - In the implementation block
@property (assign,nonatomic) CGSize localPortraitAspectRatio;                   //@synthesize localPortraitAspectRatio=_localPortraitAspectRatio - In the implementation block
+(BOOL)supportsSecureCoding;
+(double)timeout;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CXHandle *)handle;
-(NSString *)contactIdentifier;
-(void)setHandle:(CXHandle *)arg1 ;
-(void)setEmergency:(BOOL)arg1 ;
-(BOOL)isVideo;
-(BOOL)isRetry;
-(void)fulfill;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(id)customDescription;
-(long long)ttyType;
-(void)setTTYType:(long long)arg1 ;
-(BOOL)isVoicemail;
-(BOOL)isEmergency;
-(BOOL)shouldSuppressInCallUI;
-(void)setShouldSuppressInCallUI:(BOOL)arg1 ;
-(CGSize)localLandscapeAspectRatio;
-(CGSize)localPortraitAspectRatio;
-(void)setLocalLandscapeAspectRatio:(CGSize)arg1 ;
-(void)setLocalPortraitAspectRatio:(CGSize)arg1 ;
-(NSUUID *)localSenderIdentityUUID;
-(void)setLocalSenderIdentityUUID:(NSUUID *)arg1 ;
-(void)setVoicemail:(BOOL)arg1 ;
-(void)setVideo:(BOOL)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(NSDate *)dateStarted;
-(BOOL)isUpgrade;
-(void)fulfillWithDateStarted:(id)arg1 ;
-(void)updateAsFulfilledWithDateStarted:(id)arg1 ;
-(void)setDateStarted:(NSDate *)arg1 ;
-(void)setUpgrade:(BOOL)arg1 ;
-(BOOL)isRelay;
-(void)setRelay:(BOOL)arg1 ;
-(id)initWithCallUUID:(id)arg1 handle:(id)arg2 ;
-(void)setRetry:(BOOL)arg1 ;
@end

