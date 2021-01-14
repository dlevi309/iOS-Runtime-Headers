/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSArray, NSString;

@interface SSVMediaContentTasteUpdateRequest : SSRequest <SSXPCCoding> {

	BOOL _shouldInvalidateLocalCache;
	NSArray* _contentTasteItemUpdates;

}

@property (nonatomic,copy) NSArray * contentTasteItemUpdates;              //@synthesize contentTasteItemUpdates=_contentTasteItemUpdates - In the implementation block
@property (assign,nonatomic) BOOL shouldInvalidateLocalCache;              //@synthesize shouldInvalidateLocalCache=_shouldInvalidateLocalCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSArray *)contentTasteItemUpdates;
-(BOOL)shouldInvalidateLocalCache;
-(void)setShouldInvalidateLocalCache:(BOOL)arg1 ;
-(void)setContentTasteItemUpdates:(NSArray *)arg1 ;
@end

