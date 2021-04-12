/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSPredicate, UIColor;

@interface UIFontPickerViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _includeFaces;
	BOOL _displayUsingSystemFont;
	BOOL __hideSearchBar;
	unsigned _filteredTraits;
	NSPredicate* _filteredLanguagesPredicate;
	UIColor* __tintColor;

}

@property (assign,setter=_setHideSearchBar:,nonatomic) BOOL _hideSearchBar;              //@synthesize _hideSearchBar=__hideSearchBar - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor;                 //@synthesize _tintColor=__tintColor - In the implementation block
@property (assign,nonatomic) BOOL includeFaces;                                          //@synthesize includeFaces=_includeFaces - In the implementation block
@property (assign,nonatomic) BOOL displayUsingSystemFont;                                //@synthesize displayUsingSystemFont=_displayUsingSystemFont - In the implementation block
@property (assign,nonatomic) unsigned filteredTraits;                                    //@synthesize filteredTraits=_filteredTraits - In the implementation block
@property (nonatomic,copy) NSPredicate * filteredLanguagesPredicate;                     //@synthesize filteredLanguagesPredicate=_filteredLanguagesPredicate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)filterPredicateForFilteredLanguages:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)_tintColor;
-(void)_setTintColor:(id)arg1 ;
-(BOOL)includeFaces;
-(void)setIncludeFaces:(BOOL)arg1 ;
-(BOOL)displayUsingSystemFont;
-(void)setDisplayUsingSystemFont:(BOOL)arg1 ;
-(unsigned)filteredTraits;
-(void)setFilteredTraits:(unsigned)arg1 ;
-(NSPredicate *)filteredLanguagesPredicate;
-(void)setFilteredLanguagesPredicate:(NSPredicate *)arg1 ;
-(BOOL)_hideSearchBar;
-(void)_setHideSearchBar:(BOOL)arg1 ;
@end

