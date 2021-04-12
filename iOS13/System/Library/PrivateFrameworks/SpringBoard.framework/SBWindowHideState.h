/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBWindowHideState : NSObject {

	BOOL _hidden;
	double _desiredAlpha;

}

@property (getter=isHidden) BOOL hidden;              //@synthesize hidden=_hidden - In the implementation block
@property (assign) double desiredAlpha;               //@synthesize desiredAlpha=_desiredAlpha - In the implementation block
-(id)description;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(double)desiredAlpha;
-(void)setDesiredAlpha:(double)arg1 ;
@end

