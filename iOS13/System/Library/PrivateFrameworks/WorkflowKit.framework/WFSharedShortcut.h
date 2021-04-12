/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFCloudKitItem.h>
#import <libobjc.A.dylib/WFLoggableObject.h>

@class CKRecordID, NSString, WFWorkflowRecord, NSDate, NSNumber, WFFileRepresentation, WFWorkflowIcon, NSDictionary;

@interface WFSharedShortcut : NSObject <WFCloudKitItem, WFLoggableObject> {

	CKRecordID* _identifier;
	NSString* _name;
	WFWorkflowRecord* _workflowRecord;
	NSDate* _createdAt;
	NSString* _createdBy;
	NSNumber* _iconColor;
	NSNumber* _iconGlyph;
	WFFileRepresentation* _shortcutFile;
	WFFileRepresentation* _iconFile;

}

@property (nonatomic,retain) NSNumber * iconColor;                                    //@synthesize iconColor=_iconColor - In the implementation block
@property (nonatomic,retain) NSNumber * iconGlyph;                                    //@synthesize iconGlyph=_iconGlyph - In the implementation block
@property (nonatomic,retain) WFFileRepresentation * shortcutFile;                     //@synthesize shortcutFile=_shortcutFile - In the implementation block
@property (nonatomic,retain) WFFileRepresentation * iconFile;                         //@synthesize iconFile=_iconFile - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) WFWorkflowIcon * icon; 
@property (nonatomic,retain) WFWorkflowRecord * workflowRecord;                       //@synthesize workflowRecord=_workflowRecord - In the implementation block
@property (nonatomic,readonly) NSDate * createdAt;                                    //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) NSString * createdBy;                                  //@synthesize createdBy=_createdBy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CKRecordID * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * propertiesForEventLogging; 
+(id)properties;
+(id)recordType;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(CKRecordID *)identifier;
-(WFWorkflowIcon *)icon;
-(void)setIcon:(WFWorkflowIcon *)arg1 ;
-(NSNumber *)iconColor;
-(void)setIconColor:(NSNumber *)arg1 ;
-(NSDate *)createdAt;
-(id)sharingURL;
-(NSString *)createdBy;
-(NSNumber *)iconGlyph;
-(void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3 ;
-(void)ensureFileAssets;
-(NSDictionary *)propertiesForEventLogging;
-(WFWorkflowRecord *)workflowRecord;
-(WFFileRepresentation *)shortcutFile;
-(WFFileRepresentation *)iconFile;
-(void)setIconGlyph:(NSNumber *)arg1 ;
-(void)setWorkflowRecord:(WFWorkflowRecord *)arg1 ;
-(void)setShortcutFile:(WFFileRepresentation *)arg1 ;
-(void)setIconFile:(WFFileRepresentation *)arg1 ;
@end

