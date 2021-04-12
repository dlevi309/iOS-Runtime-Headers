/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class NSString, NSURL;

@interface CFXEffectMessagesStickerProperties : NSObject {

	NSString* _effectID;
	NSURL* _previewUrl;
	NSString* _localizedDescription;

}

@property (nonatomic,readonly) NSString * effectID;                          //@synthesize effectID=_effectID - In the implementation block
@property (nonatomic,readonly) NSURL * previewUrl;                           //@synthesize previewUrl=_previewUrl - In the implementation block
@property (nonatomic,readonly) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
-(NSString *)localizedDescription;
-(NSString *)effectID;
-(id)initWithEffectID:(id)arg1 previewUrl:(id)arg2 localizedDescription:(id)arg3 ;
-(NSURL *)previewUrl;
@end

