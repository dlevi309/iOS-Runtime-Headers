/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCDisposable.h>

@class NSString;

@interface FCObserver : NSObject <FCDisposable> {

	unsigned long long _token;
	id _keepAliveObject;
	/*^block*/id _observerBlock;

}

@property (assign,nonatomic) unsigned long long token;               //@synthesize token=_token - In the implementation block
@property (assign,nonatomic,__weak) id keepAliveObject;              //@synthesize keepAliveObject=_keepAliveObject - In the implementation block
@property (nonatomic,copy) id observerBlock;                         //@synthesize observerBlock=_observerBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setKeepAliveObject:(id)arg1 ;
-(id)keepAliveObject;
-(void)dispose;
-(void)setToken:(unsigned long long)arg1 ;
-(void)disposeOn:(id)arg1 ;
-(unsigned long long)hash;
-(id)observerBlock;
-(unsigned long long)token;
-(id)initWithToken:(unsigned long long)arg1 ;
-(void)setObserverBlock:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

