/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMutableDictionary;

@interface SBEventObserverRegistry : NSObject {

	void* _provider;
	NSMutableDictionary* _observers;

}
+(id)sharedInstance;
-(void)setValue:(BOOL)arg1 forState:(CFStringRef)arg2 ;
-(void)postEventToInterestedObservers:(CFStringRef)arg1 ;
-(void)addObserverWithToken:(unsigned long long)arg1 forEvent:(id)arg2 ;
-(void)removeObserverWithToken:(unsigned long long)arg1 forEvent:(id)arg2 ;
-(void)handleEvent:(id)arg1 token:(unsigned long long)arg2 action:(long long)arg3 ;
@end

