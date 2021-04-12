/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

