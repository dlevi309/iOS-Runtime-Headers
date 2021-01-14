/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSNumber;

@interface MLContentRating : NSObject <NSCopying> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,copy) NSString * ratingDescription; 
@property (nonatomic,copy) NSString * ratingLabel; 
@property (nonatomic,retain) NSNumber * ratingRank; 
@property (nonatomic,copy) NSString * ratingSystem; 
-(id)initWithStringRepresentation:(id)arg1 ;
-(void)setRatingRank:(NSNumber *)arg1 ;
-(id)init;
-(NSNumber *)ratingRank;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(NSString *)ratingSystem;
-(void)setRatingLabel:(NSString *)arg1 ;
-(NSString *)ratingDescription;
-(void)setRatingDescription:(NSString *)arg1 ;
-(void)setRatingSystem:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)ratingLabel;
-(void)_setValueCopy:(id)arg1 forKey:(id)arg2 ;
-(id)initWithContentRatingDictionary:(id)arg1 ;
-(id)copyStringRepresentation;
@end

