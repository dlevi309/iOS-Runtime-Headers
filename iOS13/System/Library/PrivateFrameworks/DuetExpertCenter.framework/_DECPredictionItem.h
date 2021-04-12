/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_DECItem *)item;
-(double)confidence;
-(void)setConfidence:(double)arg1 ;
-(id)initWithItem:(id)arg1 confidence:(double)arg2 ;
@end

