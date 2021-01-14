/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)intrinsicContentSize;
-(void)setTintColor:(id)arg1 ;
-(void)setProperties:(VUIUpNextButtonProperties *)arg1 ;
-(id)largeContentTitle;
-(void)updateWithElement:(id)arg1 ;
-(id)initWithLayout:(id)arg1 interfaceStyle:(long long)arg2 ;
-(void)_selectButtonAction:(id)arg1 eventType:(id)arg2 ;
-(void)upNextStateChangedToAdded;
-(void)upNextStateChangedToRemoved;
-(NSLayoutConstraint *)stackViewWidthConstraint;
-(void)setStackViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end

