/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSString;

@interface WLKContentRating : NSObject {

	NSString* _displayName;
	unsigned long long _ratingValue;
	NSString* _contentRatingSystem;
	NSString* _name;
	unsigned long long _systemType;

}

@property (nonatomic,copy,readonly) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) unsigned long long ratingValue;                   //@synthesize ratingValue=_ratingValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentRatingSystem;              //@synthesize contentRatingSystem=_contentRatingSystem - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long systemType;                    //@synthesize systemType=_systemType - In the implementation block
-(unsigned long long)systemType;
-(id)init;
-(unsigned long long)ratingValue;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(NSString *)displayName;
-(NSString *)contentRatingSystem;
@end

