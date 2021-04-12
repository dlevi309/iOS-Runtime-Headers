/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/


@class NSMutableSet;

@interface _MDLProbeCluster : NSObject {

	NSMutableSet* _probes;
	 _centroid;

}

@property (assign)  centroid;                          //@synthesize centroid=_centroid - In the implementation block
@property (retain) NSMutableSet * probes;              //@synthesize probes=_probes - In the implementation block
-()centroid;
-(NSMutableSet *)probes;
-(void)setCentroid:;
-(unsigned long long)hash;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToCluster:(id)arg1 ;
-(void)calculateCentroidNotIncludingSamplesinArray:(id)arg1 ;
-(void)setProbes:(NSMutableSet *)arg1 ;
@end

