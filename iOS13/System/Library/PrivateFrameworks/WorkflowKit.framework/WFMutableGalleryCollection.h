/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFGalleryCollection.h>

@class CKRecordID, NSString, NSArray, NSDate;

@interface WFMutableGalleryCollection : WFGalleryCollection {

	CKRecordID* identifier;
	NSString* name;
	NSString* collectionDescription;
	NSArray* workflows;
	NSDate* modifiedAt;
	NSString* language;
	CKRecordID* base;
	NSString* persistentIdentifier;

}

@property (nonatomic,copy) CKRecordID * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * collectionDescription; 
@property (nonatomic,copy) NSArray * workflows; 
@property (nonatomic,retain) NSDate * modifiedAt; 
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
-(void)setCollectionDescription:(NSString *)arg1 ;
-(NSString *)collectionDescription;
-(void)setModifiedAt:(NSDate *)arg1 ;
-(NSArray *)workflows;
-(NSDate *)modifiedAt;
-(void)setWorkflows:(NSArray *)arg1 ;
@end

