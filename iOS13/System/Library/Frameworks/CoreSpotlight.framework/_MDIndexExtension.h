/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSSet, NSExtension, NSDictionary;

@interface _MDIndexExtension : NSObject {

	BOOL _entitlementVerified;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _containerID;
	NSSet* _identifiers;
	NSExtension* _extension;
	NSString* _containerPath;
	NSString* _extensionID;

}

@property (nonatomic,retain) NSExtension * extension;                         //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * containerPath;                        //@synthesize containerPath=_containerPath - In the implementation block
@property (nonatomic,retain) NSString * containerID;                          //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,retain) NSString * extensionID;                          //@synthesize extensionID=_extensionID - In the implementation block
@property (assign,nonatomic) BOOL entitlementVerified;                        //@synthesize entitlementVerified=_entitlementVerified - In the implementation block
@property (readonly) BOOL isEnabled; 
@property (readonly) BOOL isInternal; 
@property (readonly) BOOL dontRunDuringMigration; 
@property (readonly) NSDictionary * infoDictionary; 
@property (copy) NSSet * identifiers;                                         //@synthesize identifiers=_identifiers - In the implementation block
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)containerPath;
-(NSDictionary *)infoDictionary;
-(BOOL)isEnabled;
-(BOOL)isInternal;
-(NSSet *)identifiers;
-(void)setIdentifiers:(NSSet *)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(NSString *)containerID;
-(void)setContainerID:(NSString *)arg1 ;
-(NSString *)extensionID;
-(BOOL)dontRunDuringMigration;
-(BOOL)entitlementVerified;
-(void)setEntitlementVerified:(BOOL)arg1 ;
-(BOOL)_verifyIntegrityWithHostContext:(id)arg1 ;
-(void)_performJob:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithExtension:(id)arg1 queue:(id)arg2 containerPath:(id)arg3 containerID:(id)arg4 ;
-(void)performJob:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setContainerPath:(NSString *)arg1 ;
-(void)setExtensionID:(NSString *)arg1 ;
@end

