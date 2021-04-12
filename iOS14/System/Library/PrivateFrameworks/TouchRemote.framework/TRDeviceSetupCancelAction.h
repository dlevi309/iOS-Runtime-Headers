/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRDeviceSetupAction.h>

@class NSError;

@interface TRDeviceSetupCancelAction : TRDeviceSetupAction {

	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)initWithError:(id)arg1 ;
-(id)init;
-(NSError *)error;
@end

