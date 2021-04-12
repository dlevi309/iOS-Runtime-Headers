/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@class CXCallObserver, NSString;

@interface JFXCaptureCallObserver : NSObject <CXCallObserverDelegate> {

	CXCallObserver* _callObserver;

}

@property (nonatomic,retain) CXCallObserver * callObserver;              //@synthesize callObserver=_callObserver - In the implementation block
@property (nonatomic,readonly) long long callCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setCallObserver:(CXCallObserver *)arg1 ;
-(CXCallObserver *)callObserver;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(long long)callCount;
@end

