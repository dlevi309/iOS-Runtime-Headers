/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

