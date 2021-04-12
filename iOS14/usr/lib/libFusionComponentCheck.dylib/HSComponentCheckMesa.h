/*
* Generated on Thursday, January 14, 2021 at 2:29:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libFusionComponentCheck.dylib
*/

#import <libFusionComponentCheck.dylib/HSComponentCheckBase.h>

@class NSString;

@interface HSComponentCheckMesa : HSComponentCheckBase {

	NSString* currentNvSn;
	NSString* currentBBUniqueChipId;
	NSString* currentBBSerialNo;

}
+(id)sharedSingleton;
-(id)init;
-(id)querySN;
-(id)getMesaSensorSerialNumber:(id)arg1 ;
-(id)getUniqueChipId:(id*)arg1 ;
-(id)getUniqueDeviceId:(id*)arg1 ;
@end

