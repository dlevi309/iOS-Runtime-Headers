/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/

#import <libobjc.A.dylib/BYDeviceProvider.h>

@class NSString;

@interface BYDevice : NSObject <BYDeviceProvider> {

	BOOL _hasHomeButton;
	int _mainScreenClass;
	long long _type;
	long long _size;

}

@property (nonatomic,readonly) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long size;                      //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL hasHomeButton;                  //@synthesize hasHomeButton=_hasHomeButton - In the implementation block
@property (nonatomic,readonly) int mainScreenClass;                 //@synthesize mainScreenClass=_mainScreenClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentDevice;
-(id)init;
-(long long)size;
-(id)currentDevice;
-(int)mainScreenClass;
-(BOOL)hasHomeButton;
-(long long)type;
@end

