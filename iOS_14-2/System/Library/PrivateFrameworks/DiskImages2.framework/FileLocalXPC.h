/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
*/

#import <DiskImages2/BackendXPC.h>

@interface FileLocalXPC : BackendXPC {

	int _fileDescriptor;

}

@property (nonatomic,readonly) int fileDescriptor;              //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)fileDescriptor;
-(id)initWithURL:(id)arg1 fileOpenMode:(unsigned short)arg2 ;
@end

