/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
*/


@class NSString;

@interface SUCoreFSMAttachedAction : NSObject {

	NSString* _fsmAction;
	id _actionDelegate;
	Class _eventInfoClass;

}

@property (nonatomic,retain,readonly) NSString * fsmAction;              //@synthesize fsmAction=_fsmAction - In the implementation block
@property (nonatomic,__weak,readonly) id actionDelegate;                 //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (nonatomic,retain,readonly) Class eventInfoClass;              //@synthesize eventInfoClass=_eventInfoClass - In the implementation block
-(id)description;
-(id)actionDelegate;
-(NSString *)fsmAction;
-(Class)eventInfoClass;
-(id)initWithAction:(id)arg1 usingDelegate:(id)arg2 withInfoClass:(Class)arg3 ;
@end

