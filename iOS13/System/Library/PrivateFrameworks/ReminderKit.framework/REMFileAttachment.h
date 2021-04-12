/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMAttachment.h>

@class NSURL, NSData;

@interface REMFileAttachment : REMAttachment {

	unsigned long long _fileSize;
	NSURL* _fileURL;
	NSData* _data;

}

@property (assign,nonatomic) unsigned long long fileSize;              //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                          //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSData * data;                            //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)fileSize;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 UTI:(id)arg4 fileSize:(unsigned long long)arg5 fileURL:(id)arg6 data:(id)arg7 ;
@end

