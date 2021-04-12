/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSArray, NSString;

@interface SKUIItemContentRating : NSObject {

	NSArray* _contentRatingAdvisories;
	NSString* _contentRatingName;
	NSString* _contentRatingSystemName;
	NSString* _contentRank;

}

@property (nonatomic,readonly) NSArray * contentRatingAdvisories;               //@synthesize contentRatingAdvisories=_contentRatingAdvisories - In the implementation block
@property (nonatomic,readonly) NSString * contentRatingName;                    //@synthesize contentRatingName=_contentRatingName - In the implementation block
@property (nonatomic,readonly) NSString * contentRank;                          //@synthesize contentRank=_contentRank - In the implementation block
@property (nonatomic,readonly) NSString * contentRatingSystemName;              //@synthesize contentRatingSystemName=_contentRatingSystemName - In the implementation block
-(id)description;
-(NSString *)contentRatingSystemName;
-(NSString *)contentRank;
-(NSString *)contentRatingName;
-(NSArray *)contentRatingAdvisories;
-(id)initWithContentRatingDictionary:(id)arg1 systemName:(id)arg2 ;
@end

