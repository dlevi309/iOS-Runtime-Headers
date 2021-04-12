/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(RPFileTransferSession *)fileTransferSession;
-(void)setFileTransferSession:(RPFileTransferSession *)arg1 ;
@end

