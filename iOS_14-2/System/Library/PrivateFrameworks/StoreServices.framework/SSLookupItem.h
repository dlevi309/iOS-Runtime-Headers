/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSArray, NSNumber, NSURL;

@interface SSLookupItem : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSString * artistName; 
@property (nonatomic,readonly) NSArray * artwork; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSArray * categoryNames; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * itemKind; 
@property (nonatomic,readonly) NSNumber * ITunesStoreIdentifier; 
@property (nonatomic,readonly) NSArray * offers; 
@property (getter=isPOIBased,nonatomic,readonly) BOOL POIBased; 
@property (nonatomic,readonly) NSURL * productPageURL; 
@property (nonatomic,readonly) long long numberOfUserRatings; 
@property (nonatomic,readonly) float userRating; 
@property (nonatomic,readonly) long long numberOfUserRatingsForCurrentVersion; 
@property (nonatomic,readonly) float userRatingForCurrentVersion; 
@property (nonatomic,readonly) NSDictionary * lookupDictionary;                             //@synthesize dictionary=_dictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)itemKind;
-(BOOL)isPOIBased;
-(NSArray *)categoryNames;
-(long long)numberOfUserRatings;
-(NSURL *)productPageURL;
-(long long)numberOfUserRatingsForCurrentVersion;
-(float)userRatingForCurrentVersion;
-(NSNumber *)ITunesStoreIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)artistName;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSArray *)artwork;
-(NSDictionary *)lookupDictionary;
-(id)initWithCoder:(id)arg1 ;
-(float)userRating;
-(NSArray *)offers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)dealloc;
@end

