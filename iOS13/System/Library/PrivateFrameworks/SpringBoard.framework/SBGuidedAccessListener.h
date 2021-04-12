/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBGuidedAccessListener : NSObject {

	BOOL _isGuidedAccessActive;

}

@property (assign,nonatomic) BOOL isGuidedAccessActive;              //@synthesize isGuidedAccessActive=_isGuidedAccessActive - In the implementation block
+(id)sharedGuidedAccessListener;
-(id)init;
-(BOOL)isGuidedAccessActive;
-(void)guidedAccessWasActivated;
-(void)guidedAccessWasDeactivated;
-(void)setIsGuidedAccessActive:(BOOL)arg1 ;
@end

