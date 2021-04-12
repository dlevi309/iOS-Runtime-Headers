/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <GameCenterFoundation/GKReachability.h>

@class NSString, NSError;

@interface GKHostReachability : GKReachability {

	NSString* _hostName;
	NSError* _error;

}

@property (nonatomic,retain) NSString * hostName;              //@synthesize hostName=_hostName - In the implementation block
@property (nonatomic,retain) NSError * error;                  //@synthesize error=_error - In the implementation block
+(id)_gkReachabilityWithHostName:(id)arg1 ;
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)hostName;
-(void)setHostName:(NSString *)arg1 ;
@end

