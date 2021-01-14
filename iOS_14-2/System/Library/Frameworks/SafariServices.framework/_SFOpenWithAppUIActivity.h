/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2 ;
-(id)activityType;
-(void)performActivity;
-(id)initWithApplicationIdentifier:(id)arg1 andFilePath:(id)arg2 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)_activityImage;
@end

