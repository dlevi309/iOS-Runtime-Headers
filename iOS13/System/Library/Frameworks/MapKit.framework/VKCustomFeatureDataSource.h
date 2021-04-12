/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol VKCustomFeatureDataSource <NSObject>
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(unsigned char)sceneID;
-(id)annotationsInMapRect:(SCD_Struct_MK6)arg1;
-(BOOL)isClusteringEnabled;
-(id)clusterStyleAttributes;
-(void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
-(void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
-(unsigned char)sceneState;

@end

