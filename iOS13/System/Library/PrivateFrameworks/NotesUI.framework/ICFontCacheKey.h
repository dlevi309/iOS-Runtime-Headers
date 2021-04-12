/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIFontDescriptor;

@interface ICFontCacheKey : NSObject <NSCopying> {

	int _traits;
	NSString* _fontName;
	double _pointSize;
	UIFontDescriptor* _fontDescriptor;

}

@property (nonatomic,readonly) NSString * fontName;                            //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) int traits;                                     //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) double pointSize;                               //@synthesize pointSize=_pointSize - In the implementation block
@property (nonatomic,readonly) UIFontDescriptor * fontDescriptor;              //@synthesize fontDescriptor=_fontDescriptor - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)fontName;
-(double)pointSize;
-(UIFontDescriptor *)fontDescriptor;
-(int)traits;
-(id)initWithFont:(id)arg1 ;
@end

