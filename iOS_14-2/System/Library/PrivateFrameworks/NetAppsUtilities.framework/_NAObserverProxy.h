/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/


@interface _NAObserverProxy : NSObject {

	BOOL _valid;
	id _weakObserver;

}

@property (nonatomic,__weak,readonly) id weakObserver;                 //@synthesize weakObserver=_weakObserver - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;              //@synthesize valid=_valid - In the implementation block
-(id)weakObserver;
-(BOOL)isValid;
-(id)initWithWeakObserver:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
@end

