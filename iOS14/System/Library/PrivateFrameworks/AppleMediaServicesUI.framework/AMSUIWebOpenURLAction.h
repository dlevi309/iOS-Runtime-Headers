/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class NSURL, AMSUIWebClientContext, NSString;

@interface AMSUIWebOpenURLAction : NSObject <AMSUIWebActionRunnable> {

	NSURL* _URL;
	AMSUIWebClientContext* _context;
	long long _type;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                  //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_openUniversalLink:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setType:(long long)arg1 ;
-(AMSUIWebClientContext *)context;
-(long long)type;
-(NSURL *)URL;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
@end

