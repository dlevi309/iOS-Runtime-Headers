/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)newface;
-(void)setNewface:(CGRect)arg1 ;
-(vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint> >*)detectInImageRect:(vImage_Buffer*)arg1 face:(CGRect)arg2 sublandmark:(BOOL)arg3 ;
-(vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint> >*)extractSubLandmarksFromCrop192:(vImage_Buffer*)arg1 centers192:(vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint> >*)arg2 ;
-(void)commonInit:(id)arg1 context:(shared_ptr<Espresso::abstract_context>*)arg2 platform:(int)arg3 computePath:(int)arg4 ;
-(vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint> >*)detect:(vImage_Buffer*)arg1 face:(CGRect)arg2 sublandmark:(BOOL)arg3 doFaceRectFix:(BOOL)arg4 ;
-(id)initWithNetworkAtPath:(id)arg1 context:(shared_ptr<Espresso::abstract_context>*)arg2 platform:(int)arg3 computePath:(int)arg4 ;
-(id)initWithNetworkAtPath:(id)arg1 contextObjC:(id)arg2 platform:(int)arg3 computePath:(int)arg4 ;
-(void)dealloc;
@end

