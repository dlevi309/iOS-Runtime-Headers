/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

@class NSUUID, NSString;


@protocol SignpostSupportLoggingSupportArchiveEvent <NSObject>
@property (assign,nonatomic) unsigned long long _machContinuousTimestamp; 
@property (assign,nonatomic) int processID; 
@property (assign,nonatomic) unsigned long long processUniqueID; 
@property (assign,nonatomic) unsigned long long threadID; 
@property (nonatomic,retain) NSUUID * processImageUUID; 
@property (nonatomic,retain) NSString * processImagePath; 
@property (nonatomic,retain) NSString * processName; 
@property (assign,nonatomic) long long tv_sec; 
@property (assign,nonatomic) int tv_usec; 
@property (assign,nonatomic) int tz_minuteswest; 
@property (assign,nonatomic) int tz_dsttime; 
@required
-(void)setProcessName:(id)arg1;
-(int)processID;
-(unsigned long long)processUniqueID;
-(NSString *)processName;
-(NSString *)processImagePath;
-(unsigned long long)threadID;
-(long long)tv_sec;
-(NSUUID *)processImageUUID;
-(void)setProcessID:(int)arg1;
-(void)setThreadID:(unsigned long long)arg1;
-(int)tv_usec;
-(void)set_machContinuousTimestamp:(unsigned long long)arg1;
-(void)setProcessUniqueID:(unsigned long long)arg1;
-(void)setProcessImageUUID:(id)arg1;
-(void)setProcessImagePath:(id)arg1;
-(id)beginWallTimeStringWithTimeZoneName:(id)arg1;
-(id)endWallTimeStringWithTimeZoneName:(id)arg1;
-(unsigned long long)_machContinuousTimestamp;
-(int)tz_minuteswest;
-(int)tz_dsttime;
-(void)setTv_sec:(long long)arg1;
-(void)setTv_usec:(int)arg1;
-(void)setTz_minuteswest:(int)arg1;
-(void)setTz_dsttime:(int)arg1;

@end

