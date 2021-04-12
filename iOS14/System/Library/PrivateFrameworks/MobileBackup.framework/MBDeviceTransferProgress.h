/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface MBDeviceTransferProgress : NSObject <NSCopying, NSSecureCoding> {

	NSString* _phaseDescription;
	unsigned long long _phase;
	double _progress;
	long long _minutesRemaining;
	NSDate* _fileTransferStartDate;
	NSDate* _restoreStartDate;
	unsigned long long _filesTransferred;
	unsigned long long _bytesTransferred;
	unsigned long long _totalByteCount;
	unsigned long long _totalFileCount;

}

@property (nonatomic,retain) NSString * phaseDescription;                      //@synthesize phaseDescription=_phaseDescription - In the implementation block
@property (assign,nonatomic) unsigned long long phase;                         //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) double progress;                                  //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) long long minutesRemaining;                       //@synthesize minutesRemaining=_minutesRemaining - In the implementation block
@property (nonatomic,retain) NSDate * fileTransferStartDate;                   //@synthesize fileTransferStartDate=_fileTransferStartDate - In the implementation block
@property (nonatomic,retain) NSDate * restoreStartDate;                        //@synthesize restoreStartDate=_restoreStartDate - In the implementation block
@property (assign,nonatomic) unsigned long long filesTransferred;              //@synthesize filesTransferred=_filesTransferred - In the implementation block
@property (assign,nonatomic) unsigned long long bytesTransferred;              //@synthesize bytesTransferred=_bytesTransferred - In the implementation block
@property (assign,nonatomic) unsigned long long totalByteCount;                //@synthesize totalByteCount=_totalByteCount - In the implementation block
@property (assign,nonatomic) unsigned long long totalFileCount;                //@synthesize totalFileCount=_totalFileCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)progress;
-(id)init;
-(void)setMinutesRemaining:(long long)arg1 ;
-(void)setFilesTransferred:(unsigned long long)arg1 ;
-(void)setBytesTransferred:(unsigned long long)arg1 ;
-(void)setTotalByteCount:(unsigned long long)arg1 ;
-(void)setTotalFileCount:(unsigned long long)arg1 ;
-(void)setPhaseDescription:(NSString *)arg1 ;
-(void)setFileTransferStartDate:(NSDate *)arg1 ;
-(void)setRestoreStartDate:(NSDate *)arg1 ;
-(NSString *)phaseDescription;
-(long long)minutesRemaining;
-(NSDate *)fileTransferStartDate;
-(NSDate *)restoreStartDate;
-(unsigned long long)filesTransferred;
-(unsigned long long)bytesTransferred;
-(unsigned long long)totalByteCount;
-(unsigned long long)totalFileCount;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setProgress:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)phase;
-(void)setPhase:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

