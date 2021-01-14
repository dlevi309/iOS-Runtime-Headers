/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <libobjc.A.dylib/CSEventHandling.h>

@class NSString;

@interface CSFaceOcclusionMonitor : NSObject <CSEventHandling> {

	unsigned long long _faceOcclusionsSinceScreenOn;

}

@property (nonatomic,readonly) unsigned long long faceOcclusionsSinceScreenOn;              //@synthesize faceOcclusionsSinceScreenOn=_faceOcclusionsSinceScreenOn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)conformsToCSEventHandling;
-(BOOL)_handleBiometricEvent:(unsigned long long)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(unsigned long long)faceOcclusionsSinceScreenOn;
@end

