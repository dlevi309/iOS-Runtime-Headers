/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransientOverlayDismissalRequest.h>

@interface SBMutableTransientOverlayDismissalRequest : SBTransientOverlayDismissalRequest

@property (assign,getter=isAnimated,nonatomic) BOOL animated; 
@property (nonatomic,copy) id completionHandler; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setAnimated:(BOOL)arg1 ;
@end

