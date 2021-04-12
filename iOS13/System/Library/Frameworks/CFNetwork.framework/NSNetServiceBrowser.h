/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id<NSNetServiceBrowserDelegate>)delegate;
-(void)setDelegate:(id<NSNetServiceBrowserDelegate>)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)stop;
-(BOOL)includesPeerToPeer;
-(void)setIncludesPeerToPeer:(BOOL)arg1 ;
-(BOOL)_includesAWDL;
-(void)_setIncludesAWDL:(BOOL)arg1 ;
-(void)searchForBrowsableDomains;
-(void)searchForRegistrationDomains;
-(void)searchForServicesOfType:(id)arg1 inDomain:(id)arg2 ;
-(CFNetServiceBrowserRef)_internalNetServiceBrowser;
-(void)_dispatchCallBack:(void*)arg1 flags:(unsigned long long)arg2 error:(SCD_Struct_NS26)arg3 ;
-(void)searchForAllDomains;
@end

