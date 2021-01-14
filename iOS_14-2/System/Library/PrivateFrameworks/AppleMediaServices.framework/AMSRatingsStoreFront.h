/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString, NSArray;

@interface AMSRatingsStoreFront : NSObject {

	NSString* _defaultLanguage;
	unsigned long long _mediaType;
	NSString* _name;
	NSArray* _ratingSystems;
	NSString* _storeFront;
	NSString* _storeFrontID;
	NSArray* _supportedLanguages;

}

@property (nonatomic,readonly) NSString * defaultLanguage;                //@synthesize defaultLanguage=_defaultLanguage - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaType;              //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * ratingSystems;                   //@synthesize ratingSystems=_ratingSystems - In the implementation block
@property (nonatomic,readonly) NSString * storeFront;                     //@synthesize storeFront=_storeFront - In the implementation block
@property (nonatomic,readonly) NSString * storeFrontID;                   //@synthesize storeFrontID=_storeFrontID - In the implementation block
@property (nonatomic,readonly) NSArray * supportedLanguages;              //@synthesize supportedLanguages=_supportedLanguages - In the implementation block
+(id)storeFrontWithDictionary:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3 ;
-(unsigned long long)mediaType;
-(NSString *)storeFront;
-(NSString *)name;
-(id)description;
-(NSArray *)ratingSystems;
-(id)initWithDictionary:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3 ;
-(NSString *)storeFrontID;
-(NSString *)defaultLanguage;
-(NSArray *)supportedLanguages;
@end

