/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@class NSData, NSString;

@interface AFUIDebugLog : NSObject {

	NSData* _data;
	NSString* _mimeType;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSData * data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSString * mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
+(id)logWithData:(id)arg1 mimeType:(id)arg2 name:(id)arg3 attemptCompression:(BOOL)arg4 ;
-(NSString *)mimeType;
-(NSString *)name;
-(NSData *)data;
-(id)initWithData:(id)arg1 mimeType:(id)arg2 name:(id)arg3 attemptCompression:(BOOL)arg4 ;
@end

