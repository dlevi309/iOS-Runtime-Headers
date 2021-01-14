/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <BookLibrary/BookLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary, NSString;

@interface BLItemContentRating : NSObject <NSCopying> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * contentRatingDictionary; 
@property (assign,nonatomic) long long rank; 
@property (nonatomic,copy) NSString * ratingDescription; 
@property (nonatomic,copy) NSString * ratingLabel; 
@property (assign,nonatomic) long long ratingSystem; 
+(id)stringForRatingSystem:(long long)arg1 ;
+(long long)ratingSystemFromString:(id)arg1 ;
-(void)setRank:(long long)arg1 ;
-(id)init;
-(void)_setValueCopy:(id)arg1 forProperty:(id)arg2 ;
-(long long)ratingSystem;
-(void)setRatingLabel:(NSString *)arg1 ;
-(NSString *)ratingDescription;
-(void)setRatingDescription:(NSString *)arg1 ;
-(void)setRatingSystem:(long long)arg1 ;
-(NSDictionary *)contentRatingDictionary;
-(id)initWithDictionary:(id)arg1 ;
-(long long)rank;
-(id)valueForProperty:(id)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)ratingLabel;
@end

