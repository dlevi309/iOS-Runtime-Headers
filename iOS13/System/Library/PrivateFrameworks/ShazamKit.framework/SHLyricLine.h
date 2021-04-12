/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


@class NSString;

@interface SHLyricLine : NSObject {

	NSString* _text;
	double _offset;

}

@property (nonatomic,copy) NSString * text;              //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) double offset;              //@synthesize offset=_offset - In the implementation block
+(id)lyricLineWithText:(id)arg1 offset:(double)arg2 ;
-(id)description;
-(void)setOffset:(double)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(double)offset;
@end

