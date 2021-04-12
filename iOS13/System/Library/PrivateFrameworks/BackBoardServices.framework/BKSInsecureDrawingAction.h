/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BaseBoard/BSAction.h>

@class NSDictionary, NSArray;

@interface BKSInsecureDrawingAction : BSAction

@property (nonatomic,readonly) NSDictionary * pidToContextInfoDictionary; 
@property (nonatomic,readonly) NSArray * processIds; 
@property (nonatomic,readonly) NSArray * secureModeViolations; 
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithPidToContextIdsDictionary:(id)arg1 ;
-(id)initWithSecureModeViolations:(id)arg1 ;
-(id)_initWithPidToContextInfoDictionary:(id)arg1 ;
-(NSArray *)secureModeViolations;
-(NSDictionary *)pidToContextInfoDictionary;
-(NSArray *)processIds;
@end

