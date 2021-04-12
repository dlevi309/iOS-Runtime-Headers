/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/


@protocol ECMessageFlagsBuilder
@property (assign,nonatomic) BOOL read; 
@property (assign,nonatomic) BOOL deleted; 
@property (assign,nonatomic) BOOL replied; 
@property (assign,nonatomic) BOOL flagged; 
@property (assign,nonatomic) BOOL draft; 
@property (assign,nonatomic) BOOL forwarded; 
@property (assign,nonatomic) BOOL redirected; 
@property (assign,nonatomic) BOOL junkLevelSetByUser; 
@property (assign,nonatomic) unsigned long long junkLevel; 
@property (assign,nonatomic) unsigned long long flagColor; 
@required
-(BOOL)deleted;
-(BOOL)redirected;
-(void)setRedirected:(BOOL)arg1;
-(void)setDeleted:(BOOL)arg1;
-(void)setRead:(BOOL)arg1;
-(BOOL)read;
-(void)setFlagged:(BOOL)arg1;
-(BOOL)flagged;
-(void)setReplied:(BOOL)arg1;
-(void)setFlagColor:(unsigned long long)arg1;
-(void)setDraft:(BOOL)arg1;
-(void)setForwarded:(BOOL)arg1;
-(void)setJunkLevel:(unsigned long long)arg1;
-(BOOL)replied;
-(unsigned long long)flagColor;
-(BOOL)draft;
-(BOOL)forwarded;
-(unsigned long long)junkLevel;
-(BOOL)junkLevelSetByUser;
-(void)setJunkLevelSetByUser:(BOOL)arg1;

@end

