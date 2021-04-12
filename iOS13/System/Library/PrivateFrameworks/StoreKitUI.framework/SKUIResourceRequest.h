/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKUIResourceRequest : NSObject <NSCopying> {

	id _cacheKey;
	unsigned long long _requestID;

}

@property (nonatomic,readonly) BOOL cachesInMemory; 
@property (nonatomic,retain) id cacheKey;                                       //@synthesize cacheKey=_cacheKey - In the implementation block
@property (assign,nonatomic) unsigned long long requestIdentifier;              //@synthesize requestID=_requestID - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)cacheKey;
-(void)setCacheKey:(id)arg1 ;
-(void)setRequestIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)requestIdentifier;
-(BOOL)cachesInMemory;
-(void)finishWithResource:(id)arg1 ;
-(id)newLoadOperation;
-(id)_initSKUIResourceRequest;
@end

