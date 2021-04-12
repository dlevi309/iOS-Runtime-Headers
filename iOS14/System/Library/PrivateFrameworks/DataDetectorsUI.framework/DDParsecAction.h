/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DDPreviewAction.h>
#import <libobjc.A.dylib/DDParsecCollectionDelegate.h>

@class DDParsecCollectionViewController;

@interface DDParsecAction : DDPreviewAction <DDParsecCollectionDelegate> {

	DDParsecCollectionViewController* _parsecViewController;
	BOOL _previewMode;

}
-(id)localizedName;
-(int)interactionType;
-(id)createViewController;
-(void)dismissParsecCollection:(id)arg1 ;
@end

