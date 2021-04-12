/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSObject, NSString;

@interface _DKSyncToggle : NSObject {

	BOOL _enabled;
	NSObject* _object;
	NSString* _name;
	SEL _enableSelector;
	SEL _disableSelector;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,__weak,readonly) NSObject * object;                 //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) SEL enableSelector;                       //@synthesize enableSelector=_enableSelector - In the implementation block
@property (nonatomic,readonly) SEL disableSelector;                      //@synthesize disableSelector=_disableSelector - In the implementation block
+(id)toggleWithObject:(id)arg1 name:(id)arg2 enableSelector:(SEL)arg3 disableSelector:(SEL)arg4 ;
-(void)dealloc;
-(NSString *)name;
-(NSObject *)object;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)initWithObject:(id)arg1 name:(id)arg2 enableSelector:(SEL)arg3 disableSelector:(SEL)arg4 ;
-(void)_setEnabled:(BOOL)arg1 ;
-(SEL)enableSelector;
-(SEL)disableSelector;
@end

