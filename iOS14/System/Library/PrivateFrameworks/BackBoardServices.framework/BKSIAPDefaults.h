/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString;

@interface BKSIAPDefaults : BSAbstractDefaultDomain

@property (nonatomic,retain) NSString * videoTVOutSystem; 
@property (nonatomic,readonly) NSString * videoTVOutSignal; 
@property (nonatomic,readonly) NSString * videoTVOutReservedForIPodOut; 
@property (nonatomic,readonly) NSString * videoTVOutReservedForRemoteUI; 
-(void)setVideoTVOutReservedForIPodOut:(NSString *)arg1 ;
-(NSString *)videoTVOutReservedForIPodOut;
-(void)setVideoTVOutSystem:(NSString *)arg1 ;
-(NSString *)videoTVOutSystem;
-(void)setVideoTVOutSignal:(NSString *)arg1 ;
-(NSString *)videoTVOutSignal;
-(void)setVideoTVOutReservedForRemoteUI:(NSString *)arg1 ;
-(NSString *)videoTVOutReservedForRemoteUI;
-(id)init;
-(void)_bindAndRegisterDefaults;
@end

