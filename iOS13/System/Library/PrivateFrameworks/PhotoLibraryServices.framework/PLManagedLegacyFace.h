/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLManagedObject.h>

@class NSValue, PLManagedAsset, NSString;

@interface PLManagedLegacyFace : PLManagedObject

@property (nonatomic,retain) NSValue * relativeRectValue; 
@property (nonatomic,retain) PLManagedAsset * asset; 
@property (assign,nonatomic) CGRect relativeRect; 
@property (assign,nonatomic) short identifier; 
@property (nonatomic,retain) NSString * albumUUID; 
+(id)entityName;
-(void)delete;
-(void)setRelativeRect:(CGRect)arg1 ;
-(CGRect)relativeRect;
@end

