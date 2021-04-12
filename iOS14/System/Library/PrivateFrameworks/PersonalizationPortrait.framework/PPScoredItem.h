/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned short)resultCount;
-(double)score;
-(NSObject*<NSCopying>*<NSSecureCoding>)item;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithItem:(id)arg1 score:(double)arg2 resultPosition:(unsigned short)arg3 resultCount:(unsigned short)arg4 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithItem:(id)arg1 score:(double)arg2 ;
-(BOOL)isEqualToScoredItem:(id)arg1 ;
-(unsigned short)resultPosition;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

