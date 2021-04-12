/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BWFrameStatisticsByPortType, BWStillImageCaptureMetadata, NSString, NSArray;

@interface BWStillImageCaptureSettings : NSObject <NSSecureCoding> {

	long long _settingsID;
	int _captureType;
	unsigned long long _captureFlags;
	unsigned long long _sceneFlags;
	BOOL _deliverOriginalImage;
	BOOL _deliverSushiRaw;
	BOOL _deliverDeferredPhotoProxyImage;
	BWFrameStatisticsByPortType* _frameStatisticsByPortType;
	BWStillImageCaptureMetadata* _metadata;
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
@property (nonatomic,readonly) BOOL deliverOriginalImage;                                              //@synthesize deliverOriginalImage=_deliverOriginalImage - In the implementation block
@property (nonatomic,readonly) BOOL deliverSushiRaw;                                                   //@synthesize deliverSushiRaw=_deliverSushiRaw - In the implementation block
@property (assign,nonatomic) BOOL deliverDeferredPhotoProxyImage;                                      //@synthesize deliverDeferredPhotoProxyImage=_deliverDeferredPhotoProxyImage - In the implementation block
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
-(NSString *)applicationID;
-(BOOL)deliverOriginalImage;
-(NSArray *)portTypes;
-(void)setDeliverDeferredPhotoProxyImage:(BOOL)arg1 ;
-(void)setApplicationID:(NSString *)arg1 ;
-(void)setStillImageRequestTime:(long long)arg1 ;
-(NSString *)masterPortType;
-(unsigned long long)sceneFlags;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)deliverDeferredPhotoProxyImage;
-(void)setMetadata:(id)arg1 ;
-(BOOL)deliverSushiRaw;
-(void)setSceneFlags:(unsigned long long)arg1 ;
-(id)description;
-(void)setMasterPortType:(NSString *)arg1 ;
-(int)expectedClientImageCount;
-(id)frameStatisticsByPortType;
-(int)bracketedCaptureSequenceNumberForOISLongExposure;
-(NSArray *)captureStreamSettings;
-(int)captureType;
-(int)timeMachineReferenceFrameBracketedCaptureSequenceNumber;
-(unsigned long long)captureFlags;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setExpectedClientImageCount:(int)arg1 ;
-(long long)settingsID;
-(long long)stillImageRequestTime;
-(id)metadata;
-(BOOL)expectReferenceFrameBracketedCaptureSequenceNumber;
-(id)initWithSettingsID:(long long)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 sceneFlags:(unsigned long long)arg4 frameStatisticsByPortType:(id)arg5 deliverOriginalImage:(BOOL)arg6 deliverSushiRaw:(BOOL)arg7 captureStreamSettings:(id)arg8 ;
-(void)setTimeMachineReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 ;
-(id)captureStreamSettingsForPortType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

