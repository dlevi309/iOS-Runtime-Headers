/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@class NSArray;

@interface NWPHHandler : NSObject {

	NSArray* _allowedEntitlementGroup;
	/*function pointer*/void* _handlerFunction;

}

@property (retain) NSArray * allowedEntitlementGroup;                      //@synthesize allowedEntitlementGroup=_allowedEntitlementGroup - In the implementation block
@property (assign) /*function pointer*/void* handlerFunction;              //@synthesize handlerFunction=_handlerFunction - In the implementation block
-(id)initWithHandlerFunction:(/*function pointer*/void*)arg1 allowedEntitlementGroup:(id)arg2 ;
-(NSArray *)allowedEntitlementGroup;
-(void)setAllowedEntitlementGroup:(NSArray *)arg1 ;
-(/*function pointer*/void*)handlerFunction;
-(void)setHandlerFunction:(/*function pointer*/void*)arg1 ;
@end

