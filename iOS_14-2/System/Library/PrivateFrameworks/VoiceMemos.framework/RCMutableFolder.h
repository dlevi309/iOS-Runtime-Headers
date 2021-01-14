/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

@class NSString;


@protocol RCMutableFolder <RCFolder>
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) long long rank; 
@required
-(void)setRank:(long long)arg1;
-(NSString *)name;
-(long long)rank;
-(void)setName:(id)arg1;
-(void)addRecording:(id)arg1;
-(void)removeRecording:(id)arg1;

@end

