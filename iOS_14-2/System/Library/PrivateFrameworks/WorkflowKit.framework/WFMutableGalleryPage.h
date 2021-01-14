/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSArray* automationSuggestions;

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
@property (nonatomic,copy) NSArray * automationSuggestions; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,retain) CKRecordID * base; 
@property (nonatomic,copy) NSString * persistentIdentifier; 
-(CKRecordID *)base;
-(NSNumber *)isRoot;
-(NSArray *)banners;
-(void)setBase:(CKRecordID *)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)persistentIdentifier;
-(NSNumber *)minVersion;
-(void)setMinVersion:(NSNumber *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setBanners:(NSArray *)arg1 ;
-(void)setIdentifier:(CKRecordID *)arg1 ;
-(CKRecordID *)identifier;
-(NSArray *)collections;
-(void)setCollections:(NSArray *)arg1 ;
-(NSString *)language;
-(NSArray *)donations;
-(NSArray *)routines;
-(NSArray *)donationsGroupedByApp;
-(NSArray *)automationSuggestions;
-(void)setAutomationSuggestions:(NSArray *)arg1 ;
-(void)setDonationsGroupedByApp:(NSArray *)arg1 ;
-(void)setDonations:(NSArray *)arg1 ;
-(void)setRoutines:(NSArray *)arg1 ;
-(void)setIsRoot:(NSNumber *)arg1 ;
@end

