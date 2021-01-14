/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/

#import <Security/SecuritydXPCCallbackProtocol.h>

@class NSString;

@interface SecuritydXPCCallback : NSObject <SecuritydXPCCallbackProtocol> {

	/*^block*/id _callback;

}

@property (copy) id callback;                                       //@synthesize callback=_callback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(id)initWithCallback:(/*^block*/id)arg1 ;
-(void)callCallback:(BOOL)arg1 error:(id)arg2 ;
@end

