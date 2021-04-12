/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(AUUIAlert *)uiAlert;
-(void)setUiAlert:(AUUIAlert *)arg1 ;
-(BOOL)auUIAlertOKAction:(id)arg1 ;
-(BOOL)auUIAlertCancelAction:(id)arg1 ;
@end

