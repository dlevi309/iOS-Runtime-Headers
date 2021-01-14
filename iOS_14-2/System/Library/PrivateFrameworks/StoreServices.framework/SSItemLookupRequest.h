/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSMutableDictionary, NSDictionary, NSString;

@interface SSItemLookupRequest : SSRequest <SSXPCCoding> {

	NSMutableDictionary* _parameters;

}

@property (copy,readonly) NSDictionary * parameters; 
@property (assign,nonatomic) id<SSItemLookupRequestDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)parameters;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)init;
-(void)setValue:(id)arg1 forParameter:(id)arg2 ;
-(BOOL)start;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_convertedValueForValue:(id)arg1 ;
-(id)_errorForStatusCode:(long long)arg1 ;
-(id)_copyItemsFromResponse:(id)arg1 expirationDate:(id)arg2 ;
-(void)startWithItemLookupBlock:(/*^block*/id)arg1 ;
-(id)copyQueryStringParameters;
-(id)valueForParameter:(id)arg1 ;
-(void)dealloc;
@end

