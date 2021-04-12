/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


#import <ChatKit/ChatKit-Structs.h>
@interface CKBrowserDragControllerTarget : NSObject {

	double _scale;
	double _meshScaleFactor;
	double _rotation;
	unsigned long long _associatedLayoutIntent;
	CGPoint _screenCoordiante;
	CGSize _initialSize;

}

@property (assign,nonatomic) CGPoint screenCoordiante;                               //@synthesize screenCoordiante=_screenCoordiante - In the implementation block
@property (assign,nonatomic) CGSize initialSize;                                     //@synthesize initialSize=_initialSize - In the implementation block
@property (assign,nonatomic) double scale;                                           //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double meshScaleFactor;                                 //@synthesize meshScaleFactor=_meshScaleFactor - In the implementation block
@property (assign,nonatomic) double rotation;                                        //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) unsigned long long associatedLayoutIntent;              //@synthesize associatedLayoutIntent=_associatedLayoutIntent - In the implementation block
+(id)targetWithScreenCoordiante:(CGPoint)arg1 initialSize:(CGSize)arg2 scale:(double)arg3 meshScaleFactor:(double)arg4 rotation:(double)arg5 associatedLayoutIntent:(unsigned long long)arg6 ;
-(id)description;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(CGSize)initialSize;
-(CGPoint)screenCoordiante;
-(double)meshScaleFactor;
-(void)setScreenCoordiante:(CGPoint)arg1 ;
-(void)setInitialSize:(CGSize)arg1 ;
-(void)setMeshScaleFactor:(double)arg1 ;
-(void)setAssociatedLayoutIntent:(unsigned long long)arg1 ;
-(unsigned long long)associatedLayoutIntent;
@end

