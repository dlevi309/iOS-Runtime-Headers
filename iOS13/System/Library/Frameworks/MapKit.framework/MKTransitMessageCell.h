/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class _MKUILabel, NSLayoutConstraint, NSString;

@interface MKTransitMessageCell : MKCustomSeparatorTableViewCell {

	_MKUILabel* _messageLabel;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;

}

@property (nonatomic,copy) NSString * messageText; 
-(void)dealloc;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
@end

