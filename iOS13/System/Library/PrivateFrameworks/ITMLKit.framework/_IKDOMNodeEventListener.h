/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)value;
-(BOOL)isEnabled;
-(JSManagedValue *)managedValue;
-(id)initWithListener:(id)arg1 forNode:(id)arg2 ;
-(void)setManagedValue:(JSManagedValue *)arg1 ;
@end

