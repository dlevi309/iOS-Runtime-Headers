/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol VKCustomFeatureDataSource <NSObject>
@required
-(void)addObserver:(id)arg1;
-(void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
-(void)removeObserver:(id)arg1;
-(id)clusterStyleAttributes;
-(unsigned char)sceneState;
-(id)annotationsInMapRect:(SCD_Struct_MK6)arg1;
-(void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
-(BOOL)isClusteringEnabled;
-(unsigned char)sceneID;

@end

