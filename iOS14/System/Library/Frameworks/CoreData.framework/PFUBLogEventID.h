/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSString;

@interface PFUBLogEventID : NSObject {

	NSString* _idString;
	long long _hash;
	long long _eventType;

}

@property (nonatomic,readonly) NSString * idString;              //@synthesize idString=_idString - In the implementation block
@property (nonatomic,readonly) long long hash;                   //@synthesize hash=_hash - In the implementation block
@property (nonatomic,readonly) long long eventType;              //@synthesize eventType=_eventType - In the implementation block
+(void)initialize;
-(long long)eventType;
-(id)initWithEventType:(int)arg1 ;
-(NSString *)idString;
-(id)initWithCustomKey:(id)arg1 ;
-(long long)hash;
@end

