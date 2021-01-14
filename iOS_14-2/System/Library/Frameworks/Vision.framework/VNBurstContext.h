/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@class BurstImageSetInternal;

@interface VNBurstContext : NSObject {

	BurstImageSetInternal* _burstSet;

}

@property (nonatomic,copy) id loggingCallback; 
-(BOOL)isPortrait;
-(id)loggingCallback;
-(void)setLoggingCallback:(id)arg1 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)isAction;
-(id)bestImageIdentifiers;
-(id)allImageIdentifiers;
-(id)coverImageIdentifier;
-(id)allClusters;
-(BOOL)addBurstFrameWithIdentifier:(id)arg1 fromImageBuffer:(id)arg2 withProperties:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(id)allImageStats;
@end

