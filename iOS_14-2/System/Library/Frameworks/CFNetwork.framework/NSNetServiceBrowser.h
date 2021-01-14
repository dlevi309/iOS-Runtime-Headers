/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


#import <CFNetwork/CFNetwork-Structs.h>
@interface NSNetServiceBrowser : NSObject {

	id _netServiceBrowser;
	id _delegate;
	void* _reserved;
	BOOL _includesPeerToPeer;

}

@property (assign) id<NSNetServiceBrowserDelegate> delegate; 
@property (assign) BOOL includesPeerToPeer;                               //@synthesize includesPeerToPeer=_includesPeerToPeer - In the implementation block
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)init;
-(CFNetServiceBrowserRef)_internalNetServiceBrowser;
-(id<NSNetServiceBrowserDelegate>)delegate;
-(void)searchForBrowsableDomains;
-(void)setIncludesPeerToPeer:(BOOL)arg1 ;
-(void)stop;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)searchForRegistrationDomains;
-(void)setDelegate:(id<NSNetServiceBrowserDelegate>)arg1 ;
-(void)searchForAllDomains;
-(BOOL)includesPeerToPeer;
-(void)_dispatchCallBack:(void*)arg1 flags:(unsigned long long)arg2 error:(SCD_Struct_NS25)arg3 ;
-(void)searchForServicesOfType:(id)arg1 inDomain:(id)arg2 ;
-(void)_setIncludesAWDL:(BOOL)arg1 ;
-(void)dealloc;
@end

