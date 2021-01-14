/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class AMSUIWebClientContext, NSString;

@interface AMSUIWebLogAction : NSObject <AMSUIWebActionRunnable> {

	AMSUIWebClientContext* _context;
	long long _level;
	NSString* _message;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long level;                              //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSString * message;                           //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(AMSUIWebClientContext *)context;
-(long long)level;
-(void)setLevel:(long long)arg1 ;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(unsigned char)_logTypeFromLevel:(long long)arg1 ;
@end

