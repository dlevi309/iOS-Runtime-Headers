/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@interface IMManualUpdater : NSObject {

	id _target;
	SEL _action;
	unsigned _needsUpdate : 1;

}

@property (assign,nonatomic,__weak) id target;              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate; 
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

