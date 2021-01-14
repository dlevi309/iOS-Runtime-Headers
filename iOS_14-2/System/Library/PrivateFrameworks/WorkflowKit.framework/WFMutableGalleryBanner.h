/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CKRecordID *)base;
-(void)setBase:(CKRecordID *)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)persistentIdentifier;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(CKRecordID *)arg1 ;
-(CKRecordID *)identifier;
-(NSString *)language;
-(CKRecordID *)detailPage;
-(void)setDetailPage:(CKRecordID *)arg1 ;
@end

