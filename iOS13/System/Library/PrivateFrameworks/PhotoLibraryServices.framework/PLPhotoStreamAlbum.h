/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedAlbum.h>

@class NSString;

@interface PLPhotoStreamAlbum : PLManagedAlbum

@property (nonatomic,retain) NSString * personID; 
+(id)entityName;
+(id)photoStreamAlbumWithStreamID:(id)arg1 inPhotoLibrary:(id)arg2 createIfNeeded:(BOOL)arg3 ;
+(id)keyPathsForValuesAffectingPersonID;
-(void)awakeFromInsert;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(void)addAssetOrderedByDataTaken:(id)arg1 ;
-(BOOL)shouldDeleteWhenEmpty;
-(void)enforceImageLimitIfNecessary;
@end

