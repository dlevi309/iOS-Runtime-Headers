/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSDictionary, NSString, NSArray;

@interface AMSMarketingItem : NSObject {

	NSDictionary* _rawValues;

}

@property (nonatomic,readonly) NSDictionary * artworkDictionary; 
@property (nonatomic,readonly) NSString * badge; 
@property (nonatomic,readonly) NSString * campaignID; 
@property (nonatomic,readonly) NSString * itemID; 
@property (nonatomic,readonly) NSArray * itemActions; 
@property (nonatomic,copy,readonly) NSDictionary * rawValues;                 //@synthesize rawValues=_rawValues - In the implementation block
@property (nonatomic,readonly) NSArray * relatedContent; 
@property (nonatomic,readonly) NSString * serviceType; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSString * templateID; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,readonly) NSArray * videos; 
-(NSString *)URLString;
-(id)endDate;
-(NSString *)campaignID;
-(NSArray *)itemActions;
-(id)tagline;
-(NSString *)badge;
-(NSDictionary *)rawValues;
-(id)video;
-(NSString *)subtitle;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)itemID;
-(NSArray *)relatedContent;
-(NSString *)type;
-(NSDictionary *)artworkDictionary;
-(id)abSettings;
-(id)renderingAttributes;
-(NSString *)serviceType;
-(NSString *)templateID;
-(NSString *)title;
-(NSArray *)videos;
@end

