/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSDictionary, NSDate;

@interface PLQuestion : PLManagedObject

@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSString * entityIdentifier; 
@property (assign,nonatomic) unsigned short type; 
@property (assign,nonatomic) unsigned short state; 
@property (assign,nonatomic) unsigned short entityType; 
@property (assign,nonatomic) unsigned short displayType; 
@property (assign,nonatomic) double score; 
@property (nonatomic,retain) NSDictionary * additionalInfo; 
@property (nonatomic,retain) NSDate * creationDate; 
+(id)entityName;
+(id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 ;
-(void)delete;
@end

