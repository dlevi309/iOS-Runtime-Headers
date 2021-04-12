/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIColor;

@interface SUPageSectionGroup : NSObject <NSCopying> {

	long long _defaultSectionIndex;
	NSArray* _sections;
	long long _style;
	UIColor* _tintColor;
	long long _tintStyle;

}

@property (assign,nonatomic) long long defaultSectionIndex;              //@synthesize defaultSectionIndex=_defaultSectionIndex - In the implementation block
@property (nonatomic,retain) NSArray * sections;                         //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) long long style;                            //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                        //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) long long tintStyle;                        //@synthesize tintStyle=_tintStyle - In the implementation block
-(void)setSections:(NSArray *)arg1 ;
-(long long)tintStyle;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setTintStyle:(long long)arg1 ;
-(NSArray *)sections;
-(BOOL)loadFromDictionary:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDefaultSectionIndex:(long long)arg1 ;
-(long long)defaultSectionIndex;
-(UIColor *)tintColor;
-(long long)style;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithSectionsDictionary:(id)arg1 ;
-(long long)_sectionStyleForString:(id)arg1 ;
@end

