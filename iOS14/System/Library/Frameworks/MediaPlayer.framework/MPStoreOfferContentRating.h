/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary, NSString;

@interface MPStoreOfferContentRating : NSObject <NSCoding> {

	NSDictionary* _dictionary;
	long long _ratingLevel;
	NSString* _ratingDescription;
	NSString* _ratingLabel;
	unsigned long long _ratingSystem;

}

@property (assign,nonatomic) long long ratingLevel;                                              //@synthesize ratingLevel=_ratingLevel - In the implementation block
@property (nonatomic,copy) NSString * ratingLabel;                                               //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (assign,nonatomic) unsigned long long ratingSystem;                                    //@synthesize ratingSystem=_ratingSystem - In the implementation block
@property (nonatomic,copy) NSString * ratingDescription;                                         //@synthesize ratingDescription=_ratingDescription - In the implementation block
@property (getter=isRestrictedContent,nonatomic,readonly) BOOL restrictedContent; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (getter=isRestrictedPurchase,nonatomic,readonly) BOOL restrictedPurchase; 
@property (nonatomic,readonly) id mediaPropertyContentRatingValue; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)ratingSystemFromString:(id)arg1 ;
-(unsigned long long)ratingSystem;
-(void)setRatingLevel:(long long)arg1 ;
-(BOOL)isRestrictedContent;
-(void)setRatingLabel:(NSString *)arg1 ;
-(NSString *)ratingDescription;
-(BOOL)isRestrictedPurchase;
-(BOOL)_isRatingSystemForApps:(unsigned long long)arg1 ;
-(long long)ratingLevel;
-(BOOL)_isRatingSystemForMovies:(unsigned long long)arg1 ;
-(BOOL)_isRatingSystemForMusic:(unsigned long long)arg1 ;
-(BOOL)_isRatingSystemForTV:(unsigned long long)arg1 ;
-(void)setRatingDescription:(NSString *)arg1 ;
-(id)mediaPropertyContentRatingValue;
-(void)setRatingSystem:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isExplicitContent;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)ratingLabel;
@end

