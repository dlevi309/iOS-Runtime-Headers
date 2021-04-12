/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UITextDragRequest.h>
@class UITextRange, NSArray;


@protocol UITextDragRequest <NSObject>
@property (nonatomic,readonly) UITextRange * dragRange; 
@property (nonatomic,readonly) NSArray * suggestedItems; 
@property (nonatomic,readonly) NSArray * existingItems; 
@property (getter=isSelected,nonatomic,readonly) BOOL selected; 
@property (nonatomic,readonly) id<UIDragSession> dragSession; 
@required
-(BOOL)isSelected;
-(UITextRange *)dragRange;
-(NSArray *)suggestedItems;
-(NSArray *)existingItems;
-(id<UIDragSession>)dragSession;

@end


@protocol UIDragSession;
@class UITextRange, NSArray, NSString;

@interface UITextDragRequest : NSObject <UITextDragRequest> {

	BOOL _selected;
	UITextRange* _dragRange;
	NSArray* _existingItems;
	id<UIDragSession> _dragSession;
	NSArray* _suggestedItems;

}

@property (nonatomic,retain) NSArray * suggestedItems;                     //@synthesize suggestedItems=_suggestedItems - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) UITextRange * dragRange;                    //@synthesize dragRange=_dragRange - In the implementation block
@property (nonatomic,readonly) NSArray * existingItems;                    //@synthesize existingItems=_existingItems - In the implementation block
@property (nonatomic,readonly) id<UIDragSession> dragSession;              //@synthesize dragSession=_dragSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(UITextRange *)dragRange;
-(NSArray *)suggestedItems;
-(void)setSuggestedItems:(NSArray *)arg1 ;
-(id)initWithRange:(id)arg1 inSession:(id)arg2 ;
-(NSArray *)existingItems;
-(id<UIDragSession>)dragSession;
@end

