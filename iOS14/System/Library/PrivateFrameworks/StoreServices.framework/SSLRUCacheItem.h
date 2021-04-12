/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSDoubleLinkedListNode.h>

@protocol NSCopying;
@interface SSLRUCacheItem : SSDoubleLinkedListNode {

	id<NSCopying> _key;

}

@property (assign,nonatomic,__weak) id<NSCopying> key;              //@synthesize key=_key - In the implementation block
-(id)initWithKey:(id)arg1 object:(id)arg2 ;
-(id<NSCopying>)key;
-(void)setKey:(id<NSCopying>)arg1 ;
@end

