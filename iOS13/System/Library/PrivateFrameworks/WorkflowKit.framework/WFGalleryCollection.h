/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFCloudKitItem.h>
#import <libobjc.A.dylib/WFSortableGalleryObject.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSDate, CKRecordID, NSArray;

@interface WFGalleryCollection : NSObject <WFCloudKitItem, WFSortableGalleryObject, NSMutableCopying> {

	CKRecordID* _identifier;
	NSString* _name;
	NSString* _collectionDescription;
	NSArray* _workflows;
	NSDate* _modifiedAt;
	NSString* _language;
	CKRecordID* _base;
	NSString* _persistentIdentifier;

}

@property (nonatomic,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * collectionDescription;              //@synthesize collectionDescription=_collectionDescription - In the implementation block
@property (nonatomic,readonly) NSArray * workflows;                           //@synthesize workflows=_workflows - In the implementation block
@property (nonatomic,readonly) NSDate * modifiedAt;                           //@synthesize modifiedAt=_modifiedAt - In the implementation block
@property (nonatomic,readonly) NSString * language;                           //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) CKRecordID * base;                             //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) NSString * persistentIdentifier;               //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CKRecordID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
+(id)properties;
+(id)recordType;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CKRecordID *)identifier;
-(NSString *)persistentIdentifier;
-(NSString *)language;
-(CKRecordID *)base;
-(NSString *)collectionDescription;
-(unsigned long long)referenceActionForKey:(id)arg1 ;
-(void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3 ;
-(NSArray *)workflows;
-(NSDate *)modifiedAt;
@end

