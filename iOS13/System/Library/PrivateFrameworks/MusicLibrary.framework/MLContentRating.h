/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)ratingRank;
-(NSString *)ratingLabel;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithStringRepresentation:(id)arg1 ;
-(NSString *)ratingDescription;
-(void)setRatingDescription:(NSString *)arg1 ;
-(void)setRatingLabel:(NSString *)arg1 ;
-(NSString *)ratingSystem;
-(void)setRatingSystem:(NSString *)arg1 ;
-(void)setRatingRank:(NSNumber *)arg1 ;
-(void)_setValueCopy:(id)arg1 forKey:(id)arg2 ;
-(id)initWithContentRatingDictionary:(id)arg1 ;
-(id)copyStringRepresentation;
@end

