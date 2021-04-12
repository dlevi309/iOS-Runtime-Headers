/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

