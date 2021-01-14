/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSArray, NSNumber, NSURL;

@interface AMSLookupItem : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _itemDictionary;

}

@property (nonatomic,copy,readonly) NSString * artistName; 
@property (nonatomic,copy,readonly) NSArray * artwork; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSArray * categoryNames; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * itemKind; 
@property (nonatomic,copy,readonly) NSNumber * iTunesStoreIdentifier; 
@property (nonatomic,copy,readonly) NSString * offerName; 
@property (nonatomic,copy,readonly) NSArray * offers; 
@property (getter=isPOIBased,nonatomic,readonly) BOOL POIBased; 
@property (nonatomic,copy,readonly) NSURL * productPageURL; 
@property (nonatomic,readonly) long long numberOfUserRatings; 
@property (nonatomic,readonly) float userRating; 
@property (nonatomic,readonly) long long numberOfUserRatingsForCurrentVersion; 
@property (nonatomic,readonly) float userRatingForCurrentVersion; 
@property (nonatomic,readonly) NSDictionary * itemDictionary;                               //@synthesize itemDictionary=_itemDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)itemKind;
-(BOOL)isPOIBased;
-(NSArray *)categoryNames;
-(long long)numberOfUserRatings;
-(NSURL *)productPageURL;
-(long long)numberOfUserRatingsForCurrentVersion;
-(float)userRatingForCurrentVersion;
-(NSDictionary *)itemDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)artistName;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSArray *)artwork;
-(NSNumber *)iTunesStoreIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(float)userRating;
-(NSString *)offerName;
-(NSArray *)offers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
@end

