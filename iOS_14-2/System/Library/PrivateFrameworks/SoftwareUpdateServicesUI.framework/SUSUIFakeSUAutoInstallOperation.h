/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
*/

#import <SoftwareUpdateServices/SUAutoInstallOperation.h>

@class NSUUID;

@interface SUSUIFakeSUAutoInstallOperation : SUAutoInstallOperation {

	BOOL _cancelled;
	NSUUID* _uuid;

}
-(id)id;
-(BOOL)isCanceled;
-(id)forecast;
-(BOOL)isExpired;
-(void)cancel;
@end

