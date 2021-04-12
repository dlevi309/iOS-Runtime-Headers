/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIFont, NSMutableSet, UILabel, MPAVRoute, UIColor;

@interface MPRouteLabel : UIView {

	NSString* _designatedGroupLeaderName;
	NSString* _previousDesignatedGroupLeaderName;
	CGRect _previousBounds;
	UIFont* _previousFont;
	NSMutableSet* _previousRouteNames;
	BOOL _previousForcesUppercaseText;
	BOOL _previousDisplayAsSiriSuggestion;
	long long _previousTruncationMode;
	NSMutableSet* _routeNames;
	UILabel* _sizingLabel;
	BOOL _forcesUppercaseText;
	BOOL _displayAsSiriSuggestion;
	long long _minimumEndCharacterCount;
	NSString* _text;
	long long _truncationMode;
	MPAVRoute* _route;
	UILabel* _titleLabel;
	UIColor* _textColor;
	UIFont* _font;
	long long _textAlignment;

}

@property (assign,nonatomic) long long minimumEndCharacterCount;                                                 //@synthesize minimumEndCharacterCount=_minimumEndCharacterCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                                                             //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long truncationMode;                                                           //@synthesize truncationMode=_truncationMode - In the implementation block
@property (assign,nonatomic) BOOL forcesUppercaseText;                                                           //@synthesize forcesUppercaseText=_forcesUppercaseText - In the implementation block
@property (assign,nonatomic) BOOL displayAsSiriSuggestion;                                                       //@synthesize displayAsSiriSuggestion=_displayAsSiriSuggestion - In the implementation block
@property (nonatomic,retain) MPAVRoute * route;                                                                  //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                                                //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                                      //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) double _baselineOffsetFromBottom; 
@property (assign,nonatomic) long long textAlignment;                                                            //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,setter=_setTextColorFollowsTintColor:,nonatomic) BOOL _textColorFollowsTintColor; 
-(NSString *)text;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(UILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(void)_setTextColorFollowsTintColor:(BOOL)arg1 ;
-(double)_baselineOffsetFromBottom;
-(UIColor *)textColor;
-(long long)textAlignment;
-(BOOL)_textColorFollowsTintColor;
-(void)setRoute:(MPAVRoute *)arg1 ;
-(void)addRouteName:(id)arg1 ;
-(MPAVRoute *)route;
-(long long)truncationMode;
-(void)setTruncationMode:(long long)arg1 ;
-(void)setForcesUppercaseText:(BOOL)arg1 ;
-(BOOL)forcesUppercaseText;
-(void)_routeDidChangeNotification:(id)arg1 ;
-(void)setMinimumEndCharacterCount:(long long)arg1 ;
-(void)setDisplayAsSiriSuggestion:(BOOL)arg1 ;
-(void)addRouteNamesFromArray:(id)arg1 ;
-(void)removeRouteName:(id)arg1 ;
-(void)removeRouteNamesFromArray:(id)arg1 ;
-(id)_formattedRouteNameForDesignatedGroupLeaderNameText:(id)arg1 routeNamesText:(id)arg2 ;
-(id)_routeNamesSortedAlphanumeric:(id)arg1 ;
-(id)_routeNamesSortedLength:(id)arg1 ;
-(id)_plusSeparatedRouteNames:(id)arg1 ;
-(CGSize)_labelSizeForText:(id)arg1 ;
-(BOOL)_labelFitsText:(id)arg1 withSize:(CGSize)arg2 ;
-(void)_updateRouteLabel;
-(id)_truncateText:(id)arg1 by:(long long)arg2 ;
-(void)_updateTitleIfNeeded;
-(id)_bestStringThatFitsSize:(CGSize)arg1 ;
-(id)_marketingNames;
-(long long)_compareLength:(id)arg1 with:(id)arg2 ;
-(long long)minimumEndCharacterCount;
-(BOOL)displayAsSiriSuggestion;
@end

