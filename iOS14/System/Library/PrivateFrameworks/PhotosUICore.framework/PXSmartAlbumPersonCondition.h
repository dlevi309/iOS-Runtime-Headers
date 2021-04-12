/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, NSString;

@interface PXSmartAlbumPersonCondition : PXSmartAlbumCondition {

	NSArray* _personNames;

}

@property (nonatomic,readonly) NSArray * personNames; 
@property (nonatomic,retain) NSString * personName; 
+(id)defaultSingleQueryForEditingContext:(id)arg1 ;
-(NSString *)personName;
-(NSArray *)personNames;
-(void)setPersonName:(NSString *)arg1 ;
@end

