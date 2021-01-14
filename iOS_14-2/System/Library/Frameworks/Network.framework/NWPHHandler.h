/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@class NSArray;

@interface NWPHHandler : NSObject {

	NSArray* _allowedEntitlementGroup;
	/*function pointer*/void* _handlerFunction;

}

@property (retain) NSArray * allowedEntitlementGroup;                      //@synthesize allowedEntitlementGroup=_allowedEntitlementGroup - In the implementation block
@property (assign) /*function pointer*/void* handlerFunction;              //@synthesize handlerFunction=_handlerFunction - In the implementation block
-(void)setAllowedEntitlementGroup:(NSArray *)arg1 ;
-(void)setHandlerFunction:(/*function pointer*/void*)arg1 ;
-(NSArray *)allowedEntitlementGroup;
-(id)initWithHandlerFunction:(/*function pointer*/void*)arg1 allowedEntitlementGroup:(id)arg2 ;
-(/*function pointer*/void*)handlerFunction;
@end

