/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFCloudKitItem.h>
#import <libobjc.A.dylib/WFSortableGalleryObject.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, CKRecordID, NSArray, NSDate, NSData;

@interface WFGalleryCollection : NSObject <WFCloudKitItem, WFSortableGalleryObject, NSMutableCopying> {

	CKRecordID* _identifier;
	NSString* _name;
	NSString* _collectionDescription;
	NSArray* _workflows;
	long long _minVersion;
	NSDate* _modifiedAt;
	NSString* _language;
	CKRecordID* _base;
	NSString* _persistentIdentifier;

}

@property (nonatomic,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * collectionDescription;              //@synthesize collectionDescription=_collectionDescription - In the implementation block
@property (nonatomic,readonly) NSArray * workflows;                           //@synthesize workflows=_workflows - In the implementation block
@property (nonatomic,readonly) long long minVersion;                          //@synthesize minVersion=_minVersion - In the implementation block
@property (nonatomic,readonly) NSDate * modifiedAt;                           //@synthesize modifiedAt=_modifiedAt - In the implementation block
@property (nonatomic,readonly) NSString * language;                           //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) CKRecordID * base;                             //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) NSString * persistentIdentifier;               //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,readonly) CKRecordID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * recordSystemFieldsData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)properties;
+(id)recordType;
-(CKRecordID *)base;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)collectionDescription;
-(NSString *)name;
-(NSString *)persistentIdentifier;
-(long long)minVersion;
-(CKRecordID *)identifier;
-(NSArray *)workflows;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)referenceActionForKey:(id)arg1 ;
-(void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3 ;
-(NSDate *)modifiedAt;
@end

