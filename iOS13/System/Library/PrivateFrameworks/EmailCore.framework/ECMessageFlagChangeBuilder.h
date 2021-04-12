/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/


@protocol ECMessageFlagChangeBuilder
@property (assign,nonatomic) long long reason; 
@required
-(long long)reason;
-(void)setReason:(long long)arg1;
-(void)changesReadTo:(BOOL)arg1;
-(void)changesDeletedTo:(BOOL)arg1;
-(void)changesRepliedTo:(BOOL)arg1;
-(void)changesFlaggedTo:(BOOL)arg1;
-(void)changesFlagColorTo:(unsigned long long)arg1;
-(void)changesForwardedTo:(BOOL)arg1;
-(void)changesRedirectedTo:(BOOL)arg1;
-(void)changesJunkLevelTo:(unsigned long long)arg1;
-(void)changesDraftTo:(BOOL)arg1;
-(void)changesJunkLevelSetByUserTo:(BOOL)arg1;

@end

