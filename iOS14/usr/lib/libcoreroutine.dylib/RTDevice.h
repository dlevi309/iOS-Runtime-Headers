/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTCoreDataReadable.h>

@class NSUUID, NSString, NSDate;

@interface RTDevice : NSObject <RTCoreDataReadable> {

	NSUUID* _identifier;
	NSString* _deviceName;
	NSString* _deviceClass;
	NSString* _deviceModel;
	NSDate* _creationDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * deviceName;               //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * deviceClass;              //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) NSString * deviceModel;              //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;               //@synthesize creationDate=_creationDate - In the implementation block
+(id)createWithManagedObject:(id)arg1 ;
+(id)createWithDeviceMO:(id)arg1 ;
-(NSString *)deviceName;
-(NSString *)deviceModel;
-(id)init;
-(NSString *)deviceClass;
-(NSString *)description;
-(NSDate *)creationDate;
-(NSUUID *)identifier;
-(id)initWithIdentifier:(id)arg1 deviceName:(id)arg2 deviceClass:(id)arg3 deviceModel:(id)arg4 creationDate:(id)arg5 ;
@end

