/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDAssistantColorCharacteristic : HMFObject {

	BOOL _mandatory;
	NSString* _readCharacteristicType;
	NSString* _writeCharacteristicType;
	NSString* _format;

}

@property (nonatomic,readonly) NSString * readCharacteristicType;               //@synthesize readCharacteristicType=_readCharacteristicType - In the implementation block
@property (nonatomic,readonly) NSString * writeCharacteristicType;              //@synthesize writeCharacteristicType=_writeCharacteristicType - In the implementation block
@property (nonatomic,readonly) NSString * format;                               //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) BOOL mandatory;                                  //@synthesize mandatory=_mandatory - In the implementation block
-(NSString *)format;
-(id)initWithReadCharacteristicType:(id)arg1 writeCharacteristicType:(id)arg2 format:(id)arg3 mandatory:(BOOL)arg4 ;
-(NSString *)readCharacteristicType;
-(NSString *)writeCharacteristicType;
-(BOOL)mandatory;
@end

