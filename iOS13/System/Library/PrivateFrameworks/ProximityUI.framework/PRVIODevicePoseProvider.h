/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
*/

#import <ProximityUI/PRDevicePoseProvider.h>
#import <libobjc.A.dylib/ARSessionDelegate.h>

@class ARSession, PRDevicePoseValidator, NSString;

@interface PRVIODevicePoseProvider : PRDevicePoseProvider <ARSessionDelegate> {

	BOOL _trackingNormal;
	ARSession* _session;
	PRDevicePoseValidator* _poseValidator;

}

@property (nonatomic,retain) ARSession * session;                                //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) PRDevicePoseValidator * poseValidator;              //@synthesize poseValidator=_poseValidator - In the implementation block
@property (assign,nonatomic) BOOL trackingNormal;                                //@synthesize trackingNormal=_trackingNormal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(ARSession *)session;
-(void)setSession:(ARSession *)arg1 ;
-(void)session:(id)arg1 didUpdateFrame:(id)arg2 ;
-(id)initWithARSession:(id)arg1 ;
-(void)setPoseValidator:(PRDevicePoseValidator *)arg1 ;
-(void)setTrackingNormal:(BOOL)arg1 ;
-(BOOL)trackingNormal;
-(PRDevicePoseValidator *)poseValidator;
@end

