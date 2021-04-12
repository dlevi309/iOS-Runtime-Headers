/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSDoubleLinkedListNode.h>

@protocol NSCopying;
@interface AMSLRUCacheItem : AMSDoubleLinkedListNode {

	id<NSCopying> _key;

}

@property (assign,nonatomic,__weak) id<NSCopying> key;              //@synthesize key=_key - In the implementation block
-(id)initWithKey:(id)arg1 object:(id)arg2 ;
-(id<NSCopying>)key;
-(void)setKey:(id<NSCopying>)arg1 ;
@end

