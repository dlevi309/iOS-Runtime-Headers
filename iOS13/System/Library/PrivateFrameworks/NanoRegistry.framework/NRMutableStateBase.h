/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NRMutableStateProtocol.h>

@protocol NRMutableStateParentDelegate;
@class NSMutableSet, NSString;

@interface NRMutableStateBase : NSObject <NRMutableStateProtocol> {

	NSMutableSet* _observers;
	os_unfair_lock_s _lock;
	id<NRMutableStateParentDelegate> _parentDelegate;

}

@property (assign,nonatomic,__weak) id<NRMutableStateParentDelegate> parentDelegate;              //@synthesize parentDelegate=_parentDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)enclosedClassTypes;
+(id)diffFrom:(id)arg1 to:(id)arg2 ;
+(id)classTypes;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)observers;
-(id)applyDiff:(id)arg1 ;
-(void)setParentDelegate:(id<NRMutableStateParentDelegate>)arg1 ;
-(id)addObserverQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4 ;
-(id<NRMutableStateParentDelegate>)parentDelegate;
-(void)notifyParentWithDiff:(id)arg1 ;
-(void)notifyObserversWithDiff:(id)arg1 ;
@end

