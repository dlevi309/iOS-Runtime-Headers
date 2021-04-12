/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(void)setContentTasteItemUpdates:(NSArray *)arg1 ;
-(NSArray *)contentTasteItemUpdates;
-(BOOL)shouldInvalidateLocalCache;
-(void)setShouldInvalidateLocalCache:(BOOL)arg1 ;
@end

