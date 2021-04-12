/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@protocol OS_nw_browser;
@class NWBrowseDescriptor, NWParameters, NSObject, NSSet;

@interface NWBrowser : NSObject {

	NWBrowseDescriptor* _descriptor;
	NWParameters* _parameters;
	NSObject*<OS_nw_browser> _internalBrowser;
	NSSet* _internalDiscoveredEndpoints;

}

@property (readonly) NSObject*<OS_nw_browser> internalBrowser;              //@synthesize internalBrowser=_internalBrowser - In the implementation block
@property (retain) NSSet * internalDiscoveredEndpoints;                     //@synthesize internalDiscoveredEndpoints=_internalDiscoveredEndpoints - In the implementation block
@property (readonly) NWBrowseDescriptor * descriptor;                       //@synthesize descriptor=_descriptor - In the implementation block
@property (readonly) NWParameters * parameters;                             //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) NSSet * discoveredEndpoints; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(NWParameters *)parameters;
-(NWBrowseDescriptor *)descriptor;
-(id)initWithDescriptor:(id)arg1 parameters:(id)arg2 ;
-(NSSet *)discoveredEndpoints;
-(void)setUpdateHandler;
-(id)copyDiscoveredEndpoints;
-(NSObject*<OS_nw_browser>)internalBrowser;
-(NSSet *)internalDiscoveredEndpoints;
-(void)setInternalDiscoveredEndpoints:(NSSet *)arg1 ;
@end

