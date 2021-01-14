/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class NSUUID, NSString;

@interface EFDevice : NSObject <EFLoggable> {

	BOOL _isInternal;
	NSUUID* _identifier;

}

@property (nonatomic,retain) NSUUID * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (assign) BOOL isInternal;                                 //@synthesize isInternal=_isInternal - In the implementation block
@property (readonly) NSString * platformName; 
@property (readonly) BOOL isRunningNative; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)currentDevice;
+(void)executeWithDeviceIsInternal:(/*^block*/id)arg1 ;
+(id)testingDeviceWithInternal:(BOOL)arg1 ;
+(void)executeWithDeviceIsExternal:(/*^block*/id)arg1 ;
+(void)setCurrentDevice:(id)arg1 ;
-(BOOL)isInternal;
-(NSString *)platformName;
-(void)setIsInternal:(BOOL)arg1 ;
-(BOOL)isPlatform:(long long)arg1 ;
-(BOOL)isRunningNative;
-(id)_init;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
@end

