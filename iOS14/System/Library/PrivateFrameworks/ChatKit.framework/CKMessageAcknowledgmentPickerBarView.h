/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) NSArray * acknowledgmentViews;               //@synthesize acknowledgmentViews=_acknowledgmentViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithGroupCounts:(id)arg1 selectedType:(long long)arg2 orientation:(char)arg3 ;
-(NSArray *)acknowledgmentViews;
-(void)setAnchorBubblePosition:(CGPoint)arg1 ;
-(void)performShowAnimation:(/*^block*/id)arg1 ;
-(void)performSendAnimation:(/*^block*/id)arg1 ;
-(void)performCancelAnimation:(/*^block*/id)arg1 ;
-(void)updateDynamicColorsForBubbleLayers;
-(BOOL)_hasGroupCounts;
-(CGPoint)anchorBubblePosition;
-(CGSize)_ackViewsBoundsWidth;
-(void)performSelectedAnimation:(/*^block*/id)arg1 ;
-(void)setAcknowledgmentViews:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

