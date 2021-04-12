/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@class NSString, NSData;

@interface WLMessageAttachment : NSObject {

	NSString* _fileName;
	NSString* _mimeType;
	NSString* _uti;
	NSData* _data;
	long long* _rowID;
	NSString* _guid;

}

@property (nonatomic,readonly) NSString * fileName;              //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,readonly) NSString * mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,readonly) NSString * uti;                   //@synthesize uti=_uti - In the implementation block
@property (nonatomic,readonly) NSData * data;                    //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) long long* rowID;                   //@synthesize rowID=_rowID - In the implementation block
@property (assign,nonatomic) NSString * guid;                    //@synthesize guid=_guid - In the implementation block
-(NSData *)data;
-(NSString *)uti;
-(NSString *)mimeType;
-(NSString *)fileName;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(long long*)rowID;
-(void)setRowID:(long long*)arg1 ;
-(id)_initWithData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 uti:(id)arg4 ;
@end

