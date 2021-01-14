/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)connectionState;
-(long long)connectionType;
-(id)init;
-(void)setConnectionType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setConnectionState:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

