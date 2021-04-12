/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@class MKExpandingLabel, NSString;

@interface MKPlaceTextBlockCell : MKPlaceSectionRowView {

	BOOL _constraintsAdded;
	MKExpandingLabel* _textBlock;
	NSString* _textBlockText;

}

@property (nonatomic,retain) MKExpandingLabel * textBlock;                                   //@synthesize textBlock=_textBlock - In the implementation block
@property (assign,nonatomic) BOOL constraintsAdded;                                          //@synthesize constraintsAdded=_constraintsAdded - In the implementation block
@property (nonatomic,copy) NSString * textBlockText;                                         //@synthesize textBlockText=_textBlockText - In the implementation block
@property (assign,getter=isTextBlockExpanded,nonatomic) BOOL textBlockExpanded; 
@property (nonatomic,copy) id textBlockResizedBlock; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)_contentSizeDidChange;
-(NSString *)textBlockText;
-(MKExpandingLabel *)textBlock;
-(void)setTextBlock:(MKExpandingLabel *)arg1 ;
-(void)infoCardThemeChanged;
-(BOOL)isTextBlockExpanded;
-(void)setTextBlockResizedBlock:(id)arg1 ;
-(void)setTextBlockText:(NSString *)arg1 ;
-(void)setTextBlockExpanded:(BOOL)arg1 ;
-(id)textBlockResizedBlock;
-(BOOL)constraintsAdded;
-(void)setConstraintsAdded:(BOOL)arg1 ;
@end

