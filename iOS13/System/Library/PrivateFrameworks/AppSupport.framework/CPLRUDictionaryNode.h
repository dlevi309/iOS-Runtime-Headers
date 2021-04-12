/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/


@interface CPLRUDictionaryNode : NSObject {

	id _key;
	id _object;
	CPLRUDictionaryNode* next;
	CPLRUDictionaryNode* prev;

}

@property (nonatomic,readonly) id key;               //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id object;              //@synthesize object=_object - In the implementation block
-(void)dealloc;
-(id)key;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)initWithKey:(id)arg1 object:(id)arg2 ;
@end

