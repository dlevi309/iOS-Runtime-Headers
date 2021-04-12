/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TTFont : NSObject <NSSecureCoding> {

	unsigned _fontHints;
	NSString* _fontName;
	double _pointSize;
	id _nativeFont;

}

@property (nonatomic,retain) id nativeFont;                      //@synthesize nativeFont=_nativeFont - In the implementation block
@property (nonatomic,readonly) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) double pointSize;                 //@synthesize pointSize=_pointSize - In the implementation block
@property (nonatomic,readonly) unsigned fontHints;               //@synthesize fontHints=_fontHints - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)fontName;
-(id)serialize;
-(double)pointSize;
-(void)saveToArchive:(Font*)arg1 ;
-(id)initWithArchive:(const Font*)arg1 ;
-(unsigned)fontHints;
-(id)initWithName:(id)arg1 size:(double)arg2 hints:(unsigned)arg3 ;
-(id)nativeFont;
-(void)setNativeFont:(id)arg1 ;
@end

