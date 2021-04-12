/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BaseBoard/BSAction.h>

@class NSDictionary, NSArray;

@interface BKSInsecureDrawingAction : BSAction

@property (nonatomic,readonly) NSDictionary * pidToContextInfoDictionary; 
@property (nonatomic,readonly) NSArray * processIds; 
@property (nonatomic,readonly) NSArray * secureModeViolations; 
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(NSArray *)secureModeViolations;
-(NSArray *)processIds;
-(id)initWithPidToContextIdsDictionary:(id)arg1 ;
-(id)initWithSecureModeViolations:(id)arg1 ;
-(id)_initWithPidToContextInfoDictionary:(id)arg1 ;
-(NSDictionary *)pidToContextInfoDictionary;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
@end

