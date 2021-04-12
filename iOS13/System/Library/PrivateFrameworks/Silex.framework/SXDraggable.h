/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

@class NSString, UIView;


@protocol SXDraggable
@property (nonatomic,readonly) id<NSItemProviderWriting> dragObject; 
@property (nonatomic,readonly) NSString * dragIdentifier; 
@property (nonatomic,readonly) UIView * dragPreviewView; 
@required
-(id<NSItemProviderWriting>)dragObject;
-(void)didStartDragging;
-(void)didEndDragging;
-(id)stringForAXDragAction;
-(NSString *)dragIdentifier;
-(UIView *)dragPreviewView;

@end

