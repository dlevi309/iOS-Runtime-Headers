/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBSceneMonitorBehaviors : NSObject <NSCopying> {

	BOOL _monitorsSettings;
	BOOL _monitorsPairingStatus;
	BOOL _monitorsClientSettings;

}

@property (assign,nonatomic) BOOL monitorsClientSettings;              //@synthesize monitorsClientSettings=_monitorsClientSettings - In the implementation block
@property (assign,nonatomic) BOOL monitorsSettings;                    //@synthesize monitorsSettings=_monitorsSettings - In the implementation block
@property (assign,nonatomic) BOOL monitorsPairingStatus;               //@synthesize monitorsPairingStatus=_monitorsPairingStatus - In the implementation block
-(void)setMonitorsSettings:(BOOL)arg1 ;
-(BOOL)monitorsClientSettings;
-(void)setMonitorsClientSettings:(BOOL)arg1 ;
-(void)setMonitorsPairingStatus:(BOOL)arg1 ;
-(BOOL)monitorsSettings;
-(BOOL)monitorsPairingStatus;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

