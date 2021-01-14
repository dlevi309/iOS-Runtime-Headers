/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXInboxModelTitleProvider.h>

@class NSString;

@interface PXSAInboxTitleProvider : NSObject <PXInboxModelTitleProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)workQueue;
+(id)defaultTitleAttributes;
+(id)emphasizedTitleAttributes;
+(id)supportingTextAttributes;
+(id)defaultSubtitleAttributes;
+(void)preloadResources;
-(void)requestTitleAndSubtitleForModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)titleForModel:(id)arg1 ;
-(id)subtitleForModel:(id)arg1 ;
-(id)_titleForCommentWithSectionInfo:(id)arg1 ;
-(id)_titleForLikeWithSectionInfo:(id)arg1 ;
-(id)_titleForCoalescedWithSectionInfo:(id)arg1 ;
-(id)_titleForInvitationResponseWithSectionInfo:(id)arg1 accepted:(BOOL)arg2 ;
@end

