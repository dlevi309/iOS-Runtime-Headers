/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/

#import <WallpaperKit/WallpaperKit-Structs.h>
#import <libobjc.A.dylib/WKWallpaper.h>

@class NSString;

@interface WKAbstractWallpaper : NSObject <WKWallpaper> {

	unsigned long long _identifier;
	NSString* _name;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
+(id)new;
-(id)init;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)identifier;
-(id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2 ;
@end

