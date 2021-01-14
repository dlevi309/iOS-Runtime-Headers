/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFGalleryCollection.h>

@class CKRecordID, NSString, NSArray, NSDate;

@interface WFMutableGalleryCollection : WFGalleryCollection {

	CKRecordID* identifier;
	NSString* name;
	NSString* collectionDescription;
	NSArray* workflows;
	long long minVersion;
	NSDate* modifiedAt;
	NSString* language;
	CKRecordID* base;
	NSString* persistentIdentifier;

}

@property (nonatomic,copy) CKRecordID * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * collectionDescription; 
@property (nonatomic,copy) NSArray * workflows; 
@property (assign,nonatomic) long long minVersion; 
@property (nonatomic,retain) NSDate * modifiedAt; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,retain) CKRecordID * base; 
@property (nonatomic,copy) NSString * persistentIdentifier; 
-(CKRecordID *)base;
-(void)setBase:(CKRecordID *)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)collectionDescription;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)persistentIdentifier;
-(void)setCollectionDescription:(NSString *)arg1 ;
-(long long)minVersion;
-(void)setMinVersion:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(CKRecordID *)arg1 ;
-(CKRecordID *)identifier;
-(NSArray *)workflows;
-(NSString *)language;
-(NSDate *)modifiedAt;
-(void)setWorkflows:(NSArray *)arg1 ;
-(void)setModifiedAt:(NSDate *)arg1 ;
@end

