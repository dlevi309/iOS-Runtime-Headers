/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol CSProximitySensorProviding <NSObject>
@property (getter=isObjectInProximity,nonatomic,readonly) BOOL objectInProximity; 
@required
-(void)addProximitySensorProviderObserver:(id)arg1;
-(BOOL)isObjectInProximity;
-(void)removeProximitySensorProviderObserver:(id)arg1;

@end

