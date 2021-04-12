/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(NSData *)data;
-(NSString *)mimeType;
-(id)initWithData:(id)arg1 mimeType:(id)arg2 name:(id)arg3 attemptCompression:(BOOL)arg4 ;
@end

