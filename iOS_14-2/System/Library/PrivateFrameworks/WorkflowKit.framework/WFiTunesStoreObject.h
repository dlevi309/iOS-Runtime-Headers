/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFiTunesObject.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSDate, NSNumber, NSDictionary;

@interface WFiTunesStoreObject : WFiTunesObject <MTLJSONSerializing> {

	NSString* _artistID;
	NSString* _artistName;
	NSDate* _releaseDate;
	NSNumber* _price;
	NSString* _currencyCode;
	NSString* _descriptionText;

}

@property (nonatomic,readonly) NSString * artistID;                              //@synthesize artistID=_artistID - In the implementation block
@property (nonatomic,readonly) NSString * artistName;                            //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,readonly) NSDate * releaseDate;                             //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,readonly) NSNumber * price;                                 //@synthesize price=_price - In the implementation block
@property (nonatomic,readonly) NSString * currencyCode;                          //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,readonly) NSString * formattedPrice; 
@property (nonatomic,readonly) NSString * descriptionText;                       //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
+(id)descriptionTextJSONTransformer;
-(NSNumber *)price;
-(NSString *)currencyCode;
-(NSDate *)releaseDate;
-(NSString *)artistID;
-(NSString *)descriptionText;
-(NSString *)artistName;
-(NSString *)formattedPrice;
@end

