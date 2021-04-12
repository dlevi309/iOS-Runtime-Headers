/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <DialogEngine/DialogEngine-Structs.h>
#import <DialogEngine/DENode.h>

@interface DEGroup : DENode

@property (assign) shared_ptr<siri::dialogengine::Group>* This; 
-(id)init;
-(void)dealloc;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Group>*)arg1 ;
-(id)getNodes;
@end

