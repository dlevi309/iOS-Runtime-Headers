/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/


@class NSMutableSet;

@interface _MDLProbeCluster : NSObject {

	NSMutableSet* _probes;
	 _centroid;

}

@property (assign)  centroid;                          //@synthesize centroid=_centroid - In the implementation block
@property (retain) NSMutableSet * probes;              //@synthesize probes=_probes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEmpty;
-(NSMutableSet *)probes;
-()centroid;
-(void)setCentroid:;
-(BOOL)isEqualToCluster:(id)arg1 ;
-(void)calculateCentroidNotIncludingSamplesinArray:(id)arg1 ;
-(void)setProbes:(NSMutableSet *)arg1 ;
@end

