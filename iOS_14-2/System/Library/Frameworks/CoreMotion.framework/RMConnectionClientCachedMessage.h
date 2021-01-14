/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class NSString, NSData;

@interface RMConnectionClientCachedMessage : NSObject {

	NSString* _name;
	NSData* _data;
	/*^block*/id _streamingCallback;

}

@property (nonatomic,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSData * data;                     //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) id streamingCallback;              //@synthesize streamingCallback=_streamingCallback - In the implementation block
-(id)initWithName:(id)arg1 data:(id)arg2 streamingCallback:(/*^block*/id)arg3 ;
-(id)streamingCallback;
-(NSString *)name;
-(NSData *)data;
-(id)initWithName:(id)arg1 data:(id)arg2 ;
@end

