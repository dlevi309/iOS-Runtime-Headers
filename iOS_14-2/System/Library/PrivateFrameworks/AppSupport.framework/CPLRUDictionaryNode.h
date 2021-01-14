/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)initWithKey:(id)arg1 object:(id)arg2 ;
-(id)key;
-(void)dealloc;
@end

