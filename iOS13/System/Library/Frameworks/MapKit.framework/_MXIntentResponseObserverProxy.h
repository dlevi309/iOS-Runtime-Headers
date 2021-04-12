/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/INIntentResponseObserver.h>

@protocol _MXIntentResponseObserver;
@class NSString;

@interface _MXIntentResponseObserverProxy : NSObject <INIntentResponseObserver> {

	id<_MXIntentResponseObserver> _observer;

}

@property (assign,nonatomic,__weak) id<_MXIntentResponseObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_MXIntentResponseObserver>)observer;
-(void)setObserver:(id<_MXIntentResponseObserver>)arg1 ;
-(void)stopObserving;
-(id)initWithObserver:(id)arg1 ;
-(void)intentResponseDidUpdate:(id)arg1 ;
-(void)intentResponseDidUpdate:(id)arg1 withSerializedCacheItems:(id)arg2 ;
-(void)didReceiveError:(id)arg1 ;
@end

