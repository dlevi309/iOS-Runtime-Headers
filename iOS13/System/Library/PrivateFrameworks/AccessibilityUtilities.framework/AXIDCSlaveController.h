/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/AXIDCRemoteController.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@class AXDispatchTimer, NSString;

@interface AXIDCSlaveController : AXIDCRemoteController <NSNetServiceDelegate> {

	AXDispatchTimer* _resolveTimer;
	CFSocketRef _ipv4socket;
	CFSocketRef _ipv6socket;
	BOOL _isVisible;
	double _searchTimeout;
	/*^block*/id _searchCompletion;
	NSString* _serviceType;

}

@property (nonatomic,copy) id searchCompletion;                     //@synthesize searchCompletion=_searchCompletion - In the implementation block
@property (nonatomic,retain) NSString * serviceType;                //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) double searchTimeout;                  //@synthesize searchTimeout=_searchTimeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)initialize;
-(NSString *)serviceType;
-(BOOL)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netServiceWillPublish:(id)arg1 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(double)searchTimeout;
-(void)setServiceType:(NSString *)arg1 ;
-(void)receivedData:(id)arg1 ;
-(id)initWithServiceType:(id)arg1 ;
-(void)closeConnectionWithError:(id)arg1 ;
-(void)resolveMasterWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isSlave;
-(void)setSearchTimeout:(double)arg1 ;
-(void)setSearchCompletion:(id)arg1 ;
-(BOOL)shouldAcceptConnection;
-(void)acceptConnection:(int)arg1 ;
-(id)searchCompletion;
-(void)resetConnection;
@end

