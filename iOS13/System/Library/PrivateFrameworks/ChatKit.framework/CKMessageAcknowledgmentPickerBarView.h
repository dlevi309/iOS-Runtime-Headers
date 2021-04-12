/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKPickerBarView.h>

@class NSArray, CALayer, UIView, NSDictionary, NSString;

@interface CKMessageAcknowledgmentPickerBarView : UIView <CKPickerBarView> {

	CALayer* _anchorBubble;
	CALayer* _intermediateBubble;
	UIView* _pillBubble;
	NSDictionary* _groupAcknowledgmentCounts;
	long long _selectedAcknowledgment;
	char _balloonOrientation;
	NSArray* _acknowledgmentViews;
	CGPoint _anchorBubblePosition;

}

@property (assign,nonatomic) CGPoint anchorBubblePosition;              //@synthesize anchorBubblePosition=_anchorBubblePosition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * acknowledgmentViews;               //@synthesize acknowledgmentViews=_acknowledgmentViews - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithGroupCounts:(id)arg1 selectedType:(long long)arg2 orientation:(char)arg3 ;
-(NSArray *)acknowledgmentViews;
-(void)setAnchorBubblePosition:(CGPoint)arg1 ;
-(void)performShowAnimation:(/*^block*/id)arg1 ;
-(void)performSendAnimation:(/*^block*/id)arg1 ;
-(void)performCancelAnimation:(/*^block*/id)arg1 ;
-(void)updateDynamicColorsForBubbleLayers;
-(CGPoint)anchorBubblePosition;
-(CGSize)_ackViewsBoundsWidth;
-(void)performSelectedAnimation:(/*^block*/id)arg1 ;
-(void)setAcknowledgmentViews:(NSArray *)arg1 ;
-(BOOL)_hasGroupCounts;
@end

