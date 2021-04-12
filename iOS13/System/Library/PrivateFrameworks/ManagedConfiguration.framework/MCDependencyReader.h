/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MCDependencyReader : NSObject {

	NSObject*<OS_dispatch_queue> _memberQueue;
	NSMutableDictionary* _memberQueueSystemDomainsDict;
	NSMutableDictionary* _memberQueueUserDomainsDict;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;                        //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueSystemDomainsDict;              //@synthesize memberQueueSystemDomainsDict=_memberQueueSystemDomainsDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueUserDomainsDict;                //@synthesize memberQueueUserDomainsDict=_memberQueueUserDomainsDict - In the implementation block
+(id)sharedReader;
+(id)systemStoragePath;
+(id)userStoragePath;
+(void)setSystemStoragePath:(id)arg1 userStoragePath:(id)arg2 ;
-(id)init;
-(id)_init;
-(void)invalidateCache;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)memberQueueSystemDomainsDict;
-(NSMutableDictionary *)memberQueueUserDomainsDict;
-(void)memberQueueRereadSystemDomainsDict;
-(void)memberQueueRereadUserDomainsDict;
-(id)memberQueueDependentsOfParent:(id)arg1 inSystemDomain:(id)arg2 ;
-(id)memberQueueDependentsOfParent:(id)arg1 inUserDomain:(id)arg2 ;
-(id)memberQueueParentsInDomain:(id)arg1 ;
-(id)memberQueueDependentsOfParent:(id)arg1 inDomain:(id)arg2 ;
-(id)memberQueueParentsInSystemDomain:(id)arg1 ;
-(id)memberQueueParentsInUserDomain:(id)arg1 ;
-(void)setMemberQueueSystemDomainsDict:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueUserDomainsDict:(NSMutableDictionary *)arg1 ;
-(id)systemDomainsDict;
-(id)userDomainsDict;
-(id)parentsInDomain:(id)arg1 ;
-(id)dependentsOfParent:(id)arg1 inDomain:(id)arg2 ;
-(id)parentsInSystemDomain:(id)arg1 ;
-(id)parentsInUserDomain:(id)arg1 ;
-(id)dependentsOfParent:(id)arg1 inSystemDomain:(id)arg2 ;
-(id)dependentsOfParent:(id)arg1 inUserDomain:(id)arg2 ;
-(void)memberQueueRereadDomainsDict;
@end

