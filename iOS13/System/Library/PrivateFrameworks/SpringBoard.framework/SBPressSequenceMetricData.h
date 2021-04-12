/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBAWDMetricData.h>

@class NSString, NSArray, NSUUID;

@interface SBPressSequenceMetricData : SBAWDMetricData {

	BOOL _didTriggerSOS;
	NSString* _pressName;
	NSArray* _pressSequence;
	unsigned long long _clickMax;
	NSUUID* _sosTriggerUUID;

}

@property (nonatomic,copy) NSString * pressName;                       //@synthesize pressName=_pressName - In the implementation block
@property (nonatomic,copy) NSArray * pressSequence;                    //@synthesize pressSequence=_pressSequence - In the implementation block
@property (assign,nonatomic) BOOL didTriggerSOS;                       //@synthesize didTriggerSOS=_didTriggerSOS - In the implementation block
@property (assign,nonatomic) unsigned long long clickMax;              //@synthesize clickMax=_clickMax - In the implementation block
@property (nonatomic,copy) NSUUID * sosTriggerUUID;                    //@synthesize sosTriggerUUID=_sosTriggerUUID - In the implementation block
-(void)setDidTriggerSOS:(BOOL)arg1 ;
-(BOOL)didTriggerSOS;
-(void)setClickMax:(unsigned long long)arg1 ;
-(unsigned long long)clickMax;
-(NSArray *)pressSequence;
-(NSString *)pressName;
-(NSUUID *)sosTriggerUUID;
-(void)setPressName:(NSString *)arg1 ;
-(void)setPressSequence:(NSArray *)arg1 ;
-(void)setSosTriggerUUID:(NSUUID *)arg1 ;
@end

