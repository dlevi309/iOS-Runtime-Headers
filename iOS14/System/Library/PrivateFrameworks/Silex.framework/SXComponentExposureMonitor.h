/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/SXComponentControllerObserver.h>
#import <libobjc.A.dylib/SXComponentExposureMonitor.h>

@protocol SXComponentExposureMonitor <NSObject>
@required
-(void)stopTrackingExposureOfComponentView:(id)arg1;
-(void)stopTrackingExposureOfComponentView:(id)arg1;
-(void)conditionsChanged;
-(void)onExposureOf:(id)arg1 then:(/*^block*/id)arg2 when:(/*^block*/id)arg3;
-(void)onExposureOf:(id)arg1 traits:(unsigned long long)arg2 then:(/*^block*/id)arg3 when:(/*^block*/id)arg4;
-(void)onExposureOf:(id)arg1 then:(/*^block*/id)arg2;
-(void)onExposureOf:(id)arg1 traits:(unsigned long long)arg2 then:(/*^block*/id)arg3;

@end


@protocol SXHost;
@class SXViewport, NSMutableSet, NSString;

@interface SXComponentExposureMonitor : NSObject <SXViewportChangeListener, SXComponentControllerObserver, SXComponentExposureMonitor> {

	SXViewport* _viewport;
	id<SXHost> _host;
	NSMutableSet* _trackingComponents;

}

@property (nonatomic,readonly) SXViewport * viewport;                        //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) id<SXHost> host;                              //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) NSMutableSet * trackingComponents;              //@synthesize trackingComponents=_trackingComponents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXViewport *)viewport;
-(id<SXHost>)host;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(void)stopTrackingExposureOfComponentView:(id)arg1 ;
-(void)viewport:(id)arg1 documentSizeDidChangeFromSize:(CGSize)arg2 ;
-(void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(CGRect)arg2 ;
-(id)initWithViewport:(id)arg1 appStateMonitor:(id)arg2 componentController:(id)arg3 host:(id)arg4 ;
-(void)performMonitoring;
-(void)trackExposureForTracking:(id)arg1 ;
-(void)conditionsChanged;
-(void)onExposureOf:(id)arg1 then:(/*^block*/id)arg2 when:(/*^block*/id)arg3 ;
-(void)componentControllerDidPresent:(id)arg1 ;
-(NSMutableSet *)trackingComponents;
-(void)setTrackingComponents:(NSMutableSet *)arg1 ;
-(void)onExposureOf:(id)arg1 traits:(unsigned long long)arg2 then:(/*^block*/id)arg3 when:(/*^block*/id)arg4 ;
-(void)endExposure:(id)arg1 ;
-(void)onExposureOf:(id)arg1 then:(/*^block*/id)arg2 ;
-(void)beginExposure:(id)arg1 ;
-(void)onExposureOf:(id)arg1 traits:(unsigned long long)arg2 then:(/*^block*/id)arg3 ;
@end

