/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/_GCImplicitIPCObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSData, NSString;

@interface _GCCControllerHIDServiceInfo : NSObject <_GCImplicitIPCObject, NSCopying> {

	IOHIDServiceClientRef _service;
	NSNumber* _registryID;
	NSData* _inputData;
	BOOL _isPreallocatedSiriRemote;

}

@property (nonatomic,retain) NSData * inputData; 
@property (assign,nonatomic) BOOL isPreallocatedSiriRemote; 
@property (nonatomic,readonly) IOHIDServiceClientRef service;                         //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSNumber * registryID;                                 //@synthesize registryID=_registryID - In the implementation block
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)debugDescription;
-(id)initWithService:(IOHIDServiceClientRef)arg1 ;
-(id)name;
-(NSString *)description;
-(unsigned long long)hash;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)setInputData:(NSData *)arg1 ;
-(NSData *)inputData;
-(NSNumber *)registryID;
-(id)redactedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(IOHIDServiceClientRef)service;
-(void)dealloc;
-(BOOL)isEqualToHIDServiceInfo:(id)arg1 ;
-(BOOL)isPreallocatedSiriRemote;
-(void)setIsPreallocatedSiriRemote:(BOOL)arg1 ;
@end

