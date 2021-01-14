/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class JSManagedValue;

@interface _IKDOMNodeEventListener : NSObject {

	BOOL _enabled;
	JSManagedValue* _managedValue;

}

@property (nonatomic,retain) JSManagedValue * managedValue;              //@synthesize managedValue=_managedValue - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)value;
-(JSManagedValue *)managedValue;
-(id)initWithListener:(id)arg1 forNode:(id)arg2 ;
-(void)setManagedValue:(JSManagedValue *)arg1 ;
@end

