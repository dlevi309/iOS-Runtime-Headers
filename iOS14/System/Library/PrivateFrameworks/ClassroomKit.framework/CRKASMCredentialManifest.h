/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class CRKAnnotatedCredentialManifest, NSMutableDictionary, NSSet;

@interface CRKASMCredentialManifest : NSObject {

	CRKAnnotatedCredentialManifest* _annotatedManifest;
	NSMutableDictionary* _entriesByPersistentID;

}

@property (nonatomic,readonly) CRKAnnotatedCredentialManifest * annotatedManifest;              //@synthesize annotatedManifest=_annotatedManifest - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * entriesByPersistentID;                     //@synthesize entriesByPersistentID=_entriesByPersistentID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * persistentIDs; 
-(NSSet *)persistentIDs;
-(id)initWithAnnotatedManifest:(id)arg1 ;
-(id)entryForPersistentID:(id)arg1 ;
-(CRKAnnotatedCredentialManifest *)annotatedManifest;
-(NSMutableDictionary *)entriesByPersistentID;
-(id)makeEntryForPersistentID:(id)arg1 ;
@end

