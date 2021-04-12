/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MBDeviceTransferConnectionInfo : NSObject <NSCopying, NSSecureCoding> {

	long long _connectionState;
	long long _connectionType;

}

@property (assign,nonatomic) long long connectionState;              //@synthesize connectionState=_connectionState - In the implementation block
@property (assign,nonatomic) long long connectionType;               //@synthesize connectionType=_connectionType - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)connectionTypeFromLinkType:(int)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)connectionType;
-(long long)connectionState;
-(void)setConnectionType:(long long)arg1 ;
-(void)setConnectionState:(long long)arg1 ;
@end

