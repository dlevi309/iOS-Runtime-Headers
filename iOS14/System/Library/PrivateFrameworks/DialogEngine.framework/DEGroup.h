/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <DialogEngine/DialogEngine-Structs.h>
#import <DialogEngine/DENode.h>

@interface DEGroup : DENode

@property (assign) shared_ptr<siri::dialogengine::Group>* This; 
-(id)init;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Group>*)arg1 ;
-(id)getNodes;
-(void)dealloc;
@end

