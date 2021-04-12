/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


#import <Espresso/Espresso-Structs.h>
@interface EspressoFaceLandmarkDetector : NSObject {

	vImage_Buffer* crop_scaled;
	vImage_Buffer* crop_192;
	shared_ptr<Espresso::net>* net;
	shared_ptr<Espresso::net>* net_detect;
	vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > >* nets_sub_landmark;
	CGRect _newface;

}

@property (assign) CGRect newface;              //@synthesize newface=_newface - In the implementation block
-(id)init;
-(void)dealloc;
-(vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint> >*)detect:(vImage_Buffer*)arg1 face:(CGRect)arg2 sublandmark:(BOOL)arg3 doFaceRectFix:(BOOL)arg4 ;
-(CGRect)newface;
-(id)initWithNetworkAtPath:(id)arg1 contextObjC:(id)arg2 platform:(int)arg3 computePath:(int)arg4 ;
-(vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint> >*)extractSubLandmarksFromCrop192:(vImage_Buffer*)arg1 centers192:(vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint> >*)arg2 ;
-(vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint> >*)detectInImageRect:(vImage_Buffer*)arg1 face:(CGRect)arg2 sublandmark:(BOOL)arg3 ;
-(id)initWithNetworkAtPath:(id)arg1 context:(shared_ptr<Espresso::abstract_context>*)arg2 platform:(int)arg3 computePath:(int)arg4 ;
-(void)commonInit:(id)arg1 context:(shared_ptr<Espresso::abstract_context>*)arg2 platform:(int)arg3 computePath:(int)arg4 ;
-(void)setNewface:(CGRect)arg1 ;
@end

