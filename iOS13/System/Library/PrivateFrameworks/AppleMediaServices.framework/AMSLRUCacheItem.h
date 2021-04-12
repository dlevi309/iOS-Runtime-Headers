/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSDoubleLinkedListNode.h>

@protocol NSCopying;
@interface AMSLRUCacheItem : AMSDoubleLinkedListNode {

	id<NSCopying> _key;

}

@property (assign,nonatomic,__weak) id<NSCopying> key;              //@synthesize key=_key - In the implementation block
-(id<NSCopying>)key;
-(void)setKey:(id<NSCopying>)arg1 ;
-(id)initWithKey:(id)arg1 object:(id)arg2 ;
@end

