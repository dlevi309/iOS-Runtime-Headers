/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVAssetReaderInternal, AVAsset, NSError, NSArray;

@interface AVAssetReader : NSObject {

	AVAssetReaderInternal* _priv;

}

@property (getter=_figAssetReader,nonatomic,readonly) OpaqueFigAssetReaderRef figAssetReader; 
@property (assign,setter=_setReadSingleSample:,getter=_readSingleSample,nonatomic) BOOL readSingleSample; 
@property (nonatomic,retain,readonly) AVAsset * asset; 
@property (readonly) long long status; 
@property (readonly) NSError * error; 
@property (assign,nonatomic) SCD_Struct_AV7 timeRange; 
@property (nonatomic,readonly) NSArray * outputs; 
+(void)initialize;
+(id)_errorForOSStatus:(int)arg1 ;
+(id)assetReaderWithAsset:(id)arg1 error:(id*)arg2 ;
-(BOOL)canAddOutput:(id)arg1 ;
-(id)initWithAsset:(id)arg1 error:(id*)arg2 ;
-(void)_tearDownFigAssetReader;
-(void)_transitionToStatus:(long long)arg1 failureError:(id)arg2 ;
-(BOOL)_canAddOutput:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)_outputDidFinish:(id)arg1 ;
-(BOOL)_readSingleSample;
-(OpaqueFigAssetReaderRef)_figAssetReader;
-(id)init;
-(void)setTimeRange:(SCD_Struct_AV7)arg1 ;
-(AVAsset *)asset;
-(SCD_Struct_AV7)timeRange;
-(NSError *)error;
-(void)_handleServerDiedNotification;
-(void)addOutput:(id)arg1 ;
-(id)description;
-(BOOL)startReading;
-(void)_setReadSingleSample:(BOOL)arg1 ;
-(void)cancelReading;
-(void)_failWithError:(id)arg1 ;
-(NSArray *)outputs;
-(long long)status;
-(void)dealloc;
@end

