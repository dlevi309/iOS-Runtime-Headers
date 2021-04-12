/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSString;

@interface WLKContentRating : NSObject {

	NSString* _displayName;
	unsigned long long _ratingValue;
	NSString* _contentRatingSystem;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) unsigned long long ratingValue;                   //@synthesize ratingValue=_ratingValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentRatingSystem;              //@synthesize contentRatingSystem=_contentRatingSystem - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
-(id)init;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)displayName;
-(unsigned long long)ratingValue;
-(NSString *)contentRatingSystem;
@end

