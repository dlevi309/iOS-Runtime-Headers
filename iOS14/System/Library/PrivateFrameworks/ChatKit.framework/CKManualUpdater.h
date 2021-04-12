/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTarget:(id)arg1 ;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(void)updateIfNeeded;
-(id)description;
-(id)target;
@end

