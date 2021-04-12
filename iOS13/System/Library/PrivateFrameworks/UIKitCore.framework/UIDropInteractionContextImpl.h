/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIDropInteractionContext.h>

@class NSArray, NSString;

@interface UIDropInteractionContextImpl : NSObject <UIDropInteractionContext> {

	long long _state;
	NSArray* _items;

}

@property (assign,nonatomic) long long state;                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSArray * items;                       //@synthesize items=_items - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
@end

