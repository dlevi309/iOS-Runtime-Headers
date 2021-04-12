/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

#import <libobjc.A.dylib/PRSTriggerTask.h>

@interface PRSFTETask : NSObject <PRSTriggerTask> {

	/*^block*/id _reply;

}

@property (copy) id reply;              //@synthesize reply=_reply - In the implementation block
-(id)initWithReply:(/*^block*/id)arg1 ;
-(id)reply;
-(void)setReply:(id)arg1 ;
-(BOOL)needsBag;
-(void)triggerQuery:(BOOL)arg1 ;
-(BOOL)allowLocation;
@end

