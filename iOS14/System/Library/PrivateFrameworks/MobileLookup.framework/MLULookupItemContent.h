/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
*/


#import <MobileLookup/MobileLookup-Structs.h>
@class UIViewController, NSURL, CNContact;

@interface MLULookupItemContent : NSObject {

	BOOL _valid;
	UIViewController* _previewViewController;
	unsigned long long _commitType;
	UIViewController* _commitViewController;
	NSURL* _commitURL;

}

@property (assign,nonatomic) unsigned long long commitType;                         //@synthesize commitType=_commitType - In the implementation block
@property (nonatomic,retain) UIViewController * commitViewController;               //@synthesize commitViewController=_commitViewController - In the implementation block
@property (nonatomic,retain) NSURL * commitURL;                                     //@synthesize commitURL=_commitURL - In the implementation block
@property (assign) BOOL valid;                                                      //@synthesize valid=_valid - In the implementation block
@property (nonatomic,retain) UIViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (nonatomic,readonly) CNContact * contact; 
+(id)contentWithURL:(id)arg1 result:(DDResultRef)arg2 documentProperties:(id)arg3 ;
+(id)contentWithAttachments:(id)arg1 currentAttachmentIndex:(unsigned long long)arg2 ;
+(id)contentWithText:(id)arg1 range:(NSRange)arg2 ;
-(id)children;
-(void)setValid:(BOOL)arg1 ;
-(CNContact *)contact;
-(unsigned long long)commitType;
-(BOOL)valid;
-(void)dismissViewController;
-(void)setPreviewViewController:(UIViewController *)arg1 ;
-(UIViewController *)previewViewController;
-(id)requiredEntitlements;
-(void)setCommitURL:(NSURL *)arg1 ;
-(NSURL *)commitURL;
-(BOOL)wantsSeamlessCommit;
-(void)setupViewControllerInCommitMode;
-(BOOL)commitPreviewInController:(id)arg1 ;
-(void)setCommitType:(unsigned long long)arg1 ;
-(UIViewController *)commitViewController;
-(void)setCommitViewController:(UIViewController *)arg1 ;
@end

