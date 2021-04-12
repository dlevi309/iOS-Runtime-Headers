/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface CCSControlCenterDefaults : BSAbstractDefaultDomain

@property (assign,nonatomic) unsigned long long presentationGesture; 
@property (assign,nonatomic) unsigned long long userInvocationCount; 
@property (assign,nonatomic) BOOL shouldEnablePrototypeFeatures; 
@property (assign,nonatomic) BOOL shouldEnableInternalModules; 
+(id)standardDefaults;
-(void)setShouldEnableInternalModules:(BOOL)arg1 ;
-(BOOL)shouldEnableInternalModules;
-(void)setPresentationGesture:(unsigned long long)arg1 ;
-(unsigned long long)presentationGesture;
-(void)setShouldEnablePrototypeFeatures:(BOOL)arg1 ;
-(BOOL)shouldEnablePrototypeFeatures;
-(void)setUserInvocationCount:(unsigned long long)arg1 ;
-(unsigned long long)userInvocationCount;
-(id)init;
-(void)_bindAndRegisterDefaults;
-(unsigned long long)_defaultPresentationGesture;
@end

