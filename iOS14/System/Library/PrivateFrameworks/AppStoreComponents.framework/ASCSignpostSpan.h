/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet, NSDate, NSSet, NSDateInterval;

@interface ASCSignpostSpan : NSObject <NSSecureCoding> {

	unsigned long long _primaryTag;
	NSMutableSet* _mutableSupplementaryTags;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSMutableSet * mutableSupplementaryTags;              //@synthesize mutableSupplementaryTags=_mutableSupplementaryTags - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                                         //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) unsigned long long primaryTag;                        //@synthesize primaryTag=_primaryTag - In the implementation block
@property (nonatomic,copy,readonly) NSSet * supplementaryTags; 
@property (nonatomic,copy,readonly) NSDateInterval * dateRange; 
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(NSDateInterval *)dateRange;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)init;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)primaryTag;
-(void)addSupplementaryTag:(unsigned long long)arg1 ;
-(void)beginEmitting;
-(void)endEmitting;
-(NSSet *)supplementaryTags;
-(NSMutableSet *)mutableSupplementaryTags;
@end

