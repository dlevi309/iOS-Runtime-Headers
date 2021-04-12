/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class NSArray;

@interface _PASXPCServer : NSObject {

	NSArray* _XPCListeners;

}
+(id)description;
+(void)registerForService:(id)arg1 delegate:(id)arg2 ;
-(id)init;
-(id)initWithXPCListeners:(id)arg1 logHandle:(id)arg2 ;
-(void)registerXPCListeners;
@end

