/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)invokeMethod:(id)arg1 withArguments:(id)arg2 ;
-(IKAppContext *)appContext;
-(id)initWithAppContext:(id)arg1 ;
-(void)setJSValue:(id)arg1 forProperty:(id)arg2 ;
-(id)jsValueForProperty:(id)arg1 ;
-(NSMutableDictionary *)managedProperties;
-(void)setManagedProperties:(NSMutableDictionary *)arg1 ;
@end

