/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID, HMDCloudChange, NSMapTable;

@interface HMDCloudChangeNode : HMFObject {

	BOOL _forceDelete;
	BOOL _orphaned;
	NSString* _recordName;
	NSUUID* _uuid;
	NSUUID* _parentUuid;
	NSString* _type;
	HMDCloudChangeNode* _parent;
	HMDCloudChange* _change;
	NSMapTable* _children;

}

@property (nonatomic,copy) NSString * recordName;                             //@synthesize recordName=_recordName - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSUUID * parentUuid;                               //@synthesize parentUuid=_parentUuid - In the implementation block
@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL forceDelete;                              //@synthesize forceDelete=_forceDelete - In the implementation block
@property (nonatomic,readonly) BOOL orphaned;                                 //@synthesize orphaned=_orphaned - In the implementation block
@property (assign,nonatomic,__weak) HMDCloudChangeNode * parent;              //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) HMDCloudChange * change;                         //@synthesize change=_change - In the implementation block
@property (nonatomic,retain) NSMapTable * children;                           //@synthesize children=_children - In the implementation block
+(id)shortDescription;
-(id)init;
-(id)description;
-(void)addChild:(id)arg1 ;
-(HMDCloudChangeNode *)parent;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setParent:(HMDCloudChangeNode *)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(NSString *)recordName;
-(id)shortDescription;
-(NSMapTable *)children;
-(void)setChildren:(NSMapTable *)arg1 ;
-(void)removeChild:(id)arg1 ;
-(void)setRecordName:(NSString *)arg1 ;
-(HMDCloudChange *)change;
-(void)setChange:(HMDCloudChange *)arg1 ;
-(NSUUID *)parentUuid;
-(id)_initWithUUID:(id)arg1 parentUUID:(id)arg2 recordName:(id)arg3 type:(id)arg4 change:(id)arg5 ;
-(id)initWithChange:(id)arg1 ;
-(BOOL)forceDelete;
-(void)logChangeTreeWithIndent:(id)arg1 ;
-(void)setParentUuid:(NSUUID *)arg1 ;
-(void)deleteChildren;
-(id)_allNodesInBranch;
-(void)_markBranchOrphaned;
-(id)initWithRecordMapping:(id)arg1 ;
-(id)initWithCloudRecord:(id)arg1 ;
-(void)updateRecordMapping:(id)arg1 ;
-(void)_updateWithModel:(id)arg1 ;
-(void)_updateWithChange:(id)arg1 ;
-(void)_updateWithCloudRecord:(id)arg1 ;
-(BOOL)orphaned;
@end

