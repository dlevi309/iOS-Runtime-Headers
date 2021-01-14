/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)uti;
-(long long*)rowID;
-(NSString *)mimeType;
-(NSString *)guid;
-(NSString *)fileName;
-(NSData *)data;
-(void)setRowID:(long long*)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(id)_initWithData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 uti:(id)arg4 ;
@end

