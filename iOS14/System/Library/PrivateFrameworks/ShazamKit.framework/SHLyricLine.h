/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SHLyricLine : NSObject <NSSecureCoding> {

	NSString* _text;
	double _offset;

}

@property (nonatomic,copy) NSString * text;              //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) double offset;              //@synthesize offset=_offset - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)lyricLineWithText:(id)arg1 offset:(double)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(double)offset;
-(id)description;
-(NSString *)text;
-(void)setOffset:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLineWithText:(id)arg1 offset:(double)arg2 ;
@end

