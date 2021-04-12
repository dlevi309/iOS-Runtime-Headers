/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMClient.PlaySoundDevice : NSObject <NSSecureCoding> {

	 serverId;
	 locality;
	 safetyWarningConfirmed;

}

@property (readonly,nonatomic) NSString * serverId; 
@property (readonly,nonatomic) NSString * locality; 
@property (readonly,nonatomic) BOOL safetyWarningConfirmed; 
@property (readonly,nonatomic) NSString * debugDescription; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
+(id)PlaySoundDeviceLocalityLocal;
+(id)PlaySoundDeviceLocalityRemote;
+(id)PlaySoundDeviceLocalityUnknown;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)locality;
-(NSString *)serverId;
-(BOOL)safetyWarningConfirmed;
-(id)initWithServerId:(id)arg1 locality:(id)arg2 safetyWarningConfirmed:(BOOL)arg3 ;
@end

