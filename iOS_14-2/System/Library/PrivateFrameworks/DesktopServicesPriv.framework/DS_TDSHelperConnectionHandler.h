/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DesktopServicesPriv.framework/DesktopServicesPriv
*/


#import <DesktopServicesPriv/DesktopServicesPriv-Structs.h>
@interface DS_TDSHelperConnectionHandler : NSObject {

	TDSHelperContext* _helper;
	TDSMutex _mutex;

}
-(id)initWithHelper:(TDSHelperContext*)arg1 ;
-(void)handleHelperEvent:(id)arg1 ;
-(void)clearHelper;
@end

