/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

#import <libobjc.A.dylib/PRSTriggerTask.h>

@interface PRSFTETask : NSObject <PRSTriggerTask> {

	/*^block*/id _reply;

}

@property (copy) id reply;              //@synthesize reply=_reply - In the implementation block
-(id)reply;
-(id)initWithReply:(/*^block*/id)arg1 ;
-(void)setReply:(id)arg1 ;
-(BOOL)needsBag;
-(void)triggerQuery:(BOOL)arg1 ;
-(BOOL)allowLocation;
@end

