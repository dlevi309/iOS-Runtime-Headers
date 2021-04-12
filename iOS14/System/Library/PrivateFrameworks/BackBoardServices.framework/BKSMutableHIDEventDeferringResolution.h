/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventDeferringResolution.h>

@class BKSHIDEventDisplay, BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, NSString;

@interface BKSMutableHIDEventDeferringResolution : BKSHIDEventDeferringResolution

@property (nonatomic,copy) BKSHIDEventDisplay * display; 
@property (nonatomic,copy) BKSHIDEventDeferringEnvironment * environment; 
@property (assign,nonatomic) long long versionedPID; 
@property (assign,nonatomic) int pid; 
@property (nonatomic,copy) BKSHIDEventDeferringToken * token; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
+(id)new;
-(void)setDisplay:(BKSHIDEventDisplay *)arg1 ;
-(id)init;
-(void)setToken:(BKSHIDEventDeferringToken *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setEnvironment:(BKSHIDEventDeferringEnvironment *)arg1 ;
-(void)setVersionedPID:(long long)arg1 ;
-(void)setPid:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

