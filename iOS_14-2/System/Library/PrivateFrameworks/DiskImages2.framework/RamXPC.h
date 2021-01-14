/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
*/

#import <DiskImages2/BackendXPC.h>

@interface RamXPC : BackendXPC
+(BOOL)supportsSecureCoding;
-(id)initWithSize:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)createRamBackend;
@end

