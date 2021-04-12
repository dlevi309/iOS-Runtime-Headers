/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSNumber, NSString;

@interface VUIInAppMessagingSubscriptionQuery : NSObject {

	unsigned long long _type;
	NSNumber* _adamID;
	NSString* _attributePath;
	NSString* _queryString;

}

@property (nonatomic,readonly) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSNumber * adamID;                     //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,readonly) NSString * attributePath;              //@synthesize attributePath=_attributePath - In the implementation block
@property (nonatomic,readonly) NSString * queryString;                //@synthesize queryString=_queryString - In the implementation block
+(id)queryWithString:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)queryString;
-(NSNumber *)adamID;
-(unsigned long long)type;
-(NSString *)attributePath;
-(unsigned long long)_lookupTypeForString:(id)arg1 ;
@end

