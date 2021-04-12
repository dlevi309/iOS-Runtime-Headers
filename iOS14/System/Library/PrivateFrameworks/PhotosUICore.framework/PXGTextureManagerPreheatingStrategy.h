/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXGTextureManagerPreheatingStrategy : NSObject {

	long long _previousRegime;
	double _stoppedOffset;
	double _slowOffset;
	double _mediumOffset;
	double _fastOffset;

}

@property (assign,nonatomic) double stoppedOffset;                        //@synthesize stoppedOffset=_stoppedOffset - In the implementation block
@property (assign,nonatomic) double slowOffset;                           //@synthesize slowOffset=_slowOffset - In the implementation block
@property (assign,nonatomic) double mediumOffset;                         //@synthesize mediumOffset=_mediumOffset - In the implementation block
@property (assign,nonatomic) double fastOffset;                           //@synthesize fastOffset=_fastOffset - In the implementation block
@property (nonatomic,readonly) double maxPreheatingDistance; 
+(id)noPreheatingStrategy;
+(id)lowMemoryPreheatingStrategy;
+(id)defaultPreheatingStrategy;
-(double)stoppedOffset;
-(double)mediumOffset;
-(double)fastOffset;
-(void)setSlowOffset:(double)arg1 ;
-(void)setFastOffset:(double)arg1 ;
-(void)setStoppedOffset:(double)arg1 ;
-(void)setMediumOffset:(double)arg1 ;
-(double)slowOffset;
-(double)maxPreheatingDistance;
-(CGRect)preheatingRectForLayout:(id)arg1 interactionState:(SCD_Struct_PX22)arg2 ;
@end

