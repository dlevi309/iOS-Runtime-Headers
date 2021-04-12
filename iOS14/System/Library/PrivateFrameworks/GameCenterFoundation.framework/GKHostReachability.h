/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setError:(NSError *)arg1 ;
-(void)setHostName:(NSString *)arg1 ;
-(NSError *)error;
-(NSString *)hostName;
-(void)dealloc;
@end

