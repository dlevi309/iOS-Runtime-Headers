/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetReaderInternal, AVAsset, NSError, NSArray;

@interface AVAssetReader : NSObject {

	AVAssetReaderInternal* _priv;

}

@property (getter=_figAssetReader,nonatomic,readonly) OpaqueFigAssetReaderRef figAssetReader; 
@property (assign,setter=_setReadSingleSample:,getter=_readSingleSample,nonatomic) BOOL readSingleSample; 
@property (nonatomic,retain,readonly) AVAsset * asset; 
@property (readonly) long long status; 
@property (readonly) NSError * error; 
@property (assign,nonatomic) SCD_Struct_AV8 timeRange; 
@property (nonatomic,readonly) NSArray * outputs; 
+(void)initialize;
+(id)assetReaderWithAsset:(id)arg1 error:(id*)arg2 ;
+(id)_errorForOSStatus:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSError *)error;
-(long long)status;
-(NSArray *)outputs;
-(AVAsset *)asset;
-(void)_failWithError:(id)arg1 ;
-(void)setTimeRange:(SCD_Struct_AV8)arg1 ;
-(SCD_Struct_AV8)timeRange;
-(BOOL)canAddOutput:(id)arg1 ;
-(void)addOutput:(id)arg1 ;
-(id)initWithAsset:(id)arg1 error:(id*)arg2 ;
-(BOOL)startReading;
-(void)_setReadSingleSample:(BOOL)arg1 ;
-(void)cancelReading;
-(void)_tearDownFigAssetReader;
-(void)_transitionToStatus:(long long)arg1 failureError:(id)arg2 ;
-(BOOL)_canAddOutput:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)_outputDidFinish:(id)arg1 ;
-(BOOL)_readSingleSample;
-(void)_handleServerDiedNotification;
-(OpaqueFigAssetReaderRef)_figAssetReader;
@end

