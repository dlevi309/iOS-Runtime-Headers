/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedAlbum.h>

@class NSString;

@interface PLPhotoStreamAlbum : PLManagedAlbum

@property (nonatomic,retain) NSString * personID; 
+(id)entityName;
+(id)keyPathsForValuesAffectingPersonID;
+(id)photoStreamAlbumWithStreamID:(id)arg1 inPhotoLibrary:(id)arg2 createIfNeeded:(BOOL)arg3 ;
-(void)awakeFromInsert;
-(BOOL)shouldDeleteWhenEmpty;
-(void)addAssetOrderedByDataTaken:(id)arg1 ;
-(void)enforceImageLimitIfNecessary;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
@end

