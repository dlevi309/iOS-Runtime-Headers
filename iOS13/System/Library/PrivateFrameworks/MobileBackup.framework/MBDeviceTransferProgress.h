/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface MBDeviceTransferProgress : NSObject <NSCopying, NSSecureCoding> {

	NSString* _phaseDescription;
	double _progress;
	long long _minutesRemaining;
	NSDate* _fileTransferStartDate;
	NSDate* _restoreStartDate;
	unsigned long long _filesTransferred;
	unsigned long long _bytesTransferred;

}

@property (nonatomic,retain) NSString * phaseDescription;                      //@synthesize phaseDescription=_phaseDescription - In the implementation block
@property (assign,nonatomic) double progress;                                  //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) long long minutesRemaining;                       //@synthesize minutesRemaining=_minutesRemaining - In the implementation block
@property (nonatomic,retain) NSDate * fileTransferStartDate;                   //@synthesize fileTransferStartDate=_fileTransferStartDate - In the implementation block
@property (nonatomic,retain) NSDate * restoreStartDate;                        //@synthesize restoreStartDate=_restoreStartDate - In the implementation block
@property (assign,nonatomic) unsigned long long filesTransferred;              //@synthesize filesTransferred=_filesTransferred - In the implementation block
@property (assign,nonatomic) unsigned long long bytesTransferred;              //@synthesize bytesTransferred=_bytesTransferred - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(unsigned long long)bytesTransferred;
-(void)setBytesTransferred:(unsigned long long)arg1 ;
-(unsigned long long)filesTransferred;
-(void)setFilesTransferred:(unsigned long long)arg1 ;
-(NSDate *)fileTransferStartDate;
-(NSDate *)restoreStartDate;
-(long long)minutesRemaining;
-(NSString *)phaseDescription;
-(void)setMinutesRemaining:(long long)arg1 ;
-(void)setPhaseDescription:(NSString *)arg1 ;
-(void)setFileTransferStartDate:(NSDate *)arg1 ;
-(void)setRestoreStartDate:(NSDate *)arg1 ;
@end

