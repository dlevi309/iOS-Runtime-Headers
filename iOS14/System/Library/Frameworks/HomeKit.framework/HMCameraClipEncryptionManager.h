/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class NSData;

@interface HMCameraClipEncryptionManager : NSObject {

	NSData* _key;

}

@property (copy,readonly) NSData * key;              //@synthesize key=_key - In the implementation block
-(id)init;
-(id)initWithKey:(id)arg1 ;
-(NSData *)key;
-(id)encryptedDataContextFromData:(id)arg1 ;
@end

