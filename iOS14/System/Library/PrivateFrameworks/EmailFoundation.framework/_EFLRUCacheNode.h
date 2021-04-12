/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@interface _EFLRUCacheNode : NSObject {

	id _element;
	id _key;
	_EFLRUCacheNode* _previous;
	_EFLRUCacheNode* _next;

}

@property (nonatomic,readonly) id element;                            //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) id key;                                //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) _EFLRUCacheNode * previous;              //@synthesize previous=_previous - In the implementation block
@property (nonatomic,retain) _EFLRUCacheNode * next;                  //@synthesize next=_next - In the implementation block
-(_EFLRUCacheNode *)next;
-(_EFLRUCacheNode *)previous;
-(id)element;
-(void)setPrevious:(_EFLRUCacheNode *)arg1 ;
-(id)initWithKey:(id)arg1 element:(id)arg2 ;
-(void)setNext:(_EFLRUCacheNode *)arg1 ;
-(id)key;
@end

