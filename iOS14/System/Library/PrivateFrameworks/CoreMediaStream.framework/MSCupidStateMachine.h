/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <libobjc.A.dylib/MSStreamsProtocolDelegate.h>

@class NSString, NSMutableDictionary, MSBackoffManager;

@interface MSCupidStateMachine : NSObject <MSStreamsProtocolDelegate> {

	NSString* _personID;
	NSString* _manifestPath;
	NSMutableDictionary* _userManifest;
	MSBackoffManager* _streamsBackoffManager;
	MSBackoffManager* _MMCSBackoffManager;
	BOOL _hasDeactivated;

}

@property (nonatomic,retain) NSMutableDictionary * _userManifest;              //@synthesize userManifest=_userManifest - In the implementation block
@property (nonatomic,readonly) NSString * personID;                            //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) BOOL hasDeactivated;                              //@synthesize hasDeactivated=_hasDeactivated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_abort;
-(void)deactivate;
-(void)forget;
-(NSMutableDictionary *)_userManifest;
-(NSString *)personID;
-(void)_forget;
-(void)dealloc;
-(void)protocol:(id)arg1 didReceiveRetryAfterDate:(id)arg2 ;
-(void)_updateMasterManifest;
-(id)initWithPersonID:(id)arg1 ;
-(void)_commitUserManifest;
-(void)_resetStreamsBackoffTimer;
-(void)_backoffStreamsBackoffTimer;
-(void)_didReceiveStreamsRetryAfterDate:(id)arg1 ;
-(void)_resetMMCSBackoffTimer;
-(void)_backoffMMCSBackoffTimer;
-(void)_didReceiveMMCSRetryAfterDate:(id)arg1 ;
-(id)_latestNextActivityDate;
-(void)set_userManifest:(NSMutableDictionary *)arg1 ;
-(BOOL)hasDeactivated;
-(void)setHasDeactivated:(BOOL)arg1 ;
@end

