/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class ACAccount, NSString, NSDictionary, AMSUIWebClientContext;

@interface AMSUIWebMarketingItemAction : NSObject <AMSUIWebActionRunnable> {

	ACAccount* _account;
	NSString* _clientIdentifier;
	NSDictionary* _contextInfo;
	NSString* _clientVersion;
	NSString* _placement;
	NSString* _serviceType;
	AMSUIWebClientContext* _context;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                        //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;                //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * contextInfo;                 //@synthesize contextInfo=_contextInfo - In the implementation block
@property (nonatomic,readonly) NSString * clientVersion;                   //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,readonly) NSString * placement;                       //@synthesize placement=_placement - In the implementation block
@property (nonatomic,readonly) NSString * serviceType;                     //@synthesize serviceType=_serviceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ACAccount *)account;
-(NSString *)placement;
-(NSString *)clientVersion;
-(AMSUIWebClientContext *)context;
-(NSString *)serviceType;
-(NSDictionary *)contextInfo;
-(NSString *)clientIdentifier;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
@end

