/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/_UIHostedWindow.h>

@class PGHostedWindowHostingHandle;

@interface PGHostedWindow : _UIHostedWindow

@property (nonatomic,readonly) PGHostedWindowHostingHandle * hostedWindowHostingHandle; 
-(PGHostedWindowHostingHandle *)hostedWindowHostingHandle;
-(BOOL)_canBecomeKeyWindow;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)dealloc;
@end

