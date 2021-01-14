/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary, SSItemArtworkImage, NSString;

@interface SSItemContentRating : NSObject <SSXPCCoding, NSCopying> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * contentRatingDictionary; 
@property (nonatomic,readonly) SSItemArtworkImage * ratingSystemLogo; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (assign,nonatomic) long long rank; 
@property (nonatomic,copy) NSString * ratingDescription; 
@property (nonatomic,copy) NSString * ratingLabel; 
@property (assign,nonatomic) long long ratingSystem; 
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (assign,nonatomic) BOOL shouldHideWhenRestricted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stringForRatingSystem:(long long)arg1 ;
+(long long)ratingSystemFromString:(id)arg1 ;
-(BOOL)isRestricted;
-(void)setRank:(long long)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)init;
-(void)_setValueCopy:(id)arg1 forProperty:(id)arg2 ;
-(void)setShouldHideWhenRestricted:(BOOL)arg1 ;
-(BOOL)shouldHideWhenRestricted;
-(SSItemArtworkImage *)ratingSystemLogo;
-(long long)ratingSystem;
-(void)setRatingLabel:(NSString *)arg1 ;
-(NSString *)ratingDescription;
-(BOOL)_isRatingSystemForApps:(long long)arg1 ;
-(BOOL)_isRatingSystemForMovies:(long long)arg1 ;
-(BOOL)_isRatingSystemForMusic:(long long)arg1 ;
-(BOOL)_isRatingSystemForTV:(long long)arg1 ;
-(void)setRatingDescription:(NSString *)arg1 ;
-(void)setRatingSystem:(long long)arg1 ;
-(NSDictionary *)contentRatingDictionary;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isExplicitContent;
-(long long)rank;
-(id)valueForProperty:(id)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)ratingLabel;
-(void)dealloc;
@end

