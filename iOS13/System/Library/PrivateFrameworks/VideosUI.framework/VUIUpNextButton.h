/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIButton.h>
#import <libobjc.A.dylib/VUIUpNextButtonProtocol.h>

@class VUIUpNextButtonProperties, NSLayoutConstraint, NSString;

@interface VUIUpNextButton : VUIButton <VUIUpNextButtonProtocol> {

	VUIUpNextButtonProperties* _properties;
	NSLayoutConstraint* _stackViewWidthConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * stackViewWidthConstraint;              //@synthesize stackViewWidthConstraint=_stackViewWidthConstraint - In the implementation block
@property (nonatomic,retain) VUIUpNextButtonProperties * properties;                     //@synthesize properties=_properties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VUIUpNextButtonProperties *)properties;
-(void)setProperties:(VUIUpNextButtonProperties *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)largeContentTitle;
-(void)setTintColor:(id)arg1 ;
-(NSLayoutConstraint *)stackViewWidthConstraint;
-(void)setStackViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateWithElement:(id)arg1 ;
-(id)initWithLayout:(id)arg1 interfaceStyle:(long long)arg2 ;
-(void)_selectButtonAction:(id)arg1 eventType:(id)arg2 ;
-(void)_updateWidthConstraintsFromOldSize:(CGSize)arg1 toNewSize:(CGSize)arg2 ;
-(void)upNextStateChangedToAdded;
-(void)upNextStateChangedToRemoved;
@end

