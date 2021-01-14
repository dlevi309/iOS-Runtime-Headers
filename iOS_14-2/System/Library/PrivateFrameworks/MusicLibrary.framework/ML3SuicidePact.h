/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)execute;
-(BOOL)isSigned;
-(id)init;
-(BOOL)isSignedForReason:(long long)arg1 ;
-(void)secedeForReason:(long long)arg1 ;
-(void)signForReason:(long long)arg1 ;
-(void)_carryOutSuicidePact;
-(void)dealloc;
@end

