/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@interface CKManualUpdater : NSObject {

	BOOL _needsUpdate;
	id _target;
	SEL _action;

}

@property (assign,nonatomic) BOOL needsUpdate;              //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (assign,nonatomic) id target;                     //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
-(id)description;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(SEL)action;
-(BOOL)needsUpdate;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setAction:(SEL)arg1 ;
-(void)setNeedsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(void)updateIfNeeded;
@end

