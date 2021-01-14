/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)draft;
-(BOOL)flagged;
-(void)setFlagged:(BOOL)arg1;
-(BOOL)read;
-(BOOL)deleted;
-(void)setDraft:(BOOL)arg1;
-(BOOL)replied;
-(unsigned long long)flagColor;
-(BOOL)forwarded;
-(BOOL)redirected;
-(void)setReplied:(BOOL)arg1;
-(void)setFlagColor:(unsigned long long)arg1;
-(void)setForwarded:(BOOL)arg1;
-(void)setRedirected:(BOOL)arg1;
-(void)setJunkLevel:(unsigned long long)arg1;
-(unsigned long long)junkLevel;
-(void)setDeleted:(BOOL)arg1;
-(BOOL)junkLevelSetByUser;
-(void)setJunkLevelSetByUser:(BOOL)arg1;
-(void)setRead:(BOOL)arg1;

@end

