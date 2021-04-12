/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFGalleryBanner.h>

@class CKRecordID, NSString;

@interface WFMutableGalleryBanner : WFGalleryBanner {

	CKRecordID* identifier;
	NSString* name;
	CKRecordID* detailPage;
	NSString* language;
	CKRecordID* base;
	NSString* persistentIdentifier;

}

@property (nonatomic,copy) CKRecordID * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) CKRecordID * detailPage; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,retain) CKRecordID * base; 
@property (nonatomic,copy) NSString * persistentIdentifier; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(CKRecordID *)identifier;
-(void)setIdentifier:(CKRecordID *)arg1 ;
-(NSString *)persistentIdentifier;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setBase:(CKRecordID *)arg1 ;
-(CKRecordID *)base;
-(CKRecordID *)detailPage;
-(void)setDetailPage:(CKRecordID *)arg1 ;
@end

