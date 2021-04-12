/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBMainDisplaySceneLayoutStatusBarViewDataSource <NSObject>
@optional
-(CGRect*)statusBarAvoidanceFrame;
-(id)statusBarDescriberAtPoint:(CGPoint)arg1 inView:(id)arg2 pointInSceneLayoutSpace:(CGPoint*)arg3;
-(CGRect*)frameForSceneIdentifier:(id)arg1 inView:(id)arg2;
-(id)statusBarPartsForSceneWithIdentifier:(id)arg1;
-(id)currentlyValidStatusBarPartIdentifiers;

@required
-(long long)statusBarOrientation;
-(id)statusBarDescribers;
-(id)statusBarDescriberForStatusBarPart:(id)arg1;
-(BOOL)allowsConfiguringIndividualStatusBarParts;

@end

