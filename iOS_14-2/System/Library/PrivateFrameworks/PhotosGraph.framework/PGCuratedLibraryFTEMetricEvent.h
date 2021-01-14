/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PLMetricEvent.h>

@class NSString, PGGraph, PHPhotoLibrary, NSDictionary;

@interface PGCuratedLibraryFTEMetricEvent : NSObject <PLMetricEvent> {

	NSString* _identifier;
	PGGraph* _graph;
	PHPhotoLibrary* _photoLibrary;
	NSDictionary* _payload;

}

@property (nonatomic,readonly) PGGraph * graph;                            //@synthesize graph=_graph - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * payload;                     //@synthesize payload=_payload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PGGraph *)graph;
-(id)initWithGraphManager:(id)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(NSDictionary *)payload;
-(NSString *)description;
-(NSString *)identifier;
-(void)gatherMetricsWithProgressBlock:(/*^block*/id)arg1 ;
@end

