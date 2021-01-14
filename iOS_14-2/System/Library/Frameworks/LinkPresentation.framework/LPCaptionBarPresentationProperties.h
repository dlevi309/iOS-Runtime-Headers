/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


#import <LinkPresentation/LinkPresentation-Structs.h>
@class LPCaptionRowPresentationProperties, LPImage, NSArray, LPImagePresentationProperties, NSString, NSNumber;

@interface LPCaptionBarPresentationProperties : NSObject {

	LPCaptionRowPresentationProperties* _aboveTop;
	LPCaptionRowPresentationProperties* _top;
	LPCaptionRowPresentationProperties* _bottom;
	LPCaptionRowPresentationProperties* _belowBottom;
	BOOL _shouldHighlightIndependently;
	LPImage* _leadingIcon;
	NSArray* _additionalLeadingIcons;
	LPImagePresentationProperties* _leadingIconProperties;
	LPImage* _trailingIcon;
	NSArray* _additionalTrailingIcons;
	LPImagePresentationProperties* _trailingIconProperties;
	long long _leadingAccessoryType;
	long long _trailingAccessoryType;
	NSString* _buttonCaption;
	NSNumber* _minimumHeight;
	CGSize _leadingIconSize;
	CGSize _trailingIconSize;

}

@property (nonatomic,readonly) BOOL hasAnyContent; 
@property (nonatomic,retain) LPImage * leadingIcon;                                                  //@synthesize leadingIcon=_leadingIcon - In the implementation block
@property (assign,nonatomic) CGSize leadingIconSize;                                                 //@synthesize leadingIconSize=_leadingIconSize - In the implementation block
@property (nonatomic,retain) NSArray * additionalLeadingIcons;                                       //@synthesize additionalLeadingIcons=_additionalLeadingIcons - In the implementation block
@property (nonatomic,retain) LPImagePresentationProperties * leadingIconProperties;                  //@synthesize leadingIconProperties=_leadingIconProperties - In the implementation block
@property (nonatomic,retain) LPImage * trailingIcon;                                                 //@synthesize trailingIcon=_trailingIcon - In the implementation block
@property (assign,nonatomic) CGSize trailingIconSize;                                                //@synthesize trailingIconSize=_trailingIconSize - In the implementation block
@property (nonatomic,retain) NSArray * additionalTrailingIcons;                                      //@synthesize additionalTrailingIcons=_additionalTrailingIcons - In the implementation block
@property (nonatomic,retain) LPImagePresentationProperties * trailingIconProperties;                 //@synthesize trailingIconProperties=_trailingIconProperties - In the implementation block
@property (assign,nonatomic) long long leadingAccessoryType;                                         //@synthesize leadingAccessoryType=_leadingAccessoryType - In the implementation block
@property (assign,nonatomic) long long trailingAccessoryType;                                        //@synthesize trailingAccessoryType=_trailingAccessoryType - In the implementation block
@property (nonatomic,copy) NSString * buttonCaption;                                                 //@synthesize buttonCaption=_buttonCaption - In the implementation block
@property (nonatomic,retain,readonly) LPCaptionRowPresentationProperties * aboveTop; 
@property (nonatomic,retain,readonly) LPCaptionRowPresentationProperties * top; 
@property (nonatomic,retain,readonly) LPCaptionRowPresentationProperties * bottom; 
@property (nonatomic,retain,readonly) LPCaptionRowPresentationProperties * belowBottom; 
@property (assign,nonatomic) BOOL shouldHighlightIndependently;                                      //@synthesize shouldHighlightIndependently=_shouldHighlightIndependently - In the implementation block
@property (nonatomic,retain) NSNumber * minimumHeight;                                               //@synthesize minimumHeight=_minimumHeight - In the implementation block
-(id)leftIconProperties;
-(id)rightIconProperties;
-(id)init;
-(void)setTrailingIcon:(LPImage *)arg1 ;
-(LPImage *)trailingIcon;
-(LPImage *)leadingIcon;
-(BOOL)hasAnyContent;
-(NSNumber *)minimumHeight;
-(void)setLeadingIcon:(LPImage *)arg1 ;
-(void)setMinimumHeight:(NSNumber *)arg1 ;
-(void)applyToAllCaptions:(/*^block*/id)arg1 ;
-(LPCaptionRowPresentationProperties *)belowBottom;
-(LPImagePresentationProperties *)leadingIconProperties;
-(LPImagePresentationProperties *)trailingIconProperties;
-(long long)leadingAccessoryType;
-(long long)trailingAccessoryType;
-(long long)leftAccessoryType;
-(long long)rightAccessoryType;
-(CGSize)leadingIconSize;
-(void)setLeadingIconSize:(CGSize)arg1 ;
-(NSArray *)additionalLeadingIcons;
-(void)setAdditionalLeadingIcons:(NSArray *)arg1 ;
-(NSString *)buttonCaption;
-(void)setLeadingIconProperties:(LPImagePresentationProperties *)arg1 ;
-(CGSize)trailingIconSize;
-(void)setTrailingIconSize:(CGSize)arg1 ;
-(NSArray *)additionalTrailingIcons;
-(void)setAdditionalTrailingIcons:(NSArray *)arg1 ;
-(void)setTrailingIconProperties:(LPImagePresentationProperties *)arg1 ;
-(void)setLeadingAccessoryType:(long long)arg1 ;
-(void)setTrailingAccessoryType:(long long)arg1 ;
-(void)setButtonCaption:(NSString *)arg1 ;
-(BOOL)shouldHighlightIndependently;
-(void)setShouldHighlightIndependently:(BOOL)arg1 ;
-(LPCaptionRowPresentationProperties *)bottom;
-(LPCaptionRowPresentationProperties *)top;
-(id)leftIcon;
-(LPCaptionRowPresentationProperties *)aboveTop;
-(id)rightIcon;
@end

