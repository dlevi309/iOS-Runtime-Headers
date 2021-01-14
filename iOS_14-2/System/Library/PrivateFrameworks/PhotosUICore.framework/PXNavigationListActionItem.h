/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXNavigationListItem.h>

@class NSString;

@interface PXNavigationListActionItem : PXNavigationListItem {

	NSString* _glyphImageName;
	NSString* _actionIdentifier;
	long long _style;

}

@property (nonatomic,readonly) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
-(unsigned long long)hash;
-(NSString *)actionIdentifier;
-(id)initWithActionType:(id)arg1 ;
-(BOOL)isEqualToNavigationListItem:(id)arg1 ;
-(id)titleForActionIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)glyphImageName;
-(long long)style;
-(id)representedObject;
@end

