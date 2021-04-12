/*
* Generated on Thursday, January 14, 2021 at 2:29:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libFusionComponentCheck.dylib
*/

#import <libFusionComponentCheck.dylib/HSComponentCheckBase.h>

@class NSString;

@interface HSComponentCheckBaseband : HSComponentCheckBase {

	NSString* currentBBUniqueChipId;
	NSString* currentBBSerialNo;

}
-(id)querySN;
-(id)getBasebandInfo:(int)arg1 response:(id*)arg2 ;
@end

