/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/INGetRideStatusIntentResponseObserver.h>

@protocol INIntentResponseObserver;
@class NSString;

@interface INExtensionContextGetRideStatusIntentResponseObserver : NSObject <INGetRideStatusIntentResponseObserver> {

	id<INIntentResponseObserver> _remoteObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getRideStatusResponseDidUpdate:(id)arg1 ;
-(id)initWithRemoteObserver:(id)arg1 ;
@end

