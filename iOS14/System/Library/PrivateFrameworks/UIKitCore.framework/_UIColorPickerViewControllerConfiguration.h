/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIColorPickerViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL __shouldUseDarkGridInDarkMode;
	BOOL _showsAlpha;
	BOOL __isEmbedded;
	long long __userInterfaceStyleForGrid;
	NSString* _title;
	double __keyboardSpace;

}

@property (nonatomic,copy) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL showsAlpha;                                   //@synthesize showsAlpha=_showsAlpha - In the implementation block
@property (assign,nonatomic) BOOL _isEmbedded;                                  //@synthesize _isEmbedded=__isEmbedded - In the implementation block
@property (assign,nonatomic) double _keyboardSpace;                             //@synthesize _keyboardSpace=__keyboardSpace - In the implementation block
@property (assign,nonatomic) BOOL _shouldUseDarkGridInDarkMode;                 //@synthesize _shouldUseDarkGridInDarkMode=__shouldUseDarkGridInDarkMode - In the implementation block
@property (assign,nonatomic) long long _userInterfaceStyleForGrid;              //@synthesize _userInterfaceStyleForGrid=__userInterfaceStyleForGrid - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(double)_keyboardSpace;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)showsAlpha;
-(BOOL)_isEmbedded;
-(void)setShowsAlpha:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)set_isEmbedded:(BOOL)arg1 ;
-(void)set_shouldUseDarkGridInDarkMode:(BOOL)arg1 ;
-(BOOL)_shouldUseDarkGridInDarkMode;
-(void)set_userInterfaceStyleForGrid:(long long)arg1 ;
-(long long)_userInterfaceStyleForGrid;
-(void)set_keyboardSpace:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

