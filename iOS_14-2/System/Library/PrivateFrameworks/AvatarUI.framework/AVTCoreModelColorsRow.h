/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTCoreModelRow.h>

@class NSString, AVTCoreModelRowOptions, AVTCoreModelPairing, NSArray;

@interface AVTCoreModelColorsRow : NSObject <AVTCoreModelRow> {

	BOOL _alwaysShowExtended;
	NSString* _identifier;
	NSString* _title;
	AVTCoreModelRowOptions* _options;
	AVTCoreModelPairing* _pairing;
	NSArray* _primaryColors;
	NSArray* _extendedColors;
	long long _colorCategory;

}

@property (nonatomic,readonly) NSArray * primaryColors;                         //@synthesize primaryColors=_primaryColors - In the implementation block
@property (nonatomic,readonly) NSArray * extendedColors;                        //@synthesize extendedColors=_extendedColors - In the implementation block
@property (nonatomic,readonly) BOOL alwaysShowExtended;                         //@synthesize alwaysShowExtended=_alwaysShowExtended - In the implementation block
@property (nonatomic,readonly) long long colorCategory;                         //@synthesize colorCategory=_colorCategory - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) AVTCoreModelRowOptions * options;                //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) AVTCoreModelPairing * pairing;              //@synthesize pairing=_pairing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AVTCoreModelPairing *)pairing;
-(id)initWithTitle:(id)arg1 primaryColors:(id)arg2 extendedColors:(id)arg3 alwaysShowExtended:(BOOL)arg4 colorCategory:(long long)arg5 pairing:(id)arg6 options:(id)arg7 ;
-(AVTCoreModelRowOptions *)options;
-(NSString *)description;
-(long long)colorCategory;
-(NSArray *)primaryColors;
-(NSArray *)extendedColors;
-(id)initWithTitle:(id)arg1 primaryColors:(id)arg2 extendedColors:(id)arg3 identifier:(id)arg4 alwaysShowExtended:(BOOL)arg5 colorCategory:(long long)arg6 pairing:(id)arg7 options:(id)arg8 ;
-(BOOL)alwaysShowExtended;
-(NSString *)identifier;
-(BOOL)isEmpty;
-(NSString *)title;
@end

