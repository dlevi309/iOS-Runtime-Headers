/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSString;

@interface SKUIReviewConfiguration : NSObject {

	NSString* _allVersionsURLString;
	NSString* _currentVersionURLString;
	NSString* _pageNumberQueryParameter;
	NSString* _ratingURLString;

}

@property (nonatomic,readonly) NSString * allVersionsURLString;                  //@synthesize allVersionsURLString=_allVersionsURLString - In the implementation block
@property (nonatomic,readonly) NSString * currentVersionURLString;               //@synthesize currentVersionURLString=_currentVersionURLString - In the implementation block
@property (nonatomic,readonly) NSString * pageNumberQueryParameter;              //@synthesize pageNumberQueryParameter=_pageNumberQueryParameter - In the implementation block
@property (nonatomic,readonly) NSString * ratingURLString;                       //@synthesize ratingURLString=_ratingURLString - In the implementation block
-(id)initWithConfigurationDictionary:(id)arg1 ;
-(NSString *)ratingURLString;
-(NSString *)allVersionsURLString;
-(NSString *)currentVersionURLString;
-(NSString *)pageNumberQueryParameter;
@end

