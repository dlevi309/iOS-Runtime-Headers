/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VUIDocumentCreator;
#import <VideosUI/VideosUI-Structs.h>
@class NSObject;

@interface VUIInterfaceFactory : NSObject {

	struct {
		BOOL respondsToViewControllerCreation;
	}  _documentCreatorFlags;
	NSObject*<VUIDocumentCreator> _documentCreator;

}

@property (nonatomic,retain) NSObject*<VUIDocumentCreator> documentCreator;              //@synthesize documentCreator=_documentCreator - In the implementation block
+(id)sharedInstance;
-(id)viewControllerWithDocumentDataSource:(id)arg1 appContext:(id)arg2 ;
-(id)viewControllerWithDocumentDataSource:(id)arg1 appContext:(id)arg2 viewElement:(id)arg3 documentOptions:(id)arg4 ;
-(NSObject*<VUIDocumentCreator>)documentCreator;
-(void)setDocumentCreator:(NSObject*<VUIDocumentCreator>)arg1 ;
-(id)accountSettingsViewController;
@end

