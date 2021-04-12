/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString, EDAMLazyMap, NSDictionary;

@interface EDAMNoteAttributes : FATObject {

	NSNumber* _subjectDate;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _altitude;
	NSString* _author;
	NSString* _source;
	NSString* _sourceURL;
	NSString* _sourceApplication;
	NSNumber* _shareDate;
	NSNumber* _reminderOrder;
	NSNumber* _reminderDoneTime;
	NSNumber* _reminderTime;
	NSString* _placeName;
	NSString* _contentClass;
	EDAMLazyMap* _applicationData;
	NSString* _lastEditedBy;
	NSDictionary* _classifications;
	NSNumber* _creatorId;
	NSNumber* _lastEditorId;
	NSNumber* _sharedWithBusiness;
	NSString* _conflictSourceNoteGuid;
	NSNumber* _noteTitleQuality;

}

@property (nonatomic,retain) NSNumber * subjectDate;                         //@synthesize subjectDate=_subjectDate - In the implementation block
@property (nonatomic,retain) NSNumber * latitude;                            //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,retain) NSNumber * longitude;                           //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,retain) NSNumber * altitude;                            //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,retain) NSString * author;                              //@synthesize author=_author - In the implementation block
@property (nonatomic,retain) NSString * source;                              //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSString * sourceURL;                           //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,retain) NSString * sourceApplication;                   //@synthesize sourceApplication=_sourceApplication - In the implementation block
@property (nonatomic,retain) NSNumber * shareDate;                           //@synthesize shareDate=_shareDate - In the implementation block
@property (nonatomic,retain) NSNumber * reminderOrder;                       //@synthesize reminderOrder=_reminderOrder - In the implementation block
@property (nonatomic,retain) NSNumber * reminderDoneTime;                    //@synthesize reminderDoneTime=_reminderDoneTime - In the implementation block
@property (nonatomic,retain) NSNumber * reminderTime;                        //@synthesize reminderTime=_reminderTime - In the implementation block
@property (nonatomic,retain) NSString * placeName;                           //@synthesize placeName=_placeName - In the implementation block
@property (nonatomic,retain) NSString * contentClass;                        //@synthesize contentClass=_contentClass - In the implementation block
@property (nonatomic,retain) EDAMLazyMap * applicationData;                  //@synthesize applicationData=_applicationData - In the implementation block
@property (nonatomic,retain) NSString * lastEditedBy;                        //@synthesize lastEditedBy=_lastEditedBy - In the implementation block
@property (nonatomic,retain) NSDictionary * classifications;                 //@synthesize classifications=_classifications - In the implementation block
@property (nonatomic,retain) NSNumber * creatorId;                           //@synthesize creatorId=_creatorId - In the implementation block
@property (nonatomic,retain) NSNumber * lastEditorId;                        //@synthesize lastEditorId=_lastEditorId - In the implementation block
@property (nonatomic,retain) NSNumber * sharedWithBusiness;                  //@synthesize sharedWithBusiness=_sharedWithBusiness - In the implementation block
@property (nonatomic,retain) NSString * conflictSourceNoteGuid;              //@synthesize conflictSourceNoteGuid=_conflictSourceNoteGuid - In the implementation block
@property (nonatomic,retain) NSNumber * noteTitleQuality;                    //@synthesize noteTitleQuality=_noteTitleQuality - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setSourceURL:(NSString *)arg1 ;
-(NSNumber *)latitude;
-(void)setAltitude:(NSNumber *)arg1 ;
-(NSString *)sourceURL;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(NSNumber *)altitude;
-(NSString *)sourceApplication;
-(NSNumber *)longitude;
-(void)setLongitude:(NSNumber *)arg1 ;
-(void)setApplicationData:(EDAMLazyMap *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setSourceApplication:(NSString *)arg1 ;
-(void)setPlaceName:(NSString *)arg1 ;
-(NSString *)placeName;
-(EDAMLazyMap *)applicationData;
-(NSNumber *)shareDate;
-(NSDictionary *)classifications;
-(void)setClassifications:(NSDictionary *)arg1 ;
-(NSString *)source;
-(NSNumber *)lastEditorId;
-(void)setLastEditorId:(NSNumber *)arg1 ;
-(NSNumber *)subjectDate;
-(void)setSubjectDate:(NSNumber *)arg1 ;
-(void)setShareDate:(NSNumber *)arg1 ;
-(NSNumber *)reminderOrder;
-(void)setReminderOrder:(NSNumber *)arg1 ;
-(NSNumber *)reminderDoneTime;
-(void)setReminderDoneTime:(NSNumber *)arg1 ;
-(NSNumber *)reminderTime;
-(void)setReminderTime:(NSNumber *)arg1 ;
-(NSString *)contentClass;
-(void)setContentClass:(NSString *)arg1 ;
-(NSString *)lastEditedBy;
-(void)setLastEditedBy:(NSString *)arg1 ;
-(NSNumber *)creatorId;
-(void)setCreatorId:(NSNumber *)arg1 ;
-(NSNumber *)sharedWithBusiness;
-(void)setSharedWithBusiness:(NSNumber *)arg1 ;
-(NSString *)conflictSourceNoteGuid;
-(void)setConflictSourceNoteGuid:(NSString *)arg1 ;
-(NSNumber *)noteTitleQuality;
-(void)setNoteTitleQuality:(NSNumber *)arg1 ;
@end

