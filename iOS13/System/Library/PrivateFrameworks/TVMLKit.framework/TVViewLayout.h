/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class UIColor, NSString;

@interface TVViewLayout : NSObject {

	BOOL _acceptsFocus;
	BOOL _centerGrowth;
	UIColor* _tintColor;
	UIColor* _darkTintColor;
	UIColor* _backgroundColor;
	UIColor* _darkBackgroundColor;
	double _height;
	double _maxHeight;
	double _maxWidth;
	double _minHeight;
	double _minWidth;
	double _width;
	double _focusSizeIncrease;
	NSString* _focusAlign;
	double _lineSpacing;
	long long _alignment;
	long long _contentAlignment;
	UIColor* _highlightColor;
	long long _position;
	NSString* _highlightStyle;
	double _interitemSpacing;
	NSString* _progressStyle;
	NSString* _group;
	UIEdgeInsets _margin;
	UIEdgeInsets _padding;
	UIEdgeInsets _focusMargin;

}

@property (assign,nonatomic) double interitemSpacing;                    //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (nonatomic,copy) NSString * progressStyle;                     //@synthesize progressStyle=_progressStyle - In the implementation block
@property (nonatomic,copy) NSString * group;                             //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margin;                        //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                       //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                        //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * darkTintColor;                    //@synthesize darkTintColor=_darkTintColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * darkBackgroundColor;              //@synthesize darkBackgroundColor=_darkBackgroundColor - In the implementation block
@property (assign,nonatomic) double height;                              //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) UIEdgeInsets focusMargin;                   //@synthesize focusMargin=_focusMargin - In the implementation block
@property (assign,nonatomic) double maxHeight;                           //@synthesize maxHeight=_maxHeight - In the implementation block
@property (assign,nonatomic) double maxWidth;                            //@synthesize maxWidth=_maxWidth - In the implementation block
@property (assign,nonatomic) double minHeight;                           //@synthesize minHeight=_minHeight - In the implementation block
@property (assign,nonatomic) double minWidth;                            //@synthesize minWidth=_minWidth - In the implementation block
@property (assign,nonatomic) double width;                               //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) double focusSizeIncrease;                   //@synthesize focusSizeIncrease=_focusSizeIncrease - In the implementation block
@property (nonatomic,copy) NSString * focusAlign;                        //@synthesize focusAlign=_focusAlign - In the implementation block
@property (assign,nonatomic) double lineSpacing;                         //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) long long alignment;                        //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) long long contentAlignment;                 //@synthesize contentAlignment=_contentAlignment - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                   //@synthesize highlightColor=_highlightColor - In the implementation block
@property (assign,nonatomic) long long position;                         //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) BOOL acceptsFocus;                          //@synthesize acceptsFocus=_acceptsFocus - In the implementation block
@property (assign,nonatomic) BOOL centerGrowth;                          //@synthesize centerGrowth=_centerGrowth - In the implementation block
@property (nonatomic,copy) NSString * highlightStyle;                    //@synthesize highlightStyle=_highlightStyle - In the implementation block
+(Class)layoutClassForElement:(id)arg1 ;
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setGroup:(NSString *)arg1 ;
-(long long)position;
-(long long)alignment;
-(double)lineSpacing;
-(void)setAlignment:(long long)arg1 ;
-(void)setLineSpacing:(double)arg1 ;
-(double)width;
-(double)height;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(double)minWidth;
-(void)setMinWidth:(double)arg1 ;
-(double)maxWidth;
-(void)setMaxWidth:(double)arg1 ;
-(double)minHeight;
-(void)setMinHeight:(double)arg1 ;
-(double)maxHeight;
-(void)setMaxHeight:(double)arg1 ;
-(NSString *)group;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(NSString *)highlightStyle;
-(void)setHighlightStyle:(NSString *)arg1 ;
-(void)setMargin:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)margin;
-(UIEdgeInsets)padding;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(long long)contentAlignment;
-(void)setContentAlignment:(long long)arg1 ;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(double)focusSizeIncrease;
-(void)setFocusSizeIncrease:(double)arg1 ;
-(void)setFocusMargin:(UIEdgeInsets)arg1 ;
-(void)setFocusAlign:(NSString *)arg1 ;
-(void)setProgressStyle:(NSString *)arg1 ;
-(UIEdgeInsets)focusMargin;
-(NSString *)focusAlign;
-(NSString *)progressStyle;
-(/*^block*/id)tv_layoutPropertySetterForStyle:(id)arg1 ;
-(/*^block*/id)tv_layoutPropertyGetterForStyle:(id)arg1 ;
-(void)setDarkTintColor:(UIColor *)arg1 ;
-(void)setDarkBackgroundColor:(UIColor *)arg1 ;
-(void)setAcceptsFocus:(BOOL)arg1 ;
-(void)setCenterGrowth:(BOOL)arg1 ;
-(UIColor *)darkTintColor;
-(UIColor *)darkBackgroundColor;
-(BOOL)acceptsFocus;
-(BOOL)centerGrowth;
@end

