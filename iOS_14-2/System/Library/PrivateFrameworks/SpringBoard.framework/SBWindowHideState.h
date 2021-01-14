/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBWindowHideState : NSObject {

	BOOL _hidden;
	double _desiredAlpha;

}

@property (getter=isHidden) BOOL hidden;              //@synthesize hidden=_hidden - In the implementation block
@property (assign) double desiredAlpha;               //@synthesize desiredAlpha=_desiredAlpha - In the implementation block
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(double)desiredAlpha;
-(id)description;
-(void)setDesiredAlpha:(double)arg1 ;
@end

