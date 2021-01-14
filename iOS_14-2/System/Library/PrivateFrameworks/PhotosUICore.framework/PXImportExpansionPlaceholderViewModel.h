/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXImportItemViewModel.h>

@class NSDate;

@interface PXImportExpansionPlaceholderViewModel : PXImportItemViewModel {

	NSDate* _placeholderDate;
	id _placeholderUUID;

}

@property (nonatomic,retain) id placeholderUUID;                      //@synthesize placeholderUUID=_placeholderUUID - In the implementation block
@property (nonatomic,readonly) NSDate * placeholderDate;              //@synthesize placeholderDate=_placeholderDate - In the implementation block
+(id)sharedInstance;
-(id)uuid;
-(id)fileName;
-(id)fileCreationDate;
-(id)description;
-(long long)badgeType;
-(unsigned long long)hash;
-(id)initWithPlaceholderDate:(id)arg1 ;
-(BOOL)isEqualToImportPlaceholderViewModel:(id)arg1 ;
-(NSDate *)placeholderDate;
-(id)placeholderUUID;
-(void)setPlaceholderUUID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

