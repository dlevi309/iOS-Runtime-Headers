/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/OSLog.framework/OSLog
*/


@class NSString, NSDate;

@interface OSLogEntry : NSObject {

	NSString* _composedMessage;
	NSDate* _date;
	long long _storeCategory;

}

@property (nonatomic,readonly) NSString * composedMessage;              //@synthesize composedMessage=_composedMessage - In the implementation block
@property (nonatomic,readonly) NSDate * date;                           //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long storeCategory;                 //@synthesize storeCategory=_storeCategory - In the implementation block
-(id)initWithEventProxy:(id)arg1 ;
-(NSString *)composedMessage;
-(NSDate *)date;
-(long long)storeCategory;
@end

