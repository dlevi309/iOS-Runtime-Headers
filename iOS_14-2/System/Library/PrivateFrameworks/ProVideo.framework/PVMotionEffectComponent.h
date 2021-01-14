/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol PVMotionEffectComponent <PVEffectComponent>
@required
+(id)parameterKeyToPublishedParameterNameMap;
-(void)documentDidStartLoading;
-(void)documentDidLoad:(const PVMotionDocumentInfo*)arg1;
-(void)documentWillOpenMedia:(const PVMotionDocumentInfo*)arg1 properties:(id)arg2;
-(void)documentDidBecomeReady:(const PVMotionDocumentInfo*)arg1 properties:(id)arg2;
-(void)documentWillRender:(const PVMotionDocumentInfo*)arg1 properties:(id)arg2 time:(SCD_Struct_PV22)arg3;
-(void)documentDidFailToLoad;
-(void)documentDidUnload;
-(BOOL)propertiesDisableCache:(id)arg1 time:(SCD_Struct_PV22)arg2 isAtPosterFrame:(BOOL)arg3;
-(id)parameterKeysThatInvalidateCache;
-(BOOL)didCacheInvalidatingParameterChange:(id)arg1 parameterA:(id)arg2 parameterB:(id)arg3;

@end

