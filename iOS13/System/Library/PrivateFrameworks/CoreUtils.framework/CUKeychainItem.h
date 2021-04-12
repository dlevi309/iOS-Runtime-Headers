/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSString, NSDate, NSDictionary, NSArray, NSData;

@interface CUKeychainItem : NSObject {

	BOOL _invisible;
	BOOL _legacy;
	int _accessibleType;
	int _syncType;
	NSString* _accessGroup;
	NSDate* _dateCreated;
	NSDate* _dateModified;
	NSString* _identifier;
	NSDictionary* _metadata;
	NSArray* _removedMetadata;
	NSString* _name;
	NSData* _persistentRef;
	NSDictionary* _secrets;
	NSString* _type;
	NSString* _userDescription;
	NSString* _viewHint;

}

@property (nonatomic,copy) NSString * accessGroup;                      //@synthesize accessGroup=_accessGroup - In the implementation block
@property (assign,nonatomic) int accessibleType;                        //@synthesize accessibleType=_accessibleType - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateCreated;               //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateModified;              //@synthesize dateModified=_dateModified - In the implementation block
@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL invisible;                            //@synthesize invisible=_invisible - In the implementation block
@property (assign,nonatomic) BOOL legacy;                               //@synthesize legacy=_legacy - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                     //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSArray * removedMetadata;                   //@synthesize removedMetadata=_removedMetadata - In the implementation block
@property (nonatomic,copy) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSData * persistentRef;                      //@synthesize persistentRef=_persistentRef - In the implementation block
@property (nonatomic,copy) NSDictionary * secrets;                      //@synthesize secrets=_secrets - In the implementation block
@property (assign,nonatomic) int syncType;                              //@synthesize syncType=_syncType - In the implementation block
@property (nonatomic,copy) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * userDescription;                  //@synthesize userDescription=_userDescription - In the implementation block
@property (nonatomic,copy) NSString * viewHint;                         //@synthesize viewHint=_viewHint - In the implementation block
-(unsigned)updateWithRPIdentity:(id)arg1 revisionUpdate:(BOOL)arg2 error:(id*)arg3 ;
-(unsigned)updateWithRPIdentity:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(NSString *)name;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLegacy:(BOOL)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(int)syncType;
-(id)descriptionWithLevel:(int)arg1 ;
-(BOOL)isEqualToKeychainItem:(id)arg1 flags:(unsigned)arg2 ;
-(id)_attributesDictionaryWithFlags:(unsigned)arg1 error:(id*)arg2 ;
-(void)_mergeItem:(id)arg1 ;
-(BOOL)_updateWithAttributesDictionary:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(int)accessibleType;
-(void)setAccessibleType:(int)arg1 ;
-(NSDate *)dateCreated;
-(NSDate *)dateModified;
-(BOOL)invisible;
-(void)setInvisible:(BOOL)arg1 ;
-(BOOL)legacy;
-(NSArray *)removedMetadata;
-(void)setRemovedMetadata:(NSArray *)arg1 ;
-(NSData *)persistentRef;
-(void)setPersistentRef:(NSData *)arg1 ;
-(NSDictionary *)secrets;
-(void)setSecrets:(NSDictionary *)arg1 ;
-(void)setSyncType:(int)arg1 ;
-(NSString *)userDescription;
-(void)setUserDescription:(NSString *)arg1 ;
-(NSString *)viewHint;
-(void)setViewHint:(NSString *)arg1 ;
@end

