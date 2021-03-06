/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>
#import <libobjc.A.dylib/CLSCollaborationStateRepresentable.h>

@class NSArray, NSURL, NSString, NSDate, CLSHandout;

@interface CLSHandoutAttachment : CLSObject <CLSRelationable, CLSCollaborationStateRepresentable> {

	int _shareType;
	int _permissionType;
	NSURL* _URL;
	NSArray* _contextPath;
	NSString* _title;
	NSString* _bundleIdentifier;
	NSString* _applicationName;
	NSString* _contentStoreIdentifier;
	NSString* _contextSummary;
	NSString* _contextCustomTypeName;
	int _completionStatus;
	long long _displayOrder;
	long long _contextType;
	NSDate* _dateLastCompleted;
	BOOL _locked;
	int _type;
	NSString* _storeIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isLocked,nonatomic) BOOL locked;                    //@synthesize locked=_locked - In the implementation block
@property (nonatomic,retain) NSDate * dateLastCompleted; 
@property (nonatomic,copy) NSString * storeIdentifier;                       //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,readonly) int type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int shareType; 
@property (assign,nonatomic) int permissionType; 
@property (assign,nonatomic) long long contextType; 
@property (assign,nonatomic) long long displayOrder; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,readonly) NSArray * assets; 
@property (nonatomic,copy) NSArray * contextPath; 
@property (nonatomic,copy) NSString * contextSummary; 
@property (nonatomic,copy) NSString * contextCustomTypeName; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,copy) NSString * applicationName; 
@property (nonatomic,copy) NSString * contentStoreIdentifier; 
@property (nonatomic,readonly) NSString * parentObjectID; 
@property (nonatomic,readonly) CLSHandout * parent; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) NSArray * collaborationStates; 
@property (assign,nonatomic) int completionStatus; 
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
+(BOOL)supportsSecureCoding;
+(id)relations;
-(long long)contextType;
-(NSArray *)assets;
-(id)dictionaryRepresentation;
-(BOOL)isLocked;
-(BOOL)isComplete;
-(int)shareType;
-(void)setContextType:(long long)arg1 ;
-(void)setDisplayOrder:(long long)arg1 ;
-(void)removeAsset:(id)arg1 ;
-(NSString *)applicationName;
-(void)setURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(NSArray *)contextPath;
-(int)completionStatus;
-(void)setCompletionStatus:(int)arg1 ;
-(void)setLocked:(BOOL)arg1 ;
-(long long)displayOrder;
-(void)setShareType:(int)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithType:(int)arg1 title:(id)arg2 ;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(int)type;
-(NSURL *)URL;
-(void)addAsset:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(void)setApplicationName:(NSString *)arg1 ;
-(void)mergeWithObject:(id)arg1 ;
-(NSString *)storeIdentifier;
-(NSString *)title;
-(BOOL)validateObject:(id*)arg1 ;
-(NSArray *)collaborationStates;
-(NSString *)contentStoreIdentifier;
-(NSString *)contextSummary;
-(void)setContextSummary:(NSString *)arg1 ;
-(NSString *)contextCustomTypeName;
-(void)setContextCustomTypeName:(NSString *)arg1 ;
-(void)setContentStoreIdentifier:(NSString *)arg1 ;
-(int)permissionType;
-(NSDate *)dateLastCompleted;
-(void)setDateLastCompleted:(NSDate *)arg1 ;
-(void)setContextPath:(NSArray *)arg1 ;
-(void)setPermissionType:(int)arg1 ;
-(void)getNumberOfAttemptsWithCompletion:(/*^block*/id)arg1 ;
@end

