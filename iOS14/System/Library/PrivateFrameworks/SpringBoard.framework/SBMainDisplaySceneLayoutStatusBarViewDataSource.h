/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBMainDisplaySceneLayoutStatusBarViewDataSource <NSObject>
@optional
-(id)currentlyValidStatusBarPartIdentifiers;
-(CGRect*)frameForSceneIdentifier:(id)arg1 inView:(id)arg2;
-(id)statusBarDescriberAtPoint:(CGPoint)arg1 inView:(id)arg2 pointInSceneLayoutSpace:(CGPoint*)arg3;
-(CGRect*)statusBarAvoidanceFrame;
-(id)statusBarPartsForSceneWithIdentifier:(id)arg1;

@required
-(BOOL)allowsConfiguringIndividualStatusBarParts;
-(id)statusBarDescribers;
-(long long)statusBarOrientation;
-(id)statusBarDescriberForStatusBarPart:(id)arg1;

@end

