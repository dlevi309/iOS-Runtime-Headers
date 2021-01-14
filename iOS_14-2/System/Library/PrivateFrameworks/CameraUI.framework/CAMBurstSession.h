/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class CIBurstImageSet, NSString;

@interface CAMBurstSession : NSObject {

	BOOL _finalized;
	unsigned long long _estimatedCount;
	unsigned long long _count;
	CIBurstImageSet* __burstImageSet;

}

@property (assign,setter=_setEstimatedCount:,nonatomic) unsigned long long estimatedCount;              //@synthesize estimatedCount=_estimatedCount - In the implementation block
@property (assign,setter=_setCount:,nonatomic) unsigned long long count;                                //@synthesize count=_count - In the implementation block
@property (assign,setter=_setFinalized:,getter=_isFinalized,nonatomic) BOOL finalized;                  //@synthesize finalized=_finalized - In the implementation block
@property (nonatomic,readonly) CIBurstImageSet * _burstImageSet;                                        //@synthesize _burstImageSet=__burstImageSet - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
-(id)init;
-(unsigned long long)count;
-(id)description;
-(unsigned long long)estimatedCount;
-(NSString *)identifier;
-(BOOL)_isFinalized;
-(void)_setCount:(unsigned long long)arg1 ;
-(id)performBurstAnalysisForDevice:(long long)arg1 ;
-(void)addStillImageCaptureResult:(id)arg1 ;
-(void)addStillImageLocalPersistenceResult:(id)arg1 withFaces:(id)arg2 ;
-(CIBurstImageSet *)_burstImageSet;
-(void)_setEstimatedCount:(unsigned long long)arg1 ;
-(void)_setFinalized:(BOOL)arg1 ;
@end

