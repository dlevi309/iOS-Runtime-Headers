/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _DECItem;

@interface _DECPredictionItem : NSObject <NSSecureCoding, NSCopying> {

	_DECItem* _item;
	double _confidence;

}

@property (assign,nonatomic) double confidence;              //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) _DECItem * item;              //@synthesize item=_item - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predictionItemWithItem:(id)arg1 confidence:(double)arg2 ;
-(double)confidence;
-(_DECItem *)item;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setConfidence:(double)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithItem:(id)arg1 confidence:(double)arg2 ;
@end

