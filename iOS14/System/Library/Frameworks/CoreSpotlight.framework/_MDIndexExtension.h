/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSSet, NSExtension, NSDictionary;

@interface _MDIndexExtension : NSObject {

	BOOL _entitlementVerified;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _containerID;
	NSSet* _identifiers;
	NSSet* _supportedFileTypes;
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
@property (copy) NSSet * supportedFileTypes;                                  //@synthesize supportedFileTypes=_supportedFileTypes - In the implementation block
-(NSString *)containerPath;
-(BOOL)isInternal;
-(NSDictionary *)infoDictionary;
-(NSSet *)identifiers;
-(NSString *)containerID;
-(void)setExtension:(NSExtension *)arg1 ;
-(BOOL)dontRunDuringMigration;
-(void)setContainerID:(NSString *)arg1 ;
-(NSSet *)supportedFileTypes;
-(id)initWithExtension:(id)arg1 queue:(id)arg2 containerPath:(id)arg3 containerID:(id)arg4 ;
-(BOOL)_verifyIntegrityWithHostContext:(id)arg1 ;
-(void)setExtensionID:(NSString *)arg1 ;
-(void)setContainerPath:(NSString *)arg1 ;
-(id)description;
-(void)setIdentifiers:(NSSet *)arg1 ;
-(void)_performJob:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSExtension *)extension;
-(NSString *)extensionID;
-(BOOL)entitlementVerified;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setEntitlementVerified:(BOOL)arg1 ;
-(void)performJob:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)isEnabled;
-(void)setSupportedFileTypes:(NSSet *)arg1 ;
-(id)initWithExtension:(id)arg1 queue:(id)arg2 containerPath:(id)arg3 containerID:(id)arg4 supportedFileTypes:(id)arg5 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

