/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(long long)ratingSystemFromString:(id)arg1 ;
+(id)stringForRatingSystem:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isRestricted;
-(NSString *)ratingLabel;
-(void)setRank:(long long)arg1 ;
-(long long)rank;
-(id)valueForProperty:(id)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)isExplicitContent;
-(BOOL)_isRatingSystemForApps:(long long)arg1 ;
-(BOOL)_isRatingSystemForMovies:(long long)arg1 ;
-(BOOL)_isRatingSystemForMusic:(long long)arg1 ;
-(BOOL)_isRatingSystemForTV:(long long)arg1 ;
-(NSString *)ratingDescription;
-(void)setRatingDescription:(NSString *)arg1 ;
-(void)setRatingLabel:(NSString *)arg1 ;
-(long long)ratingSystem;
-(void)setRatingSystem:(long long)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSDictionary *)contentRatingDictionary;
-(void)_setValueCopy:(id)arg1 forProperty:(id)arg2 ;
-(void)setShouldHideWhenRestricted:(BOOL)arg1 ;
-(BOOL)shouldHideWhenRestricted;
-(SSItemArtworkImage *)ratingSystemLogo;
@end

