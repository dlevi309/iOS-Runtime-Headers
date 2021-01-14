/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


#import <Espresso/Espresso-Structs.h>
@class EspressoFDOverfeatNetwork;

@interface EspressoDCNEspressoOverfeatDetector : NSObject {

	int tileSizeScaleFactor;
	int tileDimension;
	int localFaceMerging;
	FaceList* face_list;
	EspressoFDOverfeatNetwork* _enet;
	double _confidenceThreshold;
	double _minBoundingBoxThreshold;

}

@property (nonatomic,retain) EspressoFDOverfeatNetwork * enet;              //@synthesize enet=_enet - In the implementation block
@property (assign,nonatomic) double confidenceThreshold;                    //@synthesize confidenceThreshold=_confidenceThreshold - In the implementation block
@property (assign,nonatomic) double minBoundingBoxThreshold;                //@synthesize minBoundingBoxThreshold=_minBoundingBoxThreshold - In the implementation block
-(id)initWithOptions:(id)arg1 ;
-(EspressoFDOverfeatNetwork *)enet;
-(id)init;
-(double)confidenceThreshold;
-(void)setConfidenceThreshold:(double)arg1 ;
-(void)commonInit;
-(id)initWithNetwork:(id)arg1 ;
-(void)setEnet:(EspressoFDOverfeatNetwork *)arg1 ;
-(void)fillFaceList;
-(void)mergeFaceList;
-(void)computeBBoxUsingProb:(shared_ptr<Espresso::blob<float, 3> >*)arg1 box:(shared_ptr<Espresso::blob<float, 3> >*)arg2 andScalefactor:(float)arg3 padX:(float)arg4 padY:(float)arg5 ;
-(id)getFacesFromNetworkResultOriginalWidth:(float)arg1 originalHeight:(float)arg2 ;
-(double)compareObject:(id)arg1 withObject:(id)arg2 error:(id*)arg3 ;
-(double)minBoundingBoxThreshold;
-(void)setMinBoundingBoxThreshold:(double)arg1 ;
-(id)getDescription;
-(void)dealloc;
@end

