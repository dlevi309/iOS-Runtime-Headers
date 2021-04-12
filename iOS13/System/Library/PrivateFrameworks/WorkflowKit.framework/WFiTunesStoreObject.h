/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
+(id)descriptionTextJSONTransformer;
-(NSString *)currencyCode;
-(NSNumber *)price;
-(NSString *)descriptionText;
-(NSString *)artistName;
-(NSDate *)releaseDate;
-(NSString *)formattedPrice;
-(NSString *)artistID;
@end

