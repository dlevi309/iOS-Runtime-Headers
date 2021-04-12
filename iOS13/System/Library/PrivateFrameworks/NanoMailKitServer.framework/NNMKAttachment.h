/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <UIFoundation/NSTextAttachment.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NNMKAttachment : NSTextAttachment <NSSecureCoding> {

	NSString* _url;
	NSString* _contentId;
	NSString* _fileName;
	NSString* _mimePartNumber;
	unsigned long long _fileSize;
	unsigned long long _type;
	NSString* _messageId;
	unsigned long long _syncState;

}

@property (nonatomic,retain) NSString * url;                            //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * contentId;                      //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,retain) NSString * fileName;                       //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSString * mimePartNumber;                 //@synthesize mimePartNumber=_mimePartNumber - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;               //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) unsigned long long type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * messageId;                      //@synthesize messageId=_messageId - In the implementation block
@property (assign,nonatomic) unsigned long long syncState;              //@synthesize syncState=_syncState - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)fileSize;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
-(NSString *)contentId;
-(void)setContentId:(NSString *)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(unsigned long long)syncState;
-(void)setSyncState:(unsigned long long)arg1 ;
-(NSString *)mimePartNumber;
-(void)setMimePartNumber:(NSString *)arg1 ;
@end

