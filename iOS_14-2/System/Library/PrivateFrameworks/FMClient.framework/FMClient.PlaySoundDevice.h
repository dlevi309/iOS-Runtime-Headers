/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)PlaySoundDeviceLocalityRemote;
+(id)PlaySoundDeviceLocalityLocal;
+(id)PlaySoundDeviceLocalityUnknown;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)locality;
-(NSString *)description;
-(NSString *)serverId;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithServerId:(id)arg1 locality:(id)arg2 safetyWarningConfirmed:(BOOL)arg3 ;
-(BOOL)safetyWarningConfirmed;
@end

