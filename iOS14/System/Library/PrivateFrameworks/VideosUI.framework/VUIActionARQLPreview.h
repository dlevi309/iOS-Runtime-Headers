/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIAction.h>

@class NSString;

@interface VUIActionARQLPreview : VUIAction {

	NSString* _previewURLString;
	NSString* _shareURLString;

}

@property (nonatomic,retain) NSString * previewURLString;              //@synthesize previewURLString=_previewURLString - In the implementation block
@property (nonatomic,retain) NSString * shareURLString;                //@synthesize shareURLString=_shareURLString - In the implementation block
-(id)initWithContextData:(id)arg1 ;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)previewURLString;
-(void)setPreviewURLString:(NSString *)arg1 ;
-(NSString *)shareURLString;
-(void)setShareURLString:(NSString *)arg1 ;
@end

