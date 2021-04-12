/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@class NSXPCConnection;

@interface SBFCARenderer : NSObject {

	NSXPCConnection* _rendererServiceConnection;

}
+(id)sharedInstance;
+(BOOL)shouldUseXPCServiceForRendering;
-(id)_remoteObjectProxy;
-(id)treatWallpaperImage:(id)arg1 needsLuminanceTreatment:(BOOL)arg2 needsDimmingTreatment:(BOOL)arg3 downsampleFactor:(double)arg4 averageColor:(id)arg5 ;
-(id)applyMaterialRecipe:(id)arg1 recipeName:(id)arg2 containingBundle:(id)arg3 weighting:(double)arg4 downsampleFactor:(double)arg5 ;
-(void)_createConnection;
-(void)warmup;
@end

