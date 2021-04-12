/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFGalleryPage.h>

@class CKRecordID, NSString, NSNumber, NSArray;

@interface WFMutableGalleryPage : WFGalleryPage {

	CKRecordID* identifier;
	NSString* name;
	NSNumber* minVersion;
	NSNumber* isRoot;
	NSArray* banners;
	NSArray* collections;
	NSArray* routines;
	NSString* language;
	CKRecordID* base;
	NSString* persistentIdentifier;
	NSArray* donations;
	NSArray* donationsGroupedByApp;

}

@property (nonatomic,copy) CKRecordID * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSNumber * minVersion; 
@property (nonatomic,copy) NSNumber * isRoot; 
@property (nonatomic,copy) NSArray * banners; 
@property (nonatomic,copy) NSArray * collections; 
@property (nonatomic,copy) NSArray * routines; 
@property (nonatomic,copy) NSArray * donations; 
@property (nonatomic,copy) NSArray * donationsGroupedByApp; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,retain) CKRecordID * base; 
@property (nonatomic,copy) NSString * persistentIdentifier; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(CKRecordID *)identifier;
-(void)setIdentifier:(CKRecordID *)arg1 ;
-(NSString *)persistentIdentifier;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(NSNumber *)isRoot;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSArray *)banners;
-(void)setBanners:(NSArray *)arg1 ;
-(void)setBase:(CKRecordID *)arg1 ;
-(CKRecordID *)base;
-(NSArray *)collections;
-(void)setCollections:(NSArray *)arg1 ;
-(NSNumber *)minVersion;
-(void)setMinVersion:(NSNumber *)arg1 ;
-(NSArray *)routines;
-(NSArray *)donations;
-(NSArray *)donationsGroupedByApp;
-(void)setDonationsGroupedByApp:(NSArray *)arg1 ;
-(void)setDonations:(NSArray *)arg1 ;
-(void)setRoutines:(NSArray *)arg1 ;
-(void)setIsRoot:(NSNumber *)arg1 ;
@end

