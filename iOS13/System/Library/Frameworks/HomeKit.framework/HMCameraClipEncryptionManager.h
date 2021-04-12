/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class NSData;

@interface HMCameraClipEncryptionManager : NSObject {

	NSData* _key;

}

@property (copy,readonly) NSData * key;              //@synthesize key=_key - In the implementation block
-(id)init;
-(NSData *)key;
-(id)initWithKey:(id)arg1 ;
-(id)encryptedDataContextFromData:(id)arg1 ;
@end

