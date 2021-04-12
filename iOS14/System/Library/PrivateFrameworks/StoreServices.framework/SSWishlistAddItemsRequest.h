/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>

@class NSArray, NSString;

@interface SSWishlistAddItemsRequest : SSRequest {

	NSArray* _items;
	NSString* _caller;
	NSString* _version;

}

@property (copy,readonly) NSArray * items;                 //@synthesize items=_items - In the implementation block
@property (copy,readonly) NSString * caller;               //@synthesize caller=_caller - In the implementation block
@property (copy,readonly) NSString * version;              //@synthesize version=_version - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)caller;
-(id)init;
-(id)initWithItems:(id)arg1 caller:(id)arg2 version:(id)arg3 ;
-(void)startWithAddItemsResponseBlock:(/*^block*/id)arg1 ;
-(NSArray *)items;
-(id)_convertedValueForValue:(id)arg1 ;
-(id)copyQueryStringParameters;
-(NSString *)version;
@end

