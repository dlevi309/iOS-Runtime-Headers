/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSNumber, SASRecordingInfo;

@interface SASUpdateAudioInfo : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * audioDestination; 
@property (nonatomic,copy) NSString * audioSource; 
@property (assign,nonatomic) int codec; 
@property (nonatomic,copy) NSString * deviceIdentifier; 
@property (nonatomic,copy) NSString * deviceModel; 
@property (nonatomic,copy) NSString * dspStatus; 
@property (nonatomic,copy) NSString * firmwareVersion; 
@property (nonatomic,copy) NSString * headsetAddress; 
@property (nonatomic,copy) NSString * headsetId; 
@property (nonatomic,copy) NSString * headsetName; 
@property (nonatomic,copy) NSNumber * noiseReductionLevel; 
@property (nonatomic,copy) NSString * origin; 
@property (nonatomic,copy) NSString * productId; 
@property (nonatomic,retain) SASRecordingInfo * recordingInfo; 
@property (assign,nonatomic) BOOL triggeredTwoShotBorealis; 
@property (nonatomic,copy) NSString * vendorId; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)updateAudioInfo;
+(id)updateAudioInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(int)codec;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)setOrigin:(NSString *)arg1 ;
-(void)setCodec:(int)arg1 ;
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)firmwareVersion;
-(NSString *)deviceModel;
-(NSString *)origin;
-(id)groupIdentifier;
-(NSString *)audioDestination;
-(void)setAudioDestination:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setVendorId:(NSString *)arg1 ;
-(void)setAudioSource:(NSString *)arg1 ;
-(void)setRecordingInfo:(SASRecordingInfo *)arg1 ;
-(BOOL)triggeredTwoShotBorealis;
-(NSString *)dspStatus;
-(void)setTriggeredTwoShotBorealis:(BOOL)arg1 ;
-(void)setDspStatus:(NSString *)arg1 ;
-(NSString *)headsetAddress;
-(void)setHeadsetAddress:(NSString *)arg1 ;
-(NSString *)headsetId;
-(void)setHeadsetId:(NSString *)arg1 ;
-(NSString *)headsetName;
-(void)setHeadsetName:(NSString *)arg1 ;
-(NSNumber *)noiseReductionLevel;
-(void)setNoiseReductionLevel:(NSNumber *)arg1 ;
-(NSString *)vendorId;
-(void)setProductId:(NSString *)arg1 ;
-(NSString *)productId;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(SASRecordingInfo *)recordingInfo;
-(NSString *)audioSource;
@end

