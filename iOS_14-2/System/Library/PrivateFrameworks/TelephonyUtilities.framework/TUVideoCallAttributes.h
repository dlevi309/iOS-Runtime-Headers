/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)remoteCameraOrientation;
-(long long)localVideoContextSlotIdentifier;
-(long long)remoteVideoContextSlotIdentifier;
-(BOOL)isEqualToVideoCallAttributes:(id)arg1 ;
-(void)setRemoteCameraOrientation:(long long)arg1 ;
-(void)setLocalVideoContextSlotIdentifier:(long long)arg1 ;
-(void)setRemoteVideoContextSlotIdentifier:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

