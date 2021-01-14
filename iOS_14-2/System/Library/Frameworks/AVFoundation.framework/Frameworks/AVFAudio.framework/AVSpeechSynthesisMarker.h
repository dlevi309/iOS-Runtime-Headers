/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AVSpeechSynthesisMarker : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _mark;
	unsigned long long _byteSampleOffset;
	NSRange _textRange;

}

@property (assign,nonatomic) unsigned long long mark;                          //@synthesize mark=_mark - In the implementation block
@property (assign,nonatomic) unsigned long long byteSampleOffset;              //@synthesize byteSampleOffset=_byteSampleOffset - In the implementation block
@property (assign,nonatomic) NSRange textRange;                                //@synthesize textRange=_textRange - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)initWithMarkerType:(unsigned long long)arg1 forTextRange:(NSRange)arg2 atByteSampleOffset:(unsigned long long)arg3 ;
-(unsigned long long)byteSampleOffset;
-(void)setByteSampleOffset:(unsigned long long)arg1 ;
-(void)setTextRange:(NSRange)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMark:(unsigned long long)arg1 ;
-(unsigned long long)mark;
-(NSRange)textRange;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

