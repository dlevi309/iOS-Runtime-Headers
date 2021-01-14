/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)diffFrom:(id)arg1 to:(id)arg2 ;
+(id)classTypes;
+(id)enclosedClassTypes;
-(void)notifyParentWithDiff:(id)arg1 ;
-(id<NRMutableStateParentDelegate>)parentDelegate;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4 ;
-(id)addObserverQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setParentDelegate:(id<NRMutableStateParentDelegate>)arg1 ;
-(id)applyDiff:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(void)notifyObserversWithDiff:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

