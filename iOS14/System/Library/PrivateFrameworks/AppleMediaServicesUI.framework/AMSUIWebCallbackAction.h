/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class NSString, NSDictionary, AMSUIWebClientContext;

@interface AMSUIWebCallbackAction : NSObject <AMSUIWebActionRunnable> {

	NSString* _service;
	NSDictionary* _data;
	AMSUIWebClientContext* _context;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * service;                           //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSDictionary * data;                          //@synthesize data=_data - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebClientContext *)context;
-(void)setData:(NSDictionary *)arg1 ;
-(NSDictionary *)data;
-(void)setService:(NSString *)arg1 ;
-(NSString *)service;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
@end

