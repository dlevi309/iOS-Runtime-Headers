/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(void)commonInit;
-(id)getDescription;
-(double)confidenceThreshold;
-(void)setConfidenceThreshold:(double)arg1 ;
-(id)initWithNetwork:(id)arg1 ;
-(id)getFacesFromNetworkResultOriginalWidth:(float)arg1 originalHeight:(float)arg2 ;
-(void)fillFaceList;
-(void)computeBBoxUsingProb:(shared_ptr<Espresso::blob<float, 3> >*)arg1 box:(shared_ptr<Espresso::blob<float, 3> >*)arg2 andScalefactor:(float)arg3 padX:(float)arg4 padY:(float)arg5 ;
-(void)mergeFaceList;
-(double)compareObject:(id)arg1 withObject:(id)arg2 error:(id*)arg3 ;
-(EspressoFDOverfeatNetwork *)enet;
-(void)setEnet:(EspressoFDOverfeatNetwork *)arg1 ;
-(double)minBoundingBoxThreshold;
-(void)setMinBoundingBoxThreshold:(double)arg1 ;
@end

