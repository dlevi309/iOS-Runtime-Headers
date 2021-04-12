/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MBBackgroundRestoreInfo : NSObject <NSSecureCoding, NSCopying> {

	int dataClassesRemaining;
	unsigned long long bytesRemaining;
	NSArray* failedDomains;
	int _dataClassesRemaining;
	unsigned long long _bytesRemaining;
	NSArray* _failedDomains;

}

@property (assign) int dataClassesRemaining;                       //@synthesize dataClassesRemaining=_dataClassesRemaining - In the implementation block
@property (assign) unsigned long long bytesRemaining;              //@synthesize bytesRemaining=_bytesRemaining - In the implementation block
@property (retain) NSArray * failedDomains;                        //@synthesize failedDomains=_failedDomains - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBytesRemaining:(unsigned long long)arg1 ;
-(void)setDataClassesRemaining:(int)arg1 ;
-(void)setFailedDomains:(NSArray *)arg1 ;
-(unsigned long long)bytesRemaining;
-(int)dataClassesRemaining;
-(NSArray *)failedDomains;
@end

