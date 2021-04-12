/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class RPFileTransferSession;

@interface MBDeviceTransferSession : NSObject <NSSecureCoding> {

	RPFileTransferSession* _fileTransferSession;

}

@property (nonatomic,retain) RPFileTransferSession * fileTransferSession;              //@synthesize fileTransferSession=_fileTransferSession - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFileTransferSession:(RPFileTransferSession *)arg1 ;
-(RPFileTransferSession *)fileTransferSession;
@end

