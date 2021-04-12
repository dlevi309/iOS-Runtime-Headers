/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(ARSession *)session;
-(void)session:(id)arg1 didUpdateFrame:(id)arg2 ;
-(void)setSession:(ARSession *)arg1 ;
-(void)reset;
-(id)initWithARSession:(id)arg1 ;
-(void)setPoseValidator:(PRDevicePoseValidator *)arg1 ;
-(void)setTrackingNormal:(BOOL)arg1 ;
-(BOOL)trackingNormal;
-(PRDevicePoseValidator *)poseValidator;
@end

