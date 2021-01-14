/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/

#import <WallpaperKit/WallpaperKit-Structs.h>
#import <libobjc.A.dylib/WKDescribable.h>
#import <libobjc.A.dylib/NAIdentifiable.h>
#import <libobjc.A.dylib/WKWallpaper.h>

@class NADescriptionBuilder, NSString;

@interface WKAbstractWallpaper : NSObject <WKDescribable, NAIdentifiable, WKWallpaper> {

	long long _identifier;
	NSString* _name;
	unsigned long long _type;
	unsigned long long _backingType;

}

@property (assign,nonatomic) unsigned long long type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long backingType;                              //@synthesize backingType=_backingType - In the implementation block
@property (nonatomic,readonly) NADescriptionBuilder * wk_descriptionBuilder; 
@property (nonatomic,copy,readonly) NSString * description; 
@property (nonatomic,readonly) id descriptionBuilderBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
+(id)new;
+(id)na_identity;
-(id)init;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(unsigned long long)type;
-(unsigned long long)hash;
-(unsigned long long)backingType;
-(long long)identifier;
-(id)initWithIdentifier:(long long)arg1 name:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBackingType:(unsigned long long)arg1 ;
-(id)descriptionBuilderBlock;
-(NADescriptionBuilder *)wk_descriptionBuilder;
@end

