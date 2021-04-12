/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

