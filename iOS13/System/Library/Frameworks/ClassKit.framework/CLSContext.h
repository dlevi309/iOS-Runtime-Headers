/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSURL, NSString, NSArray, CLSActivity;

@interface CLSContext : CLSObject <CLSRelationable> {

	BOOL _active;
	NSURL* _universalLinkURL;
	NSString* _title;
	NSString* _topic;
	NSArray* _path;
	NSString* _currentActivityID;
	NSString* _contentStoreIdentifier;
	long long _displayOrder;
	NSString* _identifier;
	long long _type;
	NSString* _customTypeName;
	NSString* _summary;
	NSString* _stableObjectID;
	NSString* _storeTeamID;
	NSString* _storeIdentifier;
	long long _authorizationStatus;

}

@property (nonatomic,readonly) CLSActivity * currentActivity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * stableObjectID;                      //@synthesize stableObjectID=_stableObjectID - In the implementation block
@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * path;                                 //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * storeTeamID;                         //@synthesize storeTeamID=_storeTeamID - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                     //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * contentStoreIdentifier; 
@property (nonatomic,copy) NSString * currentActivityID; 
@property (assign,nonatomic) long long authorizationStatus;                //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (nonatomic,copy,readonly) NSArray * identifierPath; 
@property (nonatomic,retain) NSURL * universalLinkURL; 
@property (nonatomic,copy) NSString * customTypeName;                      //@synthesize customTypeName=_customTypeName - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) long long displayOrder; 
@property (nonatomic,copy) NSString * topic; 
@property (nonatomic,copy) NSString * summary;                             //@synthesize summary=_summary - In the implementation block
@property (assign,nonatomic) CGImageRef thumbnail; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
+(BOOL)conformsToProtocol:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)relations;
+(id)objectIDForIdentifierPath:(id)arg1 ;
+(id)validatedContextIdentifierPathFromPath:(id)arg1 ;
+(id)reservedContextTypes;
+(id)allowedTopics;
+(id)stableObjectIDForIdentifierPath:(id)arg1 ;
+(id)objectIDPathFromIdentifierPath:(id)arg1 ;
+(id)stableObjectIDPathFromIdentifierPath:(id)arg1 ;
+(id)arrayOfStringClasses;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(NSString *)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSString *)identifier;
-(BOOL)isActive;
-(NSArray *)path;
-(CLSActivity *)currentActivity;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPath:(NSArray *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)topic;
-(long long)authorizationStatus;
-(void)setTopic:(NSString *)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(NSString *)storeIdentifier;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(CGImageRef)thumbnail;
-(void)setThumbnail:(CGImageRef)arg1 ;
-(NSString *)summary;
-(void)setAuthorizationStatus:(long long)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
-(void)removeFromParent;
-(void)becomeActive;
-(void)resignActive;
-(long long)displayOrder;
-(void)setDisplayOrder:(long long)arg1 ;
-(void)mergeWithObject:(id)arg1 ;
-(id)newItemProvider;
-(BOOL)validateObject:(id*)arg1 ;
-(NSArray *)identifierPath;
-(NSURL *)universalLinkURL;
-(NSString *)contentStoreIdentifier;
-(NSString *)customTypeName;
-(void)setContentStoreIdentifier:(NSString *)arg1 ;
-(id)initWithInternalType:(long long)arg1 identifier:(id)arg2 title:(id)arg3 ;
-(void)setIdentifierPathAndGenerateObjectID:(id)arg1 ;
-(long long)effectiveAuthorizationStatus;
-(id)childContextWithIdentifier:(id)arg1 ;
-(void)addChildContext:(id)arg1 ;
-(NSString *)currentActivityID;
-(void)setCurrentActivityID:(NSString *)arg1 ;
-(id)createNewActivity;
-(void)_setType:(long long)arg1 identifier:(id)arg2 title:(id)arg3 ;
-(id)thumbnailBlob;
-(void)setStableObjectID:(NSString *)arg1 ;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 title:(id)arg3 ;
-(void)descendantMatchingIdentifierPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUniversalLinkURL:(NSURL *)arg1 ;
-(void)setCustomTypeName:(NSString *)arg1 ;
-(NSString *)stableObjectID;
-(NSString *)storeTeamID;
-(void)setStoreTeamID:(NSString *)arg1 ;
@end

