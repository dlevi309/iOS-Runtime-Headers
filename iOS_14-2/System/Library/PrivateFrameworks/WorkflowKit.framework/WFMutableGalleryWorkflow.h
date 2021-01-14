/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFGalleryWorkflow.h>

@class CKRecordID, NSString, NSNumber, NSArray, WFWorkflowRecord, NSDate, WFFileRepresentation, WFWorkflowIcon;

@interface WFMutableGalleryWorkflow : WFGalleryWorkflow {

	CKRecordID* identifier;
	NSString* name;
	NSString* shortDescription;
	NSString* longDescription;
	NSNumber* searchable;
	long long minVersion;
	NSArray* hiddenRegions;
	WFWorkflowRecord* workflowRecord;
	NSDate* createdAt;
	NSDate* modifiedAt;
	NSString* language;
	CKRecordID* base;
	NSString* persistentIdentifier;
	WFFileRepresentation* shortcutFile;
	WFFileRepresentation* iconFile;

}

@property (nonatomic,copy) CKRecordID * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * shortDescription; 
@property (nonatomic,copy) NSString * longDescription; 
@property (nonatomic,retain) WFWorkflowIcon * icon; 
@property (nonatomic,retain) WFWorkflowRecord * workflowRecord; 
@property (nonatomic,retain) NSNumber * searchable; 
@property (assign,nonatomic) long long minVersion; 
@property (nonatomic,retain) NSArray * hiddenRegions; 
@property (nonatomic,retain) NSDate * createdAt; 
@property (nonatomic,retain) NSDate * modifiedAt; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,retain) CKRecordID * base; 
@property (nonatomic,copy) NSString * persistentIdentifier; 
@property (nonatomic,retain) WFFileRepresentation * shortcutFile; 
@property (nonatomic,retain) WFFileRepresentation * iconFile; 
-(CKRecordID *)base;
-(void)setCreatedAt:(NSDate *)arg1 ;
-(NSDate *)createdAt;
-(void)setBase:(CKRecordID *)arg1 ;
-(void)setSearchable:(NSNumber *)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)shortDescription;
-(void)setShortDescription:(NSString *)arg1 ;
-(void)setIcon:(WFWorkflowIcon *)arg1 ;
-(void)setLongDescription:(NSString *)arg1 ;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)longDescription;
-(NSString *)persistentIdentifier;
-(long long)minVersion;
-(void)setMinVersion:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(CKRecordID *)arg1 ;
-(CKRecordID *)identifier;
-(NSString *)language;
-(WFWorkflowRecord *)workflowRecord;
-(NSDate *)modifiedAt;
-(void)setModifiedAt:(NSDate *)arg1 ;
-(NSNumber *)searchable;
-(NSArray *)hiddenRegions;
-(WFFileRepresentation *)shortcutFile;
-(WFFileRepresentation *)iconFile;
-(void)setShortcutFile:(WFFileRepresentation *)arg1 ;
-(void)setWorkflowRecord:(WFWorkflowRecord *)arg1 ;
-(void)setIconFile:(WFFileRepresentation *)arg1 ;
-(void)setHiddenRegions:(NSArray *)arg1 ;
@end

