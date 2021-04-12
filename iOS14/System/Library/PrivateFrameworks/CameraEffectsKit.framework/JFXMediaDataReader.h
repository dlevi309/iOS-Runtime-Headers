/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

@class NSError, NSString;


@protocol JFXMediaDataReader <NSObject>
@property (nonatomic,readonly) SCD_Struct_JF4 readableTimeRange; 
@property (assign,nonatomic) BOOL isScrubbing; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) unsigned long long signPostID; 
@property (nonatomic,readonly) NSString * name; 
@required
-(void)setIsScrubbing:(BOOL)arg1;
-(NSError *)error;
-(NSString *)name;
-(BOOL)isScrubbing;
-(long long)status;
-(BOOL)beginReadingAtTimeRange:(SCD_Struct_JF4)arg1;
-(BOOL)beginReading;
-(SCD_Struct_JF4)readableTimeRange;
-(unsigned long long)signPostID;

@end

