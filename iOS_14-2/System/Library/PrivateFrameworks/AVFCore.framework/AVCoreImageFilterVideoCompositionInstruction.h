/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVVideoCompositionInstruction.h>

@class NSArray, NSString;

@interface AVCoreImageFilterVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction> {

	SCD_Struct_AV7 _timeRange;
	NSArray* _requiredSourceTrackIDs;
	/*^block*/id _handler;
	CGAffineTransform _sourceTrackPreferredTransform;

}

@property (nonatomic,readonly) id handler;                                                 //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) CGAffineTransform sourceTrackPreferredTransform;              //@synthesize sourceTrackPreferredTransform=_sourceTrackPreferredTransform - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AV7 timeRange;                                   //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,readonly) BOOL enablePostProcessing; 
@property (nonatomic,readonly) BOOL containsTweening; 
@property (nonatomic,readonly) NSArray * requiredSourceTrackIDs;                           //@synthesize requiredSourceTrackIDs=_requiredSourceTrackIDs - In the implementation block
@property (nonatomic,readonly) int passthroughTrackID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)enablePostProcessing;
-(NSArray *)requiredSourceTrackIDs;
-(BOOL)containsTweening;
-(int)passthroughTrackID;
-(id)initWithTimeRange:(SCD_Struct_AV7)arg1 sourceTrackIDs:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setSourceTrackPreferredTransform:(CGAffineTransform)arg1 ;
-(SCD_Struct_AV7)timeRange;
-(CGAffineTransform)sourceTrackPreferredTransform;
-(id)handler;
-(void)dealloc;
@end

