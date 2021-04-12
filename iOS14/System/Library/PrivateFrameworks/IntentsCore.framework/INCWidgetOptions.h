/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
*/


@class NSString;

@interface INCWidgetOptions : NSObject {

	NSString* _extensionBundleIdentifier;
	NSString* _intentType;

}

@property (nonatomic,copy) NSString * extensionBundleIdentifier;              //@synthesize extensionBundleIdentifier=_extensionBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * intentType;                             //@synthesize intentType=_intentType - In the implementation block
-(void)setIntentType:(NSString *)arg1 ;
-(void)setExtensionBundleIdentifier:(NSString *)arg1 ;
-(NSString *)intentType;
-(NSString *)extensionBundleIdentifier;
-(id)initWithExtensionBundleIdentifier:(id)arg1 intentType:(id)arg2 ;
@end

