/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <ShareSheet/UIActivity.h>
#import <libobjc.A.dylib/LSOpenResourceOperationDelegate.h>

@class LSApplicationProxy, NSString;

@interface _SFOpenWithAppUIActivity : UIActivity <LSOpenResourceOperationDelegate> {

	LSApplicationProxy* _appProxy;
	NSString* _filePath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityType;
-(void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2 ;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)_activityImage;
-(void)performActivity;
-(id)initWithApplicationIdentifier:(id)arg1 andFilePath:(id)arg2 ;
@end

