/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)callCallback:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithCallback:(/*^block*/id)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end

