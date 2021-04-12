/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDSoftwareUpdateFetchedEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _userInitiated;
	BOOL _newUpdateFetched;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=wasUserInitiated,nonatomic) BOOL userInitiated;                    //@synthesize userInitiated=_userInitiated - In the implementation block
@property (assign,getter=wasNewUpdateFetched,nonatomic) BOOL newUpdateFetched;              //@synthesize newUpdateFetched=_newUpdateFetched - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)eventWasUserInitiated:(BOOL)arg1 wasNewUpdateFetched:(BOOL)arg2 ;
-(void)setUserInitiated:(BOOL)arg1 ;
-(BOOL)wasUserInitiated;
-(BOOL)wasNewUpdateFetched;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(void)setNewUpdateFetched:(BOOL)arg1 ;
@end

