/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class NSString, NSArray, NSNumber;

@interface PSSearchableItem : NSObject {

	NSString* _url;
	NSString* _name;
	NSString* _classIdentifier;
	NSString* _contentDescription;
	NSArray* _keywords;
	NSString* _category;
	NSString* _identifier;
	NSString* _bundleID;
	NSNumber* _rankingHint;
	NSArray* _requiredCapabilities;
	NSArray* _requiredCapabilitiesOr;

}

@property (nonatomic,retain) NSString * url;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * classIdentifier;                    //@synthesize classIdentifier=_classIdentifier - In the implementation block
@property (nonatomic,retain) NSString * contentDescription;                 //@synthesize contentDescription=_contentDescription - In the implementation block
@property (nonatomic,retain) NSArray * keywords;                            //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,retain) NSString * category;                           //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSNumber * rankingHint;                        //@synthesize rankingHint=_rankingHint - In the implementation block
@property (nonatomic,retain) NSArray * requiredCapabilities;                //@synthesize requiredCapabilities=_requiredCapabilities - In the implementation block
@property (nonatomic,retain) NSArray * requiredCapabilitiesOr;              //@synthesize requiredCapabilitiesOr=_requiredCapabilitiesOr - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)url;
-(NSArray *)keywords;
-(void)setKeywords:(NSArray *)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)contentDescription;
-(void)setUrl:(NSString *)arg1 ;
-(NSArray *)requiredCapabilities;
-(id)toCSSearchableItem;
-(id)toManifestDictionary;
-(NSNumber *)rankingHint;
-(void)setContentDescription:(NSString *)arg1 ;
-(void)setRankingHint:(NSNumber *)arg1 ;
-(void)setRequiredCapabilities:(NSArray *)arg1 ;
-(void)setRequiredCapabilitiesOr:(NSArray *)arg1 ;
-(void)setClassIdentifier:(NSString *)arg1 ;
-(NSString *)classIdentifier;
-(NSArray *)requiredCapabilitiesOr;
@end

