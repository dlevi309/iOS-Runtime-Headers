/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKShutterButton.h>
#import <libobjc.A.dylib/CKActionMenuItemView.h>

@class NSString;

@interface CAMShutterButton : CMKShutterButton <CKActionMenuItemView>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long mode; 
+(id)actionMenuShutterButton;
+(id)shutterButtonWithSpec:(CAMShutterButtonSpec)arg1 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)mode;
-(void)setMode:(long long)arg1 animated:(BOOL)arg2 ;
@end

