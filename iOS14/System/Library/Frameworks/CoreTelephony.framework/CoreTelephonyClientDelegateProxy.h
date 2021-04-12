/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <Foundation/NSProxy.h>
#import <CoreTelephony/CoreTelephonyClientDelegateProxyInterface.h>

@class NSString;

@interface CoreTelephonyClientDelegateProxy : NSProxy <CoreTelephonyClientDelegateProxyInterface> {

	queue* _userQueue;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(queue*)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

