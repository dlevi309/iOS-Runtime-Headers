/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BWFrameStatisticsByPortType, BWStillImageCaptureMetadata, NSString, NSArray;

@interface BWStillImageCaptureSettings : NSObject <NSSecureCoding> {

	long long _settingsID;
	int _captureType;
	unsigned long long _captureFlags;
	unsigned long long _sceneFlags;
	BOOL _deliverProcessedImage;
	BOOL _deliverOriginalImage;
	BOOL _deliverSushiRaw;
	BOOL _deliverDeferredPhotoProxyImage;
	int _overCaptureMode;
	BWFrameStatisticsByPortType* _frameStatisticsByPortType;
	BWStillImageCaptureMetadata* _metadata;
	float _primaryImageMeteorHeadroom;
	NSString* _masterPortType;
	NSArray* _captureStreamSettings;
	int _tempExpectedClientImageCount;
	int _timeMachineReferenceFrameBracketedCaptureSequenceNumber;
	NSString* _applicationID;
	long long _stillImageRequestTime;

}

@property (nonatomic,readonly) long long settingsID;                                                   //@synthesize settingsID=_settingsID - In the implementation block
@property (nonatomic,readonly) int captureType;                                                        //@synthesize captureType=_captureType - In the implementation block
@property (nonatomic,readonly) unsigned long long captureFlags;                                        //@synthesize captureFlags=_captureFlags - In the implementation block
@property (assign,nonatomic) unsigned long long sceneFlags;                                            //@synthesize sceneFlags=_sceneFlags - In the implementation block
@property (nonatomic,readonly) BOOL deliverProcessedImage;                                             //@synthesize deliverProcessedImage=_deliverProcessedImage - In the implementation block
@property (nonatomic,readonly) BOOL deliverOriginalImage;                                              //@synthesize deliverOriginalImage=_deliverOriginalImage - In the implementation block
@property (nonatomic,readonly) BOOL deliverSushiRaw;                                                   //@synthesize deliverSushiRaw=_deliverSushiRaw - In the implementation block
@property (assign,nonatomic) BOOL deliverDeferredPhotoProxyImage;                                      //@synthesize deliverDeferredPhotoProxyImage=_deliverDeferredPhotoProxyImage - In the implementation block
@property (assign,nonatomic) int overCaptureMode;                                                      //@synthesize overCaptureMode=_overCaptureMode - In the implementation block
@property (nonatomic,retain) NSString * masterPortType;                                                //@synthesize masterPortType=_masterPortType - In the implementation block
@property (nonatomic,readonly) NSArray * portTypes; 
@property (nonatomic,readonly) NSArray * captureStreamSettings;                                        //@synthesize captureStreamSettings=_captureStreamSettings - In the implementation block
@property (nonatomic,readonly) int bracketedCaptureSequenceNumberForOISLongExposure; 
@property (nonatomic,readonly) BOOL expectReferenceFrameBracketedCaptureSequenceNumber; 
@property (assign,nonatomic) int expectedClientImageCount;                                             //@synthesize tempExpectedClientImageCount=_tempExpectedClientImageCount - In the implementation block
@property (assign,nonatomic) int timeMachineReferenceFrameBracketedCaptureSequenceNumber;              //@synthesize timeMachineReferenceFrameBracketedCaptureSequenceNumber=_timeMachineReferenceFrameBracketedCaptureSequenceNumber - In the implementation block
@property (nonatomic,copy) NSString * applicationID;                                                   //@synthesize applicationID=_applicationID - In the implementation block
@property (assign,nonatomic) long long stillImageRequestTime;                                          //@synthesize stillImageRequestTime=_stillImageRequestTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(long long)settingsID;
-(unsigned long long)captureFlags;
-(NSArray *)portTypes;
-(int)captureType;
-(NSArray *)captureStreamSettings;
-(id)captureStreamSettingsForPortType:(id)arg1 ;
-(int)timeMachineReferenceFrameBracketedCaptureSequenceNumber;
-(void)setStillImageRequestTime:(long long)arg1 ;
-(long long)stillImageRequestTime;
-(BOOL)deliverOriginalImage;
-(BOOL)deliverDeferredPhotoProxyImage;
-(int)overCaptureMode;
-(NSString *)masterPortType;
-(NSString *)applicationID;
-(unsigned long long)sceneFlags;
-(id)frameStatisticsByPortType;
-(int)bracketedCaptureSequenceNumberForOISLongExposure;
-(void)setExpectedClientImageCount:(int)arg1 ;
-(BOOL)deliverSushiRaw;
-(BOOL)deliverProcessedImage;
-(BOOL)expectReferenceFrameBracketedCaptureSequenceNumber;
-(void)setSceneFlags:(unsigned long long)arg1 ;
-(float)primaryImageMeteorHeadroom;
-(int)expectedClientImageCount;
-(id)initWithSettingsID:(long long)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 sceneFlags:(unsigned long long)arg4 frameStatisticsByPortType:(id)arg5 deliverProcessedImage:(BOOL)arg6 deliverOriginalImage:(BOOL)arg7 deliverSushiRaw:(BOOL)arg8 captureStreamSettings:(id)arg9 ;
-(void)setPrimaryImageMeteorHeadroom:(float)arg1 ;
-(void)setDeliverDeferredPhotoProxyImage:(BOOL)arg1 ;
-(void)setOverCaptureMode:(int)arg1 ;
-(void)setMasterPortType:(NSString *)arg1 ;
-(void)setTimeMachineReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 ;
-(void)setApplicationID:(NSString *)arg1 ;
@end

