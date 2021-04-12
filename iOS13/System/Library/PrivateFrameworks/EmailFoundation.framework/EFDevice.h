/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentDevice;
+(id)log;
+(void)setCurrentDevice:(id)arg1 ;
+(id)testingDeviceWithInternal:(BOOL)arg1 ;
+(void)executeWithDeviceIsInternal:(/*^block*/id)arg1 ;
+(void)executeWithDeviceIsExternal:(/*^block*/id)arg1 ;
-(id)_init;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(BOOL)isInternal;
-(NSString *)platformName;
-(void)setIsInternal:(BOOL)arg1 ;
@end

