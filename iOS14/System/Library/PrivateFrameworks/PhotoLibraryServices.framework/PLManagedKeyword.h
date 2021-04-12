/*
* Generated on Thursday, January 14, 2021 at 2:22:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)payloadID;
-(id)payloadForChangedKeys:(id)arg1 ;
-(void)awakeFromInsert;
-(id)payloadIDForTombstone:(id)arg1 ;
@end

