/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRequestIdentifier:(unsigned long long)arg1 ;
-(id)cacheKey;
-(unsigned long long)requestIdentifier;
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(void)setCacheKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)cachesInMemory;
-(void)finishWithResource:(id)arg1 ;
-(id)newLoadOperation;
-(id)_initSKUIResourceRequest;
@end

