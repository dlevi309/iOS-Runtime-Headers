/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@class NSString;

@interface AVVolumeHUDAssertion : NSObject {

	NSString* _clientIdentifier;
	NSString* _sceneIdentifier;

}

@property (nonatomic,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * sceneIdentifier;               //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)sceneIdentifier;
-(NSString *)clientIdentifier;
-(id)initWithSceneIdentifier:(id)arg1 clientIdentifier:(id)arg2 ;
@end

