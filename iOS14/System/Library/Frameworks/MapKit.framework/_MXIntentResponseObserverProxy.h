/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)stopObserving;
-(void)setObserver:(id<_MXIntentResponseObserver>)arg1 ;
-(id<_MXIntentResponseObserver>)observer;
-(void)didReceiveError:(id)arg1 ;
-(void)intentResponseDidUpdate:(id)arg1 ;
-(void)intentResponseDidUpdate:(id)arg1 withSerializedCacheItems:(id)arg2 ;
-(id)initWithObserver:(id)arg1 ;
@end

