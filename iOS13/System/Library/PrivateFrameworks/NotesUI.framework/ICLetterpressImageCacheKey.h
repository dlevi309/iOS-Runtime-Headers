/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSString, ICAppearanceInfo;

@interface ICLetterpressImageCacheKey : NSObject <NSCopying> {

	double _scale;
	UIColor* _tintColor;
	NSString* _name;
	unsigned long long _version;
	ICAppearanceInfo* _appearanceInfo;

}

@property (nonatomic,readonly) double scale;                                   //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                            //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long version;                     //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) ICAppearanceInfo * appearanceInfo;              //@synthesize appearanceInfo=_appearanceInfo - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)version;
-(double)scale;
-(UIColor *)tintColor;
-(ICAppearanceInfo *)appearanceInfo;
-(id)initWithName:(id)arg1 tintColor:(id)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 version:(unsigned long long)arg5 ;
@end

