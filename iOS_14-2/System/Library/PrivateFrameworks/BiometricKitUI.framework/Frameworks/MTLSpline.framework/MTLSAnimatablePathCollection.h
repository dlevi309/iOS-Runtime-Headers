/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Frameworks/MTLSpline.framework/MTLSpline
*/


#import <MTLSpline/MTLSpline-Structs.h>
@class NSMutableDictionary, MTLSPath;

@interface MTLSAnimatablePathCollection : NSObject {

	vector<ControlPoint, std::__1::allocator<ControlPoint> >* _controlPointStateVector;
	NSMutableDictionary* _paths;
	MTLSPath* _defaultPath;
	ControlPoint* _controlPointState;

}

@property (readonly) NSMutableDictionary * paths;                          //@synthesize paths=_paths - In the implementation block
@property (readonly) MTLSPath * defaultPath;                               //@synthesize defaultPath=_defaultPath - In the implementation block
@property (assign,nonatomic) ControlPoint* controlPointState;              //@synthesize controlPointState=_controlPointState - In the implementation block
-(NSMutableDictionary *)paths;
-(MTLSPath *)defaultPath;
-(void)removePath:(id)arg1 ;
-(id)initWithDefaultPath:(id)arg1 ;
-(void)setPath:(id)arg1 forKey:(id)arg2 ;
-(ControlPoint*)blendPath:(id)arg1 withPath:(id)arg2 byAmount:(float)arg3 ;
-(ControlPoint*)controlPointState;
-(void)setControlPointState:(ControlPoint*)arg1 ;
@end

