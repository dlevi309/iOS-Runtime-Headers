/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSSet;

@interface PLManagedKeyword : PLManagedObject

@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * shortcut; 
@property (nonatomic,retain) NSSet * assetAttributes; 
+(id)entityName;
+(id)keywordForTitle:(id)arg1 context:(id)arg2 ;
+(id)keywordForUuid:(id)arg1 context:(id)arg2 ;
-(void)awakeFromInsert;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg1 ;
-(id)payloadForChangedKeys:(id)arg1 ;
@end

