/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface ML3SuicidePact : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableSet* _signatures;
	int _notifyToken;

}

@property (nonatomic,readonly) BOOL isSigned; 
+(id)sharedPact;
-(id)init;
-(void)dealloc;
-(void)execute;
-(BOOL)isSigned;
-(void)signForReason:(long long)arg1 ;
-(void)_carryOutSuicidePact;
-(void)secedeForReason:(long long)arg1 ;
-(BOOL)isSignedForReason:(long long)arg1 ;
@end

