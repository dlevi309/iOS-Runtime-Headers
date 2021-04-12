/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(BOOL)vibrate;
-(unsigned long long)hash;
-(unsigned long long)result;
-(BOOL)showPasscode;
-(BOOL)isEqual:(id)arg1 ;
-(id)initForFailureWithFailureSettings:(id)arg1 ;
-(id)initForSuccess;
-(id)initForFailureShowingPasscode:(BOOL)arg1 ;
-(BOOL)jiggleLock;
-(BOOL)hintFailureText;
@end

