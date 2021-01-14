/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MPMediaQuerySection : NSObject <NSSecureCoding, NSCopying> {

	NSString* _title;
	unsigned long long _sectionIndexTitleIndex;
	NSRange _range;

}

@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) NSRange range;                                          //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned long long sectionIndexTitleIndex;              //@synthesize sectionIndexTitleIndex=_sectionIndexTitleIndex - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRange:(NSRange)arg1 ;
-(id)init;
-(NSRange)range;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)sectionIndexTitleIndex;
-(void)setSectionIndexTitleIndex:(unsigned long long)arg1 ;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end

