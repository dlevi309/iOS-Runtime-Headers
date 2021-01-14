/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(void)setRoute:(MPAVRoute *)arg1 ;
-(long long)_compareLength:(id)arg1 with:(id)arg2 ;
-(void)removeRouteNamesFromArray:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(MPAVRoute *)route;
-(BOOL)displayAsSiriSuggestion;
-(id)_formattedRouteNameForDesignatedGroupLeaderNameText:(id)arg1 routeNamesText:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addRouteName:(id)arg1 ;
-(void)setForcesUppercaseText:(BOOL)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setMinimumEndCharacterCount:(long long)arg1 ;
-(CGSize)_labelSizeForText:(id)arg1 ;
-(void)setDisplayAsSiriSuggestion:(BOOL)arg1 ;
-(id)_routeNamesSortedLength:(id)arg1 ;
-(id)_bestStringThatFitsSize:(CGSize)arg1 ;
-(void)_routeDidChangeNotification:(id)arg1 ;
-(void)_updateRouteLabel;
-(double)_baselineOffsetFromBottom;
-(void)removeRouteName:(id)arg1 ;
-(long long)textAlignment;
-(BOOL)_textColorFollowsTintColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(BOOL)_labelFitsText:(id)arg1 withSize:(CGSize)arg2 ;
-(id)_truncateText:(id)arg1 by:(long long)arg2 ;
-(id)_routeNamesSortedAlphanumeric:(id)arg1 ;
-(BOOL)forcesUppercaseText;
-(id)_marketingNames;
-(void)setTextAlignment:(long long)arg1 ;
-(void)_updateTitleIfNeeded;
-(id)_plusSeparatedRouteNames:(id)arg1 ;
-(void)setTruncationMode:(long long)arg1 ;
-(long long)minimumEndCharacterCount;
-(void)addRouteNamesFromArray:(id)arg1 ;
-(void)_setTextColorFollowsTintColor:(BOOL)arg1 ;
-(long long)truncationMode;
-(UIFont *)font;
@end

