/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <ProactiveSupport/_PASZonedObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSCopyingNSSecureCoding;
@class NSObject;

@interface PPScoredItem : _PASZonedObject <NSCopying, NSSecureCoding> {

	unsigned short _resultPosition;
	unsigned short _resultCount;
	NSObject*<NSCopying>*<NSSecureCoding> _item;
	double _score;

}

@property (nonatomic,readonly) unsigned short resultPosition;                           //@synthesize resultPosition=_resultPosition - In the implementation block
@property (nonatomic,readonly) unsigned short resultCount;                              //@synthesize resultCount=_resultCount - In the implementation block
@property (nonatomic,readonly) NSObject*<NSCopying>*<NSSecureCoding> item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) double score;                                            //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned short)resultCount;
-(NSObject*<NSCopying>*<NSSecureCoding>)item;
-(double)score;
-(id)initWithItem:(id)arg1 score:(double)arg2 resultPosition:(unsigned short)arg3 resultCount:(unsigned short)arg4 ;
-(id)initWithItem:(id)arg1 score:(double)arg2 ;
-(BOOL)isEqualToScoredItem:(id)arg1 ;
-(unsigned short)resultPosition;
@end

