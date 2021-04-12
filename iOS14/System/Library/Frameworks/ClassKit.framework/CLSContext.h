/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSURL, NSString, NSArray, CLSActivity, NSSet;

@interface CLSContext : CLSObject <CLSRelationable> {

	BOOL _active;
	NSURL* _universalLinkURL;
	NSString* _title;
	NSString* _topic;
	NSArray* _path;
	NSString* _currentActivityID;
	NSString* _contentStoreIdentifier;
	long long _displayOrder;
	NSString* _summary;
	NSString* _customTypeName;
	NSRange _suggestedAge;
	NSRange _suggestedCompletionTime;
	BOOL _assignable;
	NSString* _identifier;
	long long _type;
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
@property (nonatomic,copy) NSString * stableObjectID;                                   //@synthesize stableObjectID=_stableObjectID - In the implementation block
@property (assign,nonatomic) long long type;                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * path;                                              //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * storeTeamID;                                      //@synthesize storeTeamID=_storeTeamID - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                                  //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * contentStoreIdentifier; 
@property (nonatomic,copy) NSString * currentActivityID; 
@property (assign,nonatomic) long long authorizationStatus;                             //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (nonatomic,copy,readonly) NSArray * identifierPath; 
@property (nonatomic,retain) NSURL * universalLinkURL; 
@property (nonatomic,copy) NSString * customTypeName; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) long long displayOrder; 
@property (nonatomic,copy) NSString * topic; 
@property (assign,getter=isAssignable,nonatomic) BOOL assignable;                       //@synthesize assignable=_assignable - In the implementation block
@property (assign,nonatomic) NSRange suggestedAge; 
@property (assign,nonatomic) NSRange suggestedCompletionTime; 
@property (nonatomic,copy,readonly) NSSet * progressReportingCapabilities; 
@property (nonatomic,copy) NSString * summary; 
@property (assign,nonatomic) CGImageRef thumbnail; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
+(BOOL)supportsSecureCoding;
+(id)relations;
+(BOOL)conformsToProtocol:(id)arg1 ;
+(id)objectIDForIdentifierPath:(id)arg1 ;
+(id)validatedContextIdentifierPathFromPath:(id)arg1 ;
+(id)reservedContextTypes;
+(id)allowedTopics;
+(id)defaultProgressReportingCapability;
+(id)stableObjectIDForIdentifierPath:(id)arg1 ;
+(id)objectIDPathFromIdentifierPath:(id)arg1 ;
+(id)stableObjectIDPathFromIdentifierPath:(id)arg1 ;
+(id)arrayOfStringClasses;
-(id)dictionaryRepresentation;
-(void)setAuthorizationStatus:(long long)arg1 ;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
-(CGImageRef)thumbnail;
-(void)setDisplayOrder:(long long)arg1 ;
-(BOOL)isActive;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(long long)authorizationStatus;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setPath:(NSArray *)arg1 ;
-(NSArray *)path;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(void)setType:(long long)arg1 ;
-(void)becomeActive;
-(NSString *)description;
-(NSString *)summary;
-(long long)displayOrder;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(long long)type;
-(void)removeFromParent;
-(id)initWithCoder:(id)arg1 ;
-(CLSActivity *)currentActivity;
-(id)_init;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)newItemProvider;
-(void)setSummary:(NSString *)arg1 ;
-(void)resignActive;
-(void)mergeWithObject:(id)arg1 ;
-(void)setThumbnail:(CGImageRef)arg1 ;
-(NSString *)storeIdentifier;
-(NSString *)title;
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
-(id)thumbnailBlobs;
-(id)_progressReportingCapabilities;
-(id)thumbnailBlob;
-(void)resetProgressReportingCapabilities_unprotected;
-(void)setStableObjectID:(NSString *)arg1 ;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 title:(id)arg3 ;
-(void)descendantMatchingIdentifierPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUniversalLinkURL:(NSURL *)arg1 ;
-(void)setCustomTypeName:(NSString *)arg1 ;
-(NSRange)suggestedAge;
-(void)setSuggestedAge:(NSRange)arg1 ;
-(NSRange)suggestedCompletionTime;
-(void)setSuggestedCompletionTime:(NSRange)arg1 ;
-(NSSet *)progressReportingCapabilities;
-(void)addProgressReportingCapabilities:(id)arg1 ;
-(void)resetProgressReportingCapabilities;
-(BOOL)isAssignable;
-(void)setAssignable:(BOOL)arg1 ;
-(NSString *)stableObjectID;
-(NSString *)storeTeamID;
-(void)setStoreTeamID:(NSString *)arg1 ;
@end

