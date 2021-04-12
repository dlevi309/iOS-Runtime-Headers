/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
*/

#import <SoftwareUpdateServices/SUAutoInstallOperation.h>

@class NSUUID;

@interface SUSUIFakeSUAutoInstallOperation : SUAutoInstallOperation {

	BOOL _cancelled;
	NSUUID* _uuid;

}
-(void)cancel;
-(BOOL)isExpired;
-(BOOL)isCanceled;
-(id)id;
-(id)forecast;
@end

