/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@protocol OS_nw_resolver;
@class NWEndpoint, NWParameters, NSObject, NSSet, NSArray;

@interface NWResolver : NSObject {

	NWEndpoint* _endpoint;
	NWParameters* _parameters;
	NSObject*<OS_nw_resolver> _internalResolver;
	long long _internalStatus;
	NSSet* _internalResolvedEndpoints;
	NSArray* _internalResolvedEndpointArray;

}

@property (readonly) NSObject*<OS_nw_resolver> internalResolver;              //@synthesize internalResolver=_internalResolver - In the implementation block
@property (assign) long long internalStatus;                                  //@synthesize internalStatus=_internalStatus - In the implementation block
@property (retain) NSSet * internalResolvedEndpoints;                         //@synthesize internalResolvedEndpoints=_internalResolvedEndpoints - In the implementation block
@property (retain) NSArray * internalResolvedEndpointArray;                   //@synthesize internalResolvedEndpointArray=_internalResolvedEndpointArray - In the implementation block
@property (nonatomic,readonly) long long status; 
@property (readonly) NWEndpoint * endpoint;                                   //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) NWParameters * parameters;                               //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) NSSet * resolvedEndpoints; 
@property (nonatomic,readonly) NSArray * resolvedEndpointArray; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(NWParameters *)parameters;
-(id)initWithPath:(id)arg1 ;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 ;
-(NWEndpoint *)endpoint;
-(void)setUpdateHandler;
-(NSObject*<OS_nw_resolver>)internalResolver;
-(id)copyResolvedEndpoints;
-(id)copyResolvedEndpointArray;
-(NSArray *)resolvedEndpointArray;
-(long long)internalStatus;
-(void)setInternalStatus:(long long)arg1 ;
-(NSSet *)internalResolvedEndpoints;
-(void)setInternalResolvedEndpoints:(NSSet *)arg1 ;
-(NSArray *)internalResolvedEndpointArray;
-(void)setInternalResolvedEndpointArray:(NSArray *)arg1 ;
-(NSSet *)resolvedEndpoints;
-(long long)status;
-(void)dealloc;
@end

