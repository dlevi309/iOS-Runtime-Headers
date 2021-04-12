/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VUIDocumentCreator, VUIWidgetCreator;
#import <VideosUI/VideosUI-Structs.h>
@class NSObject;

@interface VUIInterfaceFactory : NSObject {

	struct {
		BOOL respondsToViewControllerCreation;
	}  _documentCreatorFlags;
	NSObject*<VUIDocumentCreator> _documentCreator;
	NSObject*<VUIWidgetCreator> _widgetCreator;

}

@property (nonatomic,retain) NSObject*<VUIDocumentCreator> documentCreator;              //@synthesize documentCreator=_documentCreator - In the implementation block
@property (nonatomic,retain) NSObject*<VUIWidgetCreator> widgetCreator;                  //@synthesize widgetCreator=_widgetCreator - In the implementation block
+(id)sharedInstance;
-(id)viewControllerWithDocumentDataSource:(id)arg1 appContext:(id)arg2 ;
-(NSObject*<VUIWidgetCreator>)widgetCreator;
-(id)viewControllerWithDocumentDataSource:(id)arg1 appContext:(id)arg2 viewElement:(id)arg3 documentOptions:(id)arg4 ;
-(NSObject*<VUIDocumentCreator>)documentCreator;
-(void)setDocumentCreator:(NSObject*<VUIDocumentCreator>)arg1 ;
-(id)accountSettingsViewController;
-(void)setWidgetCreator:(NSObject*<VUIWidgetCreator>)arg1 ;
@end

