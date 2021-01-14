/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSString, _DKKnowledgeStorage;

@interface _DKSyncContext : NSObject {

	NSString* _name;
	_DKKnowledgeStorage* _storage;

}

@property (nonatomic,copy,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) _DKKnowledgeStorage * storage;              //@synthesize storage=_storage - In the implementation block
+(id)new;
-(void)setStorage:(_DKKnowledgeStorage *)arg1 ;
-(id)init;
-(_DKKnowledgeStorage *)storage;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
@end

