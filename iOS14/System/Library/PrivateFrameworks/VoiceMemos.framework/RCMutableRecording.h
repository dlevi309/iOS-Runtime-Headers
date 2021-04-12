/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

@class NSDate, NSString, CLLocation;


@protocol RCMutableRecording <RCRecording>
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSDate * evictionDate; 
@property (nonatomic,copy) NSString * path; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,copy) CLLocation * location; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * customLabel; 
@property (nonatomic,copy) NSString * uniqueID; 
@property (assign,nonatomic) long long iTunesPersistentID; 
@property (assign,nonatomic) BOOL synced; 
@property (assign,nonatomic) BOOL pendingRestore; 
@property (assign,nonatomic) BOOL playable; 
@property (assign,nonatomic) BOOL manuallyRenamed; 
@property (assign,nonatomic) BOOL deleted; 
@property (assign,nonatomic) BOOL downloading; 
@property (assign,nonatomic) BOOL recordedOnWatch; 
@property (assign,nonatomic) BOOL favorite; 
@property (assign,nonatomic) BOOL enhanced; 
@property (assign,nonatomic) BOOL watchOS; 
@property (assign,nonatomic) BOOL musicMemo; 
@required
-(void)setFavorite:(BOOL)arg1;
-(void)setWatchOS:(BOOL)arg1;
-(void)setUniqueID:(id)arg1;
-(BOOL)synced;
-(BOOL)downloading;
-(void)setPlayable:(BOOL)arg1;
-(void)setDuration:(double)arg1;
-(NSString *)uniqueID;
-(BOOL)enhanced;
-(BOOL)musicMemo;
-(CLLocation *)location;
-(void)setTitle:(id)arg1;
-(void)setPath:(id)arg1;
-(BOOL)deleted;
-(NSString *)path;
-(BOOL)watchOS;
-(void)setDate:(id)arg1;
-(void)setEvictionDate:(id)arg1;
-(void)setRecordedOnWatch:(BOOL)arg1;
-(void)setLocation:(id)arg1;
-(void)setPendingRestore:(BOOL)arg1;
-(NSString *)customLabel;
-(void)setCustomLabel:(id)arg1;
-(void)setEnhanced:(BOOL)arg1;
-(long long)iTunesPersistentID;
-(void)setITunesPersistentID:(long long)arg1;
-(NSDate *)evictionDate;
-(void)setSynced:(BOOL)arg1;
-(void)setManuallyRenamed:(BOOL)arg1;
-(BOOL)recordedOnWatch;
-(BOOL)pendingRestore;
-(BOOL)manuallyRenamed;
-(NSDate *)date;
-(void)setDeleted:(BOOL)arg1;
-(BOOL)favorite;
-(BOOL)playable;
-(double)duration;
-(void)setDownloading:(BOOL)arg1;
-(void)setMusicMemo:(BOOL)arg1;
-(NSString *)title;

@end

