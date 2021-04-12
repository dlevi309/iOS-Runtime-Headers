/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) BOOL editing; 
@property (assign,nonatomic) BOOL downloading; 
@property (assign,nonatomic) BOOL recordedOnWatch; 
@required
-(NSDate *)date;
-(NSString *)path;
-(void)setPath:(id)arg1;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(double)duration;
-(NSString *)uniqueID;
-(CLLocation *)location;
-(void)setDate:(id)arg1;
-(void)setDuration:(double)arg1;
-(void)setLocation:(id)arg1;
-(void)setEditing:(BOOL)arg1;
-(BOOL)editing;
-(void)setUniqueID:(id)arg1;
-(NSString *)customLabel;
-(void)setCustomLabel:(id)arg1;
-(BOOL)synced;
-(void)setPlayable:(BOOL)arg1;
-(void)setDownloading:(BOOL)arg1;
-(BOOL)playable;
-(long long)iTunesPersistentID;
-(void)setITunesPersistentID:(long long)arg1;
-(void)setSynced:(BOOL)arg1;
-(BOOL)pendingRestore;
-(void)setPendingRestore:(BOOL)arg1;
-(NSDate *)evictionDate;
-(BOOL)manuallyRenamed;
-(BOOL)downloading;
-(BOOL)recordedOnWatch;
-(void)setRecordedOnWatch:(BOOL)arg1;
-(void)setManuallyRenamed:(BOOL)arg1;
-(void)setEvictionDate:(id)arg1;

@end

