/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)systemStoragePath;
+(id)userStoragePath;
+(void)setSystemStoragePath:(id)arg1 userStoragePath:(id)arg2 ;
+(id)sharedReader;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)invalidateCache;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(id)userDomainsDict;
-(NSMutableDictionary *)memberQueueSystemDomainsDict;
-(NSMutableDictionary *)memberQueueUserDomainsDict;
-(void)memberQueueRereadSystemDomainsDict;
-(void)memberQueueRereadUserDomainsDict;
-(id)memberQueueDependentsOfParent:(id)arg1 inSystemDomain:(id)arg2 ;
-(id)memberQueueDependentsOfParent:(id)arg1 inUserDomain:(id)arg2 ;
-(id)memberQueueParentsInDomain:(id)arg1 ;
-(id)systemDomainsDict;
-(id)memberQueueDependentsOfParent:(id)arg1 inDomain:(id)arg2 ;
-(id)memberQueueParentsInSystemDomain:(id)arg1 ;
-(id)memberQueueParentsInUserDomain:(id)arg1 ;
-(void)setMemberQueueSystemDomainsDict:(NSMutableDictionary *)arg1 ;
-(void)setMemberQueueUserDomainsDict:(NSMutableDictionary *)arg1 ;
-(id)parentsInDomain:(id)arg1 ;
-(id)dependentsOfParent:(id)arg1 inDomain:(id)arg2 ;
-(id)parentsInSystemDomain:(id)arg1 ;
-(id)parentsInUserDomain:(id)arg1 ;
-(id)dependentsOfParent:(id)arg1 inSystemDomain:(id)arg2 ;
-(id)dependentsOfParent:(id)arg1 inUserDomain:(id)arg2 ;
-(void)memberQueueRereadDomainsDict;
-(id)_init;
@end

