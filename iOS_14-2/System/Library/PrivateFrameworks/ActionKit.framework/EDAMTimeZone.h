/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMTimeZone : FATObject {

	NSString* _id;
	NSString* _displayName;
	NSNumber* _rawUTCOffsetMillis;
	NSNumber* _dstSavingsAdjustmentMillis;
	NSNumber* _nextEnterDaylightSavings;
	NSNumber* _nextLeaveDaylightSavings;

}

@property (nonatomic,retain) NSString * id;                                      //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) NSString * displayName;                             //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSNumber * rawUTCOffsetMillis;                      //@synthesize rawUTCOffsetMillis=_rawUTCOffsetMillis - In the implementation block
@property (nonatomic,retain) NSNumber * dstSavingsAdjustmentMillis;              //@synthesize dstSavingsAdjustmentMillis=_dstSavingsAdjustmentMillis - In the implementation block
@property (nonatomic,retain) NSNumber * nextEnterDaylightSavings;                //@synthesize nextEnterDaylightSavings=_nextEnterDaylightSavings - In the implementation block
@property (nonatomic,retain) NSNumber * nextLeaveDaylightSavings;                //@synthesize nextLeaveDaylightSavings=_nextLeaveDaylightSavings - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)id;
-(void)setId:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)displayName;
-(NSNumber *)rawUTCOffsetMillis;
-(void)setRawUTCOffsetMillis:(NSNumber *)arg1 ;
-(NSNumber *)dstSavingsAdjustmentMillis;
-(void)setDstSavingsAdjustmentMillis:(NSNumber *)arg1 ;
-(NSNumber *)nextEnterDaylightSavings;
-(void)setNextEnterDaylightSavings:(NSNumber *)arg1 ;
-(NSNumber *)nextLeaveDaylightSavings;
-(void)setNextLeaveDaylightSavings:(NSNumber *)arg1 ;
@end

