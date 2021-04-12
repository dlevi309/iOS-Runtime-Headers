/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@class BurstImageSetInternal;

@interface VNBurstContext : NSObject {

	BurstImageSetInternal* _burstSet;

}

@property (nonatomic,copy) id loggingCallback; 
-(void)dealloc;
-(id)bestImageIdentifiers;
-(id)allImageIdentifiers;
-(BOOL)isAction;
-(BOOL)isPortrait;
-(id)coverImageIdentifier;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)allImageStats;
-(id)loggingCallback;
-(void)setLoggingCallback:(id)arg1 ;
-(BOOL)addBurstFrameWithIdentifier:(id)arg1 fromImageBuffer:(id)arg2 withProperties:(id)arg3 error:(id*)arg4 ;
-(id)allClusters;
@end

