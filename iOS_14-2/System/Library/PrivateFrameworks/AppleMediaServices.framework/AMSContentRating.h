/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString, NSNumber;

@interface AMSContentRating : NSObject {

	NSString* _contentRatingID;
	NSString* _kind;
	NSString* _label;
	NSString* _name;
	NSNumber* _value;

}

@property (nonatomic,readonly) NSString * contentRatingID;              //@synthesize contentRatingID=_contentRatingID - In the implementation block
@property (nonatomic,readonly) NSString * kind;                         //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) NSString * label;                        //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSNumber * value;                        //@synthesize value=_value - In the implementation block
+(id)contentRatingWithDictionary:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)kind;
-(NSString *)name;
-(id)description;
-(NSString *)contentRatingID;
-(NSString *)label;
-(NSNumber *)value;
@end

