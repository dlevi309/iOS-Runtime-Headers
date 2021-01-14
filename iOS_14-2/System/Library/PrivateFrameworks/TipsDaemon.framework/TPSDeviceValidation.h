/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsDaemon/TPSInclusivityValidation.h>

@class NSArray;

@interface TPSDeviceValidation : TPSInclusivityValidation

@property (nonatomic,readonly) NSArray * targetDevices; 
@property (nonatomic,readonly) NSArray * excludeDevices; 
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)targetDevices;
-(NSArray *)excludeDevices;
-(id)initWithTargetDevices:(id)arg1 excludeDevices:(id)arg2 ;
-(BOOL)_matchesDevices:(id)arg1 ;
@end

