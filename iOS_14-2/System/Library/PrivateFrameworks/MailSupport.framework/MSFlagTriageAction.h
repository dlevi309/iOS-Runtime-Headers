/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <MailSupport/MSFlagChangeTriageAction.h>

@class NSNumber;

@interface MSFlagTriageAction : MSFlagChangeTriageAction {

	NSNumber* _flagColor;
	unsigned long long _cachedFlagState;

}

@property (assign,nonatomic) unsigned long long cachedFlagState;              //@synthesize cachedFlagState=_cachedFlagState - In the implementation block
@property (nonatomic,retain) NSNumber * flagColor;                            //@synthesize flagColor=_flagColor - In the implementation block
-(NSNumber *)flagColor;
-(void)setFlagColor:(NSNumber *)arg1 ;
-(void)_toggleFlagWithBuilder:(id)arg1 ;
-(BOOL)flagState;
-(unsigned long long)cachedFlagState;
-(void)setCachedFlagState:(unsigned long long)arg1 ;
-(BOOL)_isFlagged;
-(void)_toggleCachedFlagState;
@end

