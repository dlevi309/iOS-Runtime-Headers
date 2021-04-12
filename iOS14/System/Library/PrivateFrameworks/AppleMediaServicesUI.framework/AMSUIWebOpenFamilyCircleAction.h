/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class NSString, AMSUIWebClientContext;

@interface AMSUIWebOpenFamilyCircleAction : NSObject <AMSUIWebActionRunnable> {

	NSString* _clientName;
	AMSUIWebClientContext* _context;

}

@property (nonatomic,retain) NSString * clientName;                        //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setClientName:(NSString *)arg1 ;
-(NSString *)clientName;
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
@end

