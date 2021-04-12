/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(NSString *)identifier;
-(PGGraph *)graph;
-(NSDictionary *)payload;
-(PHPhotoLibrary *)photoLibrary;
-(id)initWithGraphManager:(id)arg1 ;
-(void)gatherMetricsWithProgressBlock:(/*^block*/id)arg1 ;
@end

