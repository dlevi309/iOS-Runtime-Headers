/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@class NSXPCConnection;

@interface SBFCARenderer : NSObject {

	NSXPCConnection* _rendererServiceConnection;

}
+(id)sharedInstance;
+(BOOL)shouldUseXPCServiceForRendering;
-(id)_remoteObjectProxy;
-(void)_createConnection;
-(id)_coerceImageIntoData:(id)arg1 ;
-(id)treatWallpaperImage:(id)arg1 needsLuminanceTreatment:(BOOL)arg2 needsDimmingTreatment:(BOOL)arg3 downsampleFactor:(double)arg4 averageColor:(id)arg5 ;
-(id)applyMaterialRecipe:(id)arg1 recipeName:(id)arg2 weighting:(double)arg3 downsampleFactor:(double)arg4 ;
@end

