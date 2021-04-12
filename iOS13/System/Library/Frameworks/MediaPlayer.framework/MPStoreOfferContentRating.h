/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)ratingLabel;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)isExplicitContent;
-(BOOL)isRestrictedContent;
-(BOOL)isRestrictedPurchase;
-(BOOL)_isRatingSystemForApps:(unsigned long long)arg1 ;
-(BOOL)_isRatingSystemForMovies:(unsigned long long)arg1 ;
-(BOOL)_isRatingSystemForMusic:(unsigned long long)arg1 ;
-(BOOL)_isRatingSystemForTV:(unsigned long long)arg1 ;
-(id)mediaPropertyContentRatingValue;
-(long long)ratingLevel;
-(void)setRatingLevel:(long long)arg1 ;
-(NSString *)ratingDescription;
-(void)setRatingDescription:(NSString *)arg1 ;
-(void)setRatingLabel:(NSString *)arg1 ;
-(unsigned long long)ratingSystem;
-(void)setRatingSystem:(unsigned long long)arg1 ;
@end

