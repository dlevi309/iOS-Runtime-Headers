/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/


@protocol BSXPCCoding;
@class STKSessionBehavior, BSAction;

@interface STKSessionAction : NSObject {

	STKSessionBehavior* _behavior;
	id<BSXPCCoding> _data;
	BSAction* _action;
	BOOL _invalidated;

}

@property (nonatomic,readonly) BSAction * _BSAction;                       //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) STKSessionBehavior * behavior; 
@property (nonatomic,readonly) id<BSXPCCoding> sessionData; 
+(id)_sessionActionFromBSAction:(id)arg1 ;
-(void)sendResponse:(long long)arg1 ;
-(STKSessionBehavior *)behavior;
-(id<BSXPCCoding>)sessionData;
-(void)invalidate;
-(id)_init;
-(void)dealloc;
-(id)initWithBehavior:(id)arg1 data:(id)arg2 responseBlock:(/*^block*/id)arg3 ;
-(void)sendResponse:(long long)arg1 withContext:(id)arg2 ;
-(BSAction *)_BSAction;
-(id)_initWithBSAction:(id)arg1 ;
@end

