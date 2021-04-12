/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/_UIHostedWindow.h>

@class PGHostedWindowHostingHandle;

@interface PGHostedWindow : _UIHostedWindow

@property (nonatomic,readonly) PGHostedWindowHostingHandle * hostedWindowHostingHandle; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)_canBecomeKeyWindow;
-(PGHostedWindowHostingHandle *)hostedWindowHostingHandle;
@end

