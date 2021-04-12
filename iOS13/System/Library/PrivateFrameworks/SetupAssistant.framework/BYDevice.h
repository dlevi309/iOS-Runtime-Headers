/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/

#import <libobjc.A.dylib/BYDeviceProvider.h>

@class NSString;

@interface BYDevice : NSObject <BYDeviceProvider> {

	BOOL _hasHomeButton;
	long long _type;
	long long _size;

}

@property (nonatomic,readonly) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long size;                      //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeButton;                  //@synthesize hasHomeButton=_hasHomeButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentDevice;
-(id)init;
-(long long)type;
-(long long)size;
-(id)currentDevice;
-(BOOL)hasHomeButton;
@end

