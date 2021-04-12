/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)textBlockText;
-(BOOL)isTextBlockExpanded;
-(void)setTextBlockResizedBlock:(id)arg1 ;
-(void)setTextBlockText:(NSString *)arg1 ;
-(void)setTextBlockExpanded:(BOOL)arg1 ;
-(void)infoCardThemeChanged;
-(void)_contentSizeDidChange;
-(id)textBlockResizedBlock;
-(BOOL)constraintsAdded;
-(void)setConstraintsAdded:(BOOL)arg1 ;
-(void)setTextBlock:(MKExpandingLabel *)arg1 ;
-(MKExpandingLabel *)textBlock;
@end

