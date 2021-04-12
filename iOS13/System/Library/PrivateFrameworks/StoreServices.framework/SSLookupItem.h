/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)displayName;
-(NSArray *)artwork;
-(NSArray *)offers;
-(NSString *)artistName;
-(float)userRating;
-(NSString *)itemKind;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSDictionary *)lookupDictionary;
-(NSArray *)categoryNames;
-(BOOL)isPOIBased;
-(long long)numberOfUserRatings;
-(long long)numberOfUserRatingsForCurrentVersion;
-(NSURL *)productPageURL;
-(float)userRatingForCurrentVersion;
-(NSNumber *)ITunesStoreIdentifier;
@end

