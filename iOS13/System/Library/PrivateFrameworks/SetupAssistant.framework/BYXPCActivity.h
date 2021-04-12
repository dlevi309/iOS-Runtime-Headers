/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@protocol OS_xpc_object;
@class NSObject;

@interface BYXPCActivity : NSObject {

	NSObject*<OS_xpc_object> _xpcActivity;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcActivity;              //@synthesize xpcActivity=_xpcActivity - In the implementation block
@property (nonatomic,copy) NSObject*<OS_xpc_object> criteria; 
+(id)activityWithXPCActivity:(id)arg1 ;
-(long long)state;
-(BOOL)setState:(long long)arg1 ;
-(NSObject*<OS_xpc_object>)xpcActivity;
-(void)setXpcActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)criteria;
-(void)setCriteria:(NSObject*<OS_xpc_object>)arg1 ;
@end

