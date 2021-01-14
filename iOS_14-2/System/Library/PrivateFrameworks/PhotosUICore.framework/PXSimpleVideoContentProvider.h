/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXVideoContentProvider.h>

@class PXVideoContentProviderLoadingResult, NSString;

@interface PXSimpleVideoContentProvider : PXVideoContentProvider {

	PXVideoContentProviderLoadingResult* _loadingResult;
	NSString* _contentIdentifier;
	double _loadingProgress;

}
-(id)init;
-(void)beginLoadingWithPriority:(long long)arg1 ;
-(id)contentIdentifier;
-(double)loadingProgress;
-(id)description;
-(id)loadingResult;
-(id)initWithPlayerItem:(id)arg1 contentIdentifier:(id)arg2 ;
-(void)setLoadingResult:(id)arg1 ;
-(void)setLoadingProgress:(double)arg1 ;
@end

