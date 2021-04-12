/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFiTunesObject.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSDate, NSNumber, NSArray, NSDictionary;

@interface WFiTunesSoftwareObject : WFiTunesObject <MTLJSONSerializing> {

	BOOL _isUniversal;
	BOOL _supportsGameCenter;
	NSString* _artistID;
	NSString* _artistName;
	NSDate* _releaseDate;
	NSNumber* _price;
	NSString* _currencyCode;
	NSString* _formattedPrice;
	NSArray* _screenshotURLs;
	NSArray* _iPadScreenshotURLs;
	NSArray* _supportedLanguages;
	NSArray* _supportedDevices;
	NSString* _bundleIdentifier;
	NSDate* _lastUpdated;
	NSString* _category;
	NSString* _version;
	NSString* _descriptionText;
	NSString* _releaseNotes;
	NSString* _contentRating;
	NSString* _minimumOSVersion;
	NSNumber* _fileSize;
	NSNumber* _averageRating;
	NSNumber* _numberOfRatings;
	NSNumber* _averageRatingLatestVersion;
	NSNumber* _numberOfRatingsLatestVersion;

}

@property (nonatomic,readonly) NSString * artistID;                                  //@synthesize artistID=_artistID - In the implementation block
@property (nonatomic,readonly) NSString * artistName;                                //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,readonly) NSDate * releaseDate;                                 //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,readonly) NSNumber * price;                                     //@synthesize price=_price - In the implementation block
@property (nonatomic,readonly) NSString * currencyCode;                              //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,readonly) NSString * formattedPrice;                            //@synthesize formattedPrice=_formattedPrice - In the implementation block
@property (nonatomic,readonly) NSArray * screenshotURLs;                             //@synthesize screenshotURLs=_screenshotURLs - In the implementation block
@property (nonatomic,readonly) NSArray * iPadScreenshotURLs;                         //@synthesize iPadScreenshotURLs=_iPadScreenshotURLs - In the implementation block
@property (nonatomic,readonly) NSArray * supportedLanguages;                         //@synthesize supportedLanguages=_supportedLanguages - In the implementation block
@property (nonatomic,readonly) NSArray * supportedDevices;                           //@synthesize supportedDevices=_supportedDevices - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdated;                                 //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,readonly) NSString * category;                                  //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSString * version;                                   //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL isUniversal;                                     //@synthesize isUniversal=_isUniversal - In the implementation block
@property (nonatomic,readonly) BOOL supportsGameCenter;                              //@synthesize supportsGameCenter=_supportsGameCenter - In the implementation block
@property (nonatomic,readonly) NSString * descriptionText;                           //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,readonly) NSString * releaseNotes;                              //@synthesize releaseNotes=_releaseNotes - In the implementation block
@property (nonatomic,readonly) NSString * contentRating;                             //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,readonly) NSString * minimumOSVersion;                          //@synthesize minimumOSVersion=_minimumOSVersion - In the implementation block
@property (nonatomic,readonly) NSNumber * fileSize;                                  //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) NSNumber * averageRating;                             //@synthesize averageRating=_averageRating - In the implementation block
@property (nonatomic,readonly) NSNumber * numberOfRatings;                           //@synthesize numberOfRatings=_numberOfRatings - In the implementation block
@property (nonatomic,readonly) NSNumber * averageRatingLatestVersion;                //@synthesize averageRatingLatestVersion=_averageRatingLatestVersion - In the implementation block
@property (nonatomic,readonly) NSNumber * numberOfRatingsLatestVersion;              //@synthesize numberOfRatingsLatestVersion=_numberOfRatingsLatestVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
+(id)allowedSecureCodingClassesByPropertyKey;
+(id)isUniversalJSONTransformer;
+(id)supportsGameCenterJSONTransformer;
+(id)screenshotURLsJSONTransformer;
+(id)iPadScreenshotURLsJSONTransformer;
+(id)fileSizeJSONTransformer;
+(id)lastUpdatedJSONTransformer;
-(NSString *)currencyCode;
-(NSString *)category;
-(NSString *)bundleIdentifier;
-(NSNumber *)fileSize;
-(NSString *)version;
-(NSNumber *)price;
-(NSArray *)supportedLanguages;
-(NSNumber *)numberOfRatings;
-(NSString *)descriptionText;
-(NSDate *)lastUpdated;
-(BOOL)isUniversal;
-(NSString *)releaseNotes;
-(NSString *)artistName;
-(NSDate *)releaseDate;
-(NSString *)formattedPrice;
-(NSNumber *)averageRating;
-(NSString *)contentRating;
-(NSArray *)supportedDevices;
-(NSString *)minimumOSVersion;
-(NSString *)artistID;
-(NSArray *)screenshotURLs;
-(NSArray *)iPadScreenshotURLs;
-(BOOL)supportsGameCenter;
-(NSNumber *)averageRatingLatestVersion;
-(NSNumber *)numberOfRatingsLatestVersion;
@end

