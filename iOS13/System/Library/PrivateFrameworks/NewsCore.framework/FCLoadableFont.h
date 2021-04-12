/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FCLoadableFont : NSObject <NSCopying> {

	NSString* _fontName;
	NSURL* _fontURL;

}

@property (nonatomic,copy) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,retain) NSURL * fontURL;                //@synthesize fontURL=_fontURL - In the implementation block
+(id)loadableFontWithName:(id)arg1 url:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)fontName;
-(void)setFontName:(NSString *)arg1 ;
-(void)setFontURL:(NSURL *)arg1 ;
-(NSURL *)fontURL;
@end

