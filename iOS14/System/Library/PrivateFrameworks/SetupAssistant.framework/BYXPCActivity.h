/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCriteria:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setXpcActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)criteria;
-(BOOL)setState:(long long)arg1 ;
-(long long)state;
-(NSObject*<OS_xpc_object>)xpcActivity;
@end

