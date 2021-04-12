/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NWParameters *)parameters;
-(NWBrowseDescriptor *)descriptor;
-(NSSet *)discoveredEndpoints;
-(void)setUpdateHandler;
-(id)initWithDescriptor:(id)arg1 parameters:(id)arg2 ;
-(NSObject*<OS_nw_browser>)internalBrowser;
-(id)copyDiscoveredEndpoints;
-(NSSet *)internalDiscoveredEndpoints;
-(void)setInternalDiscoveredEndpoints:(NSSet *)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

