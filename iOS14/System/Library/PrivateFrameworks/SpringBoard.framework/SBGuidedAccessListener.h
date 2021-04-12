/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBGuidedAccessListener : NSObject {

	BOOL _isGuidedAccessActive;

}

@property (assign,nonatomic) BOOL isGuidedAccessActive;              //@synthesize isGuidedAccessActive=_isGuidedAccessActive - In the implementation block
+(id)sharedGuidedAccessListener;
-(id)init;
-(void)guidedAccessWasActivated;
-(void)setIsGuidedAccessActive:(BOOL)arg1 ;
-(void)guidedAccessWasDeactivated;
-(BOOL)isGuidedAccessActive;
@end

