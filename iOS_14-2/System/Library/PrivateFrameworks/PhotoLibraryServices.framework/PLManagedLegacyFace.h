/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

