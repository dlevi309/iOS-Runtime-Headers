/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBAuthenticationFeedback : NSObject {

	unsigned long long result;
	BOOL _vibrate;
	BOOL _showPasscode;
	BOOL _jiggleLock;
	unsigned long long _result;

}

@property (nonatomic,readonly) unsigned long long result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) BOOL showPasscode;                      //@synthesize showPasscode=_showPasscode - In the implementation block
@property (nonatomic,readonly) BOOL hintFailureText; 
@property (nonatomic,readonly) BOOL vibrate;                           //@synthesize vibrate=_vibrate - In the implementation block
@property (nonatomic,readonly) BOOL jiggleLock;                        //@synthesize jiggleLock=_jiggleLock - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)result;
-(BOOL)vibrate;
-(BOOL)showPasscode;
-(BOOL)jiggleLock;
-(id)initForFailureWithFailureSettings:(id)arg1 ;
-(id)initForSuccess;
-(id)initForFailureShowingPasscode:(BOOL)arg1 ;
-(BOOL)hintFailureText;
@end

