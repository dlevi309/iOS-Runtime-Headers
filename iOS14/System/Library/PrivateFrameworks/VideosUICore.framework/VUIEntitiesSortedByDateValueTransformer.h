/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/

#import <Foundation/NSValueTransformer.h>

@class NSDate;

@interface VUIEntitiesSortedByDateValueTransformer : NSValueTransformer {

	unsigned long long _maxEntities;
	NSDate* _earliestDate;
	/*^block*/id _dateForEntityBlock;

}

@property (nonatomic,copy) id dateForEntityBlock;                         //@synthesize dateForEntityBlock=_dateForEntityBlock - In the implementation block
@property (assign,nonatomic) unsigned long long maxEntities;              //@synthesize maxEntities=_maxEntities - In the implementation block
@property (nonatomic,copy) NSDate * earliestDate;                         //@synthesize earliestDate=_earliestDate - In the implementation block
+(Class)transformedValueClass;
+(BOOL)allowsReverseTransformation;
-(id)init;
-(void)setEarliestDate:(NSDate *)arg1 ;
-(id)transformedValue:(id)arg1 ;
-(NSDate *)earliestDate;
-(id)initWithDateForEntityBlock:(/*^block*/id)arg1 ;
-(void)setMaxEntities:(unsigned long long)arg1 ;
-(id)dateForEntityBlock;
-(unsigned long long)maxEntities;
-(void)setDateForEntityBlock:(id)arg1 ;
@end

