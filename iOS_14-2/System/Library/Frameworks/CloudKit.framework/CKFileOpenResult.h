/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSFileHandle, NSNumber;

@interface CKFileOpenResult : NSObject <NSSecureCoding> {

	NSFileHandle* _fileHandle;
	NSFileHandle* _encryptedFileHandle;
	NSNumber* _fileSize;
	mkbbackuprefRef _handle;

}

@property (assign,nonatomic) mkbbackuprefRef handle;                          //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) NSFileHandle * fileHandle;                       //@synthesize fileHandle=_fileHandle - In the implementation block
@property (nonatomic,retain) NSFileHandle * encryptedFileHandle;              //@synthesize encryptedFileHandle=_encryptedFileHandle - In the implementation block
@property (nonatomic,retain) NSNumber * fileSize;                             //@synthesize fileSize=_fileSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setHandle:(mkbbackuprefRef)arg1 ;
-(mkbbackuprefRef)handle;
-(NSNumber *)fileSize;
-(void)encodeWithCoder:(id)arg1 ;
-(NSFileHandle *)fileHandle;
-(id)initWithCoder:(id)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(void)dealloc;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(id)initWithMobileKeyBagHandle:(mkbbackuprefRef)arg1 path:(id)arg2 error:(id*)arg3 ;
-(NSFileHandle *)encryptedFileHandle;
-(void)setEncryptedFileHandle:(NSFileHandle *)arg1 ;
@end

