/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol OS_dispatch_data;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSObject;

@interface __NSCFURLLocalStreamTaskFromDataTaskDataBlobby : NSObject {

	NSObject*<OS_dispatch_data> _remainingData;
	/*^block*/id _completion;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)drain:(CFWriteStreamRef)arg1 ;
-(void)callCompletion;
@end

