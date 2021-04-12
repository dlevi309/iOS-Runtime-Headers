/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/VKCustomFeatureDataSource.h>

@protocol MKCustomFeatureStoreDelegate;
@class MKQuadTrie, NSHashTable, GEOFeatureStyleAttributes, NSString;

@interface _MKCustomFeatureStore : NSObject <VKCustomFeatureDataSource> {

	MKQuadTrie* _annotationsTrie;
	NSHashTable* _observers;
	BOOL _isClusteringEnabled;
	GEOFeatureStyleAttributes* _clusterStyleAttributes;
	NSString* _annotationText;
	NSString* _annotationLocale;
	unsigned char _sceneID;
	unsigned char _sceneState;
	id<MKCustomFeatureStoreDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MKCustomFeatureStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isClusteringEnabled;                                    //@synthesize isClusteringEnabled=_isClusteringEnabled - In the implementation block
@property (nonatomic,copy) GEOFeatureStyleAttributes * clusterStyleAttributes;              //@synthesize clusterStyleAttributes=_clusterStyleAttributes - In the implementation block
@property (assign,nonatomic) unsigned char sceneID;                                         //@synthesize sceneID=_sceneID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<MKCustomFeatureStoreDelegate>)delegate;
-(void)setDelegate:(id<MKCustomFeatureStoreDelegate>)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(unsigned char)sceneID;
-(void)setSceneID:(unsigned char)arg1 ;
-(id)allAnnotations;
-(void)setAnnotations:(id)arg1 ;
-(void)addAnnotations:(id)arg1 ;
-(id)annotationsInMapRect:(SCD_Struct_MK6)arg1 ;
-(void)removeAnnotations:(id)arg1 ;
-(id)initWithClustering:(BOOL)arg1 ;
-(BOOL)isClusteringEnabled;
-(GEOFeatureStyleAttributes *)clusterStyleAttributes;
-(void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3 ;
-(void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3 ;
-(unsigned char)sceneState;
-(void)_setSceneState:(unsigned char)arg1 ;
-(void)_clearAnnotations;
-(void)_invalidateRect:(SCD_Struct_MK6)arg1 ;
-(void)showScene;
-(void)hideScene;
-(void)setClusterAnnotationText:(id)arg1 locale:(id)arg2 ;
-(unsigned long long)annotationCount;
-(void)setClusterStyleAttributes:(GEOFeatureStyleAttributes *)arg1 ;
@end

