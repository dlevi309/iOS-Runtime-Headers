/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <libobjc.A.dylib/AUUIAlertDelegate.h>

@class AUUIAlert, NSString;

@interface AUUIAlertDelegateClass : NSObject <AUUIAlertDelegate> {

	AUUIAlert* uiAlert;

}

@property (nonatomic,retain) AUUIAlert * uiAlert; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AUUIAlert *)uiAlert;
-(void)dealloc;
-(void)setUiAlert:(AUUIAlert *)arg1 ;
-(BOOL)auUIAlertOKAction:(id)arg1 ;
-(BOOL)auUIAlertCancelAction:(id)arg1 ;
@end

