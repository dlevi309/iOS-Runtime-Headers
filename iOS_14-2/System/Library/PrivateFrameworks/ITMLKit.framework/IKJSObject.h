/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class IKAppContext, NSMutableDictionary;

@interface IKJSObject : NSObject {

	IKAppContext* _appContext;
	NSMutableDictionary* _managedProperties;

}

@property (nonatomic,retain) NSMutableDictionary * managedProperties;              //@synthesize managedProperties=_managedProperties - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                   //@synthesize appContext=_appContext - In the implementation block
+(void)initialize;
-(id)init;
-(IKAppContext *)appContext;
-(id)invokeMethod:(id)arg1 withArguments:(id)arg2 ;
-(void)setJSValue:(id)arg1 forProperty:(id)arg2 ;
-(id)jsValueForProperty:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(NSMutableDictionary *)managedProperties;
-(void)setManagedProperties:(NSMutableDictionary *)arg1 ;
@end

