/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UITextDragFinishState.h>

@protocol UITextDragFinishState <NSObject>
@property (nonatomic,readonly) BOOL dragTearoffOccured; 
@property (nonatomic,readonly) CGPoint location; 
@required
-(CGPoint)location;
-(BOOL)dragTearoffOccured;

@end


@class NSString;

@interface UITextDragFinishState : NSObject <UITextDragFinishState> {

	BOOL _dragTearoffOccured;
	CGPoint _location;

}

@property (assign,nonatomic) BOOL dragTearoffOccured;               //@synthesize dragTearoffOccured=_dragTearoffOccured - In the implementation block
@property (assign,nonatomic) CGPoint location;                      //@synthesize location=_location - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)location;
-(void)setLocation:(CGPoint)arg1 ;
-(void)setDragTearoffOccured:(BOOL)arg1 ;
-(BOOL)dragTearoffOccured;
@end

