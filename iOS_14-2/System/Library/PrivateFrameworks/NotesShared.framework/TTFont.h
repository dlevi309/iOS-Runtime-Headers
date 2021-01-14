/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)fontName;
-(id)serialize;
-(void)saveToArchive:(Font*)arg1 ;
-(id)initWithArchive:(const Font*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)fontHints;
-(id)initWithData:(id)arg1 ;
-(double)pointSize;
-(id)initWithName:(id)arg1 size:(double)arg2 hints:(unsigned)arg3 ;
-(id)nativeFont;
-(void)setNativeFont:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

