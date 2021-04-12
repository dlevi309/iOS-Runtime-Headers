/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSWPDropCapSpacing : NSObject <NSCopying> {

	BOOL _allowSpanParagraphs;
	unsigned long long _lineCount;
	unsigned long long _elevatedLineCount;
	unsigned long long _followingLineCount;
	double _padding;
	unsigned long long _flags;
	double _maxWidthFactor;

}

@property (assign,nonatomic) unsigned long long lineCount;                       //@synthesize lineCount=_lineCount - In the implementation block
@property (assign,nonatomic) unsigned long long elevatedLineCount;               //@synthesize elevatedLineCount=_elevatedLineCount - In the implementation block
@property (assign,nonatomic) unsigned long long followingLineCount;              //@synthesize followingLineCount=_followingLineCount - In the implementation block
@property (assign,nonatomic) double padding;                                     //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) BOOL allowSpanParagraphs;                           //@synthesize allowSpanParagraphs=_allowSpanParagraphs - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                           //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) double maxWidthFactor;                              //@synthesize maxWidthFactor=_maxWidthFactor - In the implementation block
+(id)dropCapSpacingWithLineCount:(unsigned long long)arg1 elevatedLineCount:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)flags;
-(void)setPadding:(double)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(double)padding;
-(unsigned long long)lineCount;
-(void)setLineCount:(unsigned long long)arg1 ;
-(double)maxWidthFactor;
-(void)setElevatedLineCount:(unsigned long long)arg1 ;
-(void)setFollowingLineCount:(unsigned long long)arg1 ;
-(void)setAllowSpanParagraphs:(BOOL)arg1 ;
-(void)setMaxWidthFactor:(double)arg1 ;
-(BOOL)allowSpanParagraphs;
-(unsigned long long)elevatedLineCount;
-(unsigned long long)followingLineCount;
-(unsigned long long)computedFlagsWithPropertyMap:(id)arg1 ;
@end

