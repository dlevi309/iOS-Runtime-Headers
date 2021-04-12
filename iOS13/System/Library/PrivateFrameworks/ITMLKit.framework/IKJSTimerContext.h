/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSTimer, JSManagedValue, IKJSManagedArray;

@interface IKJSTimerContext : NSObject {

	BOOL _isRepeating;
	NSTimer* _timer;
	id _ownerObject;
	JSManagedValue* _managedCallback;
	IKJSManagedArray* _managedArgs;

}

@property (nonatomic,retain) NSTimer * timer;                                        //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain,readonly) id ownerObject;                                //@synthesize ownerObject=_ownerObject - In the implementation block
@property (nonatomic,retain,readonly) JSManagedValue * managedCallback;              //@synthesize managedCallback=_managedCallback - In the implementation block
@property (nonatomic,retain,readonly) IKJSManagedArray * managedArgs;                //@synthesize managedArgs=_managedArgs - In the implementation block
@property (nonatomic,readonly) BOOL isRepeating;                                     //@synthesize isRepeating=_isRepeating - In the implementation block
-(void)dealloc;
-(id)description;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(BOOL)isRepeating;
-(id)ownerObject;
-(void)removeManagedReferences;
-(id)initWithCallback:(id)arg1 callbackArgs:(id)arg2 repeating:(BOOL)arg3 ownerObject:(id)arg4 timer:(id)arg5 ;
-(JSManagedValue *)managedCallback;
-(IKJSManagedArray *)managedArgs;
@end

