/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMClient.VoiceAssistantDeviceName : NSObject <NSSecureCoding> {

	 deviceName;
	 ownerFirstName;
	 ownerLastName;
	 $__lazy_storage_$_syncAnchor;

}

@property (readonly,nonatomic) NSString * deviceName; 
@property (readonly,nonatomic) NSString * ownerFirstName; 
@property (readonly,nonatomic) NSString * ownerLastName; 
@property (copy,nonatomic) NSString * syncAnchor; 
@property (readonly,nonatomic) long long hash; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)deviceName;
-(NSString *)ownerLastName;
-(NSString *)ownerFirstName;
-(NSString *)syncAnchor;
-(void)setSyncAnchor:(NSString *)arg1 ;
-(id)initWithDeviceName:(id)arg1 ownerFirstName:(id)arg2 ownerLastName:(id)arg3 ;
@end

