/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TUVideoCallAttributes : NSObject <NSSecureCoding> {

	long long _remoteCameraOrientation;
	long long _localVideoContextSlotIdentifier;
	long long _remoteVideoContextSlotIdentifier;

}

@property (assign,nonatomic) long long remoteCameraOrientation;                       //@synthesize remoteCameraOrientation=_remoteCameraOrientation - In the implementation block
@property (assign,nonatomic) long long localVideoContextSlotIdentifier;               //@synthesize localVideoContextSlotIdentifier=_localVideoContextSlotIdentifier - In the implementation block
@property (assign,nonatomic) long long remoteVideoContextSlotIdentifier;              //@synthesize remoteVideoContextSlotIdentifier=_remoteVideoContextSlotIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)remoteCameraOrientation;
-(long long)localVideoContextSlotIdentifier;
-(long long)remoteVideoContextSlotIdentifier;
-(BOOL)isEqualToVideoCallAttributes:(id)arg1 ;
-(void)setRemoteCameraOrientation:(long long)arg1 ;
-(void)setLocalVideoContextSlotIdentifier:(long long)arg1 ;
-(void)setRemoteVideoContextSlotIdentifier:(long long)arg1 ;
@end

