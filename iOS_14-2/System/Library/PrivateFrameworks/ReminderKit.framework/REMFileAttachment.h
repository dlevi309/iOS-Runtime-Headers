/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMAttachment.h>

@class NSURL;

@interface REMFileAttachment : REMAttachment {

	BOOL _isTemporaryFileURL;
	unsigned long long _fileSize;
	NSURL* _fileURL;

}

@property (assign,nonatomic) unsigned long long fileSize;              //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                          //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) BOOL isTemporaryFileURL;                  //@synthesize isTemporaryFileURL=_isTemporaryFileURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createTemporaryFileWithData:(id)arg1 UTI:(id)arg2 ;
+(id)createTemporaryFileURLWithUTI:(id)arg1 ;
+(id)cdEntityName;
-(void)setFileURL:(NSURL *)arg1 ;
-(unsigned long long)fileSize;
-(BOOL)isTemporaryFileURL;
-(void)setIsTemporaryFileURL:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)fileURL;
-(id)initWithCoder:(id)arg1 ;
-(id)_deepCopy;
-(void)setFileSize:(unsigned long long)arg1 ;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 UTI:(id)arg4 fileSize:(unsigned long long)arg5 fileURL:(id)arg6 data:(id)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

