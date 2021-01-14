/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setItems:(NSArray *)arg1 ;
-(NSArray *)items;
-(void)setState:(long long)arg1 ;
-(long long)state;
@end

