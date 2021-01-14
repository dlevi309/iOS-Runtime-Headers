/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

