/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>
#import <libobjc.A.dylib/CLSContactsSearchable.h>

@class NSString, NSPersonNameComponents, NSArray;

@interface CLSClass : CLSObject <CLSRelationable, CLSContactsSearchable> {

	BOOL _isEditable;
	NSString* _className;
	long long _source;
	NSString* _iconID;
	NSString* _locationID;
	long long _originatingSource;
	NSString* _customClassName;
	NSString* _tempObjectID;
	NSString* _searchText;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * className;                                     //@synthesize className=_className - In the implementation block
@property (nonatomic,copy) NSString * customClassName;                               //@synthesize customClassName=_customClassName - In the implementation block
@property (assign) BOOL isEditable;                                                  //@synthesize isEditable=_isEditable - In the implementation block
@property (nonatomic,copy) NSString * tempObjectID;                                  //@synthesize tempObjectID=_tempObjectID - In the implementation block
@property (assign,nonatomic) long long source;                                       //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) long long originatingSource;                            //@synthesize originatingSource=_originatingSource - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                    //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * groupIdentifier; 
@property (nonatomic,copy) NSString * iconID;                                        //@synthesize iconID=_iconID - In the implementation block
@property (nonatomic,readonly) NSArray * classMembers; 
@property (nonatomic,copy) NSString * locationID;                                    //@synthesize locationID=_locationID - In the implementation block
@property (nonatomic,readonly) NSPersonNameComponents * nameComponents; 
@property (nonatomic,readonly) NSString * emailAddress; 
+(BOOL)supportsSecureCoding;
+(id)relations;
-(void)acceptVisitor:(id)arg1 ;
-(BOOL)isEditable;
-(void)setIsEditable:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)groupIdentifier;
-(NSString *)iconID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)className;
-(void)setSource:(long long)arg1 ;
-(NSString *)description;
-(void)setIconID:(NSString *)arg1 ;
-(void)setClassName:(NSString *)arg1 ;
-(NSString *)searchText;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(void)setLocationID:(NSString *)arg1 ;
-(id)_init;
-(void)mergeWithObject:(id)arg1 ;
-(NSString *)displayName;
-(NSString *)locationID;
-(long long)source;
-(BOOL)validateObject:(id*)arg1 ;
-(NSString *)customClassName;
-(long long)originatingSource;
-(id)initWithLocation:(id)arg1 customName:(id)arg2 ;
-(NSArray *)classMembers;
-(void)addPerson:(id)arg1 withRole:(unsigned long long)arg2 ;
-(void)removePerson:(id)arg1 withRole:(unsigned long long)arg2 ;
-(void)setOriginatingSource:(long long)arg1 ;
-(void)setCustomClassName:(NSString *)arg1 ;
-(NSString *)tempObjectID;
-(void)setTempObjectID:(NSString *)arg1 ;
@end

