/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/TUCallRequest.h>
#import <libobjc.A.dylib/TUVideoRequest.h>

@class NSString, IDSDestination, NSDate;

@interface TUAnswerRequest : NSObject <NSSecureCoding, TUCallRequest, TUVideoRequest> {

	BOOL _wantsHoldMusic;
	BOOL _pauseVideoToStart;
	BOOL _downgradeToAudio;
	BOOL _allowBluetoothAnswerWithoutDowngrade;
	NSString* _uniqueProxyIdentifier;
	NSString* _sourceIdentifier;
	IDSDestination* _endpointIDSDestination;
	NSString* _endpointRapportMediaSystemIdentifier;
	NSString* _endpointRapportEffectiveIdentifier;
	long long _behavior;
	NSDate* _dateAnswered;
	CGSize _localLandscapeAspectRatio;
	CGSize _localPortraitAspectRatio;

}

@property (nonatomic,retain) NSDate * dateAnswered;                                        //@synthesize dateAnswered=_dateAnswered - In the implementation block
@property (assign,nonatomic) BOOL allowBluetoothAnswerWithoutDowngrade;                    //@synthesize allowBluetoothAnswerWithoutDowngrade=_allowBluetoothAnswerWithoutDowngrade - In the implementation block
@property (nonatomic,copy) NSString * sourceIdentifier;                                    //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,retain) IDSDestination * endpointIDSDestination;                      //@synthesize endpointIDSDestination=_endpointIDSDestination - In the implementation block
@property (nonatomic,retain) NSString * endpointRapportMediaSystemIdentifier;              //@synthesize endpointRapportMediaSystemIdentifier=_endpointRapportMediaSystemIdentifier - In the implementation block
@property (nonatomic,retain) NSString * endpointRapportEffectiveIdentifier;                //@synthesize endpointRapportEffectiveIdentifier=_endpointRapportEffectiveIdentifier - In the implementation block
@property (assign,nonatomic) BOOL wantsHoldMusic;                                          //@synthesize wantsHoldMusic=_wantsHoldMusic - In the implementation block
@property (assign,nonatomic) BOOL pauseVideoToStart;                                       //@synthesize pauseVideoToStart=_pauseVideoToStart - In the implementation block
@property (assign,nonatomic) BOOL downgradeToAudio;                                        //@synthesize downgradeToAudio=_downgradeToAudio - In the implementation block
@property (assign,nonatomic) long long behavior;                                           //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,copy) NSString * uniqueProxyIdentifier;                               //@synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize localLandscapeAspectRatio;                             //@synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio - In the implementation block
@property (assign,nonatomic) CGSize localPortraitAspectRatio;                              //@synthesize localPortraitAspectRatio=_localPortraitAspectRatio - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(void)setBehavior:(long long)arg1 ;
-(CGSize)localLandscapeAspectRatio;
-(id)init;
-(long long)behavior;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLocalPortraitAspectRatio:(CGSize)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalLandscapeAspectRatio:(CGSize)arg1 ;
-(NSString *)uniqueProxyIdentifier;
-(id)initWithCall:(id)arg1 ;
-(BOOL)wantsHoldMusic;
-(id)initWithUniqueProxyIdentifier:(id)arg1 ;
-(BOOL)pauseVideoToStart;
-(BOOL)downgradeToAudio;
-(NSDate *)dateAnswered;
-(BOOL)allowBluetoothAnswerWithoutDowngrade;
-(IDSDestination *)endpointIDSDestination;
-(NSString *)endpointRapportMediaSystemIdentifier;
-(NSString *)endpointRapportEffectiveIdentifier;
-(void)setUniqueProxyIdentifier:(NSString *)arg1 ;
-(void)setEndpointIDSDestination:(IDSDestination *)arg1 ;
-(void)setEndpointRapportMediaSystemIdentifier:(NSString *)arg1 ;
-(void)setEndpointRapportEffectiveIdentifier:(NSString *)arg1 ;
-(void)setWantsHoldMusic:(BOOL)arg1 ;
-(void)setPauseVideoToStart:(BOOL)arg1 ;
-(void)setDowngradeToAudio:(BOOL)arg1 ;
-(void)setDateAnswered:(NSDate *)arg1 ;
-(void)setAllowBluetoothAnswerWithoutDowngrade:(BOOL)arg1 ;
-(CGSize)localPortraitAspectRatio;
-(NSString *)sourceIdentifier;
@end

