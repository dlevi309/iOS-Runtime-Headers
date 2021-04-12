/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)type;
-(id)initWithString:(id)arg1 ;
-(NSString *)queryString;
-(NSNumber *)adamID;
-(NSString *)attributePath;
-(unsigned long long)_lookupTypeForString:(id)arg1 ;
@end

