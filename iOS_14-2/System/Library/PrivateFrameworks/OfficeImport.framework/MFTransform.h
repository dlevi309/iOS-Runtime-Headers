/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MFDeviceDriver;
@class NSObject;

@interface MFTransform : NSObject <NSCopying> {

	CGAffineTransform m_world;
	CGPoint m_windowOrg;
	CGPoint m_windowExt;
	CGPoint m_viewportOrg;
	CGPoint m_viewportExt;
	CGAffineTransform m_combinedTransform;
	int m_mapMode;
	NSObject*<MFDeviceDriver> m_deviceDriver;

}
-(int)setMapMode:(int)arg1 ;
-(id)initWithDriver:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)DPtoLP:(CGPoint)arg1 ;
-(CGPoint)LPtoDP:(CGPoint)arg1 ;
-(int)updateTransform;
-(int)setWorldTransform:(const CGAffineTransform*)arg1 ;
-(CGAffineTransform)getTransformMatrix;
-(CGAffineTransform)getWorldMatrix;
-(void)setWorldMatrix:(CGAffineTransform)arg1 ;
-(CGPoint)getWindowOrg;
-(void)setWindowOrg:(CGPoint)arg1 ;
-(CGPoint)getWindowExtent;
-(void)setWindowExt:(CGPoint)arg1 ;
-(CGPoint)getViewportOrg;
-(void)setViewportOrg:(CGPoint)arg1 ;
-(CGPoint)getViewportExtent;
-(void)setViewportExt:(CGPoint)arg1 ;
-(void)setTransformMatrix:(CGAffineTransform)arg1 ;
-(int)getMapMode;
-(int)modifyWorldTransform:(const CGAffineTransform*)arg1 in_command:(int)arg2 ;
-(BOOL)isUpsideDown;
-(int)setWindowExt:(int)arg1 in_y:(int)arg2 ;
-(int)setViewportExt:(int)arg1 in_y:(int)arg2 ;
-(int)scaleWindowExt:(int)arg1 in_xDenom:(int)arg2 in_yNum:(int)arg3 in_yDenom:(int)arg4 ;
-(int)scaleViewportExt:(int)arg1 in_xDenom:(int)arg2 in_yNum:(int)arg3 in_yDenom:(int)arg4 ;
-(int)setWindowOrg:(int)arg1 in_y:(int)arg2 ;
-(int)setViewportOrg:(int)arg1 in_y:(int)arg2 ;
-(int)offsetWindowOrg:(int)arg1 in_y:(int)arg2 ;
-(int)offsetViewportOrg:(int)arg1 in_y:(int)arg2 ;
@end

