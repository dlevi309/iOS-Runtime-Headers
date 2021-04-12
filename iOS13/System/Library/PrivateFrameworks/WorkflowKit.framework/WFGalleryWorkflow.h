/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFCloudKitItem.h>
#import <libobjc.A.dylib/WFLoggableObject.h>
#import <libobjc.A.dylib/WFSortableGalleryObject.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDictionary, WFWorkflowRecord, CKRecordID, NSString, NSNumber, NSDate, WFFileRepresentation, WFWorkflowIcon;

@interface WFGalleryWorkflow : NSObject <WFCloudKitItem, WFLoggableObject, WFSortableGalleryObject, NSMutableCopying> {

	WFWorkflowRecord* _workflowRecord;
	CKRecordID* _identifier;
	NSString* _name;
	NSString* _shortDescription;
	NSString* _longDescription;
	NSNumber* _searchable;
	NSDate* _createdAt;
	NSDate* _modifiedAt;
	NSString* _language;
	CKRecordID* _base;
	NSString* _persistentIdentifier;
	WFFileRepresentation* _shortcutFile;
	WFFileRepresentation* _iconFile;
	NSNumber* _iconColor;
	NSNumber* _iconGlyph;

}

@property (nonatomic,retain) NSNumber * iconColor;                                    //@synthesize iconColor=_iconColor - In the implementation block
@property (nonatomic,retain) NSNumber * iconGlyph;                                    //@synthesize iconGlyph=_iconGlyph - In the implementation block
@property (nonatomic,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * shortDescription;                           //@synthesize shortDescription=_shortDescription - In the implementation block
@property (nonatomic,readonly) NSString * longDescription;                            //@synthesize longDescription=_longDescription - In the implementation block
@property (nonatomic,readonly) WFWorkflowIcon * icon; 
@property (nonatomic,readonly) WFWorkflowRecord * workflowRecord;                     //@synthesize workflowRecord=_workflowRecord - In the implementation block
@property (nonatomic,readonly) NSNumber * searchable;                                 //@synthesize searchable=_searchable - In the implementation block
@property (nonatomic,readonly) NSDate * createdAt;                                    //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) NSDate * modifiedAt;                                   //@synthesize modifiedAt=_modifiedAt - In the implementation block
@property (nonatomic,readonly) NSString * language;                                   //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) CKRecordID * base;                                     //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) NSString * persistentIdentifier;                       //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,readonly) WFFileRepresentation * shortcutFile;                   //@synthesize shortcutFile=_shortcutFile - In the implementation block
@property (nonatomic,readonly) WFFileRepresentation * iconFile;                       //@synthesize iconFile=_iconFile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CKRecordID * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * propertiesForEventLogging; 
+(id)properties;
+(id)recordType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CKRecordID *)identifier;
-(NSString *)persistentIdentifier;
-(NSString *)language;
-(NSString *)shortDescription;
-(WFWorkflowIcon *)icon;
-(NSNumber *)iconColor;
-(void)setIconColor:(NSNumber *)arg1 ;
-(CKRecordID *)base;
-(NSString *)longDescription;
-(NSDate *)createdAt;
-(id)sharingURL;
-(NSNumber *)iconGlyph;
-(unsigned long long)referenceActionForKey:(id)arg1 ;
-(void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3 ;
-(void)ensureFileAssets;
-(NSDate *)modifiedAt;
-(NSDictionary *)propertiesForEventLogging;
-(WFWorkflowRecord *)workflowRecord;
-(NSNumber *)searchable;
-(WFFileRepresentation *)shortcutFile;
-(WFFileRepresentation *)iconFile;
-(void)setIconGlyph:(NSNumber *)arg1 ;
@end

