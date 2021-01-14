/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2Cancelable.h>

@protocol HAP2Cancelable <NSObject>
@required
-(void)cancelWithError:(id)arg1;

@end


@class NSString;

@interface HAP2Cancelable : HAP2LoggingObject <HAP2Cancelable> {

	AB _called;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)ignore;
+(id)cancelableWithBlock:(/*^block*/id)arg1 ;
-(id)block;
-(id)init;
-(void)cancelWithError:(id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

