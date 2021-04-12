/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCOperationCanceling.h>

@class NSString;

@interface FCCancelHandler : NSObject <FCOperationCanceling> {

	/*^block*/id _cancelBlock;
	id _weakTarget;
	id _strongTarget;
	SEL _selector;

}

@property (nonatomic,copy) id cancelBlock;                          //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (assign,nonatomic,__weak) id weakTarget;                  //@synthesize weakTarget=_weakTarget - In the implementation block
@property (nonatomic,retain) id strongTarget;                       //@synthesize strongTarget=_strongTarget - In the implementation block
@property (assign,nonatomic) SEL selector;                          //@synthesize selector=_selector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cancelHandlerWithWeakTarget:(id)arg1 selector:(SEL)arg2 ;
+(id)cancelHandlerWithBlock:(/*^block*/id)arg1 ;
+(id)cancelHandlerWithStrongTarget:(id)arg1 selector:(SEL)arg2 ;
-(SEL)selector;
-(void)setSelector:(SEL)arg1 ;
-(void)setWeakTarget:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)cancelBlock;
-(void)setCancelBlock:(id)arg1 ;
-(void)setStrongTarget:(id)arg1 ;
-(id)initWithStrongTarget:(id)arg1 selector:(SEL)arg2 ;
-(id)strongTarget;
-(id)weakTarget;
-(void)cancel;
-(id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2 ;
@end

