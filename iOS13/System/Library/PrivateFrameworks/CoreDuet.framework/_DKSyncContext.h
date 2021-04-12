/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)name;
-(_DKKnowledgeStorage *)storage;
-(id)initWithName:(id)arg1 ;
-(void)setStorage:(_DKKnowledgeStorage *)arg1 ;
@end

