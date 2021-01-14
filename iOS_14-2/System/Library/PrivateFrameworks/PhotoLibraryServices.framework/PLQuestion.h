/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

