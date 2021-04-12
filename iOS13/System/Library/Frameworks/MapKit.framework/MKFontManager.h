/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKFontManager.h>
@class UIFont;


@protocol MKFontManager <NSObject>
@property (nonatomic,readonly) UIFont * largeTitleFontStatic; 
@property (nonatomic,readonly) UIFont * largeTitleFont; 
@property (nonatomic,readonly) UIFont * mediumTitleFont; 
@property (nonatomic,readonly) UIFont * brandTitleFont; 
@property (nonatomic,readonly) UIFont * subtitleFont; 
@property (nonatomic,readonly) UIFont * bodyFont; 
@property (nonatomic,readonly) UIFont * boldBodyFont; 
@property (nonatomic,readonly) UIFont * mediumBodyFont; 
@property (nonatomic,readonly) UIFont * sectionHeaderFont; 
@property (nonatomic,readonly) UIFont * sectionHeaderButtonFont; 
@property (nonatomic,readonly) UIFont * attributionFont; 
@property (nonatomic,readonly) UIFont * smallAttributionFont; 
@property (nonatomic,readonly) UIFont * rowButtonFont; 
@property (nonatomic,readonly) UIFont * rowGlyphButtonFont; 
@required
-(UIFont *)largeTitleFont;
-(UIFont *)subtitleFont;
-(UIFont *)bodyFont;
-(UIFont *)sectionHeaderFont;
-(UIFont *)sectionHeaderButtonFont;
-(UIFont *)smallAttributionFont;
-(UIFont *)attributionFont;
-(UIFont *)boldBodyFont;
-(id)iconFontToMatch:(id)arg1;
-(UIFont *)largeTitleFontStatic;
-(UIFont *)mediumTitleFont;
-(UIFont *)brandTitleFont;
-(UIFont *)mediumBodyFont;
-(UIFont *)rowButtonFont;
-(UIFont *)rowGlyphButtonFont;

@end


@class UIFont, NSString;

@interface MKFontManager : NSObject <MKFontManager> {

	BOOL _useSmallFont;

}

@property (assign,nonatomic) BOOL useSmallFont;                               //@synthesize useSmallFont=_useSmallFont - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIFont * largeTitleFontStatic; 
@property (nonatomic,readonly) UIFont * largeTitleFont; 
@property (nonatomic,readonly) UIFont * mediumTitleFont; 
@property (nonatomic,readonly) UIFont * brandTitleFont; 
@property (nonatomic,readonly) UIFont * subtitleFont; 
@property (nonatomic,readonly) UIFont * bodyFont; 
@property (nonatomic,readonly) UIFont * boldBodyFont; 
@property (nonatomic,readonly) UIFont * mediumBodyFont; 
@property (nonatomic,readonly) UIFont * sectionHeaderFont; 
@property (nonatomic,readonly) UIFont * sectionHeaderButtonFont; 
@property (nonatomic,readonly) UIFont * attributionFont; 
@property (nonatomic,readonly) UIFont * smallAttributionFont; 
@property (nonatomic,readonly) UIFont * rowButtonFont; 
@property (nonatomic,readonly) UIFont * rowGlyphButtonFont; 
+(id)sharedManager;
+(void)setUseSmallFont:(BOOL)arg1 ;
-(UIFont *)largeTitleFont;
-(UIFont *)subtitleFont;
-(UIFont *)bodyFont;
-(UIFont *)sectionHeaderFont;
-(UIFont *)sectionHeaderButtonFont;
-(UIFont *)smallAttributionFont;
-(UIFont *)attributionFont;
-(UIFont *)boldBodyFont;
-(void)setUseSmallFont:(BOOL)arg1 ;
-(id)iconFontToMatch:(id)arg1 ;
-(UIFont *)largeTitleFontStatic;
-(UIFont *)mediumTitleFont;
-(UIFont *)brandTitleFont;
-(UIFont *)mediumBodyFont;
-(UIFont *)rowButtonFont;
-(UIFont *)rowGlyphButtonFont;
-(BOOL)useSmallFont;
@end

