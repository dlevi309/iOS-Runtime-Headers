/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <libobjc.A.dylib/WFErrorProviderContext.h>
#import <libobjc.A.dylib/WFContextPresenting.h>

@protocol WFNetworkView, WFNetworkListRecord;
@class NSError, UIViewController, NSString;

@interface WFErrorContext : NSObject <WFErrorProviderContext, WFContextPresenting> {

	BOOL _needsDismissal;
	UIViewController*<WFNetworkView> _provider;
	/*^block*/id _completionHandler;
	NSError* _error;
	id<WFNetworkListRecord> _network;

}

@property (nonatomic,retain) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) id<WFNetworkListRecord> network;                               //@synthesize network=_network - In the implementation block
@property (nonatomic,copy) id completionHandler;                                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) long long requestedFields; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIViewController*<WFNetworkView> provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) BOOL needsDismissal;                                         //@synthesize needsDismissal=_needsDismissal - In the implementation block
-(void)setProvider:(UIViewController*<WFNetworkView>)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(UIViewController*<WFNetworkView>)provider;
-(id<WFNetworkListRecord>)network;
-(id)completionHandler;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSString *)description;
-(void)cancel;
-(void)setNetwork:(id<WFNetworkListRecord>)arg1 ;
-(long long)requestedFields;
-(id)initWithAssociationError:(id)arg1 network:(id)arg2 ;
-(BOOL)needsDismissal;
-(id)_userInfoForAssociationError:(id)arg1 networkName:(id)arg2 ;
@end

