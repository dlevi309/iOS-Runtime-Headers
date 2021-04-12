/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


#import <HealthUI/HealthUI-Structs.h>
@interface HKTinkerSharingHelper : NSObject {

	CTServerConnectionRef _ctServerConnection;

}

@property (nonatomic,readonly) BOOL isChinaSKUDevice; 
@property (assign,nonatomic) BOOL networkAccessEnabledForHealth; 
-(id)init;
-(BOOL)isChinaSKUDevice;
-(BOOL)networkAccessEnabledForHealth;
-(void)setNetworkAccessEnabledForHealth:(BOOL)arg1 ;
@end

