/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/


@protocol ECMessageFlagChangeBuilder
@property (assign,nonatomic) long long reason; 
@required
-(void)changesReadTo:(BOOL)arg1;
-(void)changesDeletedTo:(BOOL)arg1;
-(void)changesRepliedTo:(BOOL)arg1;
-(void)changesFlaggedTo:(BOOL)arg1;
-(void)changesFlagColorTo:(unsigned long long)arg1;
-(void)changesForwardedTo:(BOOL)arg1;
-(void)changesRedirectedTo:(BOOL)arg1;
-(void)changesJunkLevelTo:(unsigned long long)arg1;
-(long long)reason;
-(void)setReason:(long long)arg1;
-(void)changesDraftTo:(BOOL)arg1;
-(void)changesJunkLevelSetByUserTo:(BOOL)arg1;

@end

