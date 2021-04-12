/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/


@class NSMethodSignature, NSDictionary;

@interface _NADelegateMethodMetadata : NSObject {

	NSMethodSignature* _methodSignature;
	/*^block*/id _customHandler;
	NSDictionary* _customLogSettingsByArgumentIndex;

}

@property (nonatomic,retain) NSMethodSignature * methodSignature;                        //@synthesize methodSignature=_methodSignature - In the implementation block
@property (nonatomic,copy) id customHandler;                                             //@synthesize customHandler=_customHandler - In the implementation block
@property (nonatomic,copy) NSDictionary * customLogSettingsByArgumentIndex;              //@synthesize customLogSettingsByArgumentIndex=_customLogSettingsByArgumentIndex - In the implementation block
-(NSMethodSignature *)methodSignature;
-(void)setMethodSignature:(NSMethodSignature *)arg1 ;
-(id)customHandler;
-(void)setCustomHandler:(id)arg1 ;
-(NSDictionary *)customLogSettingsByArgumentIndex;
-(void)setCustomLogSettingsByArgumentIndex:(NSDictionary *)arg1 ;
@end

