/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <libobjc.A.dylib/QLPreviewItem.h>

@class NSURL, NSString;

@interface _UIDICPreviewItem : NSObject <QLPreviewItem> {

	NSURL* _URL;
	NSURL* _previewURLOverride;
	NSString* _name;
	NSURL* _URLsToDeleteOnDealloc;
	NSString* _previewItemContentType;
	NSURL* _URLToDeleteOnDealloc;
	NSURL* _previewItemURLForDisplay;

}

@property (nonatomic,retain) NSURL * previewItemURL;                         //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSURL * previewItemURLOverride;                 //@synthesize previewURLOverride=_previewURLOverride - In the implementation block
@property (nonatomic,retain) NSURL * previewItemURLForDisplay;               //@synthesize previewItemURLForDisplay=_previewItemURLForDisplay - In the implementation block
@property (nonatomic,retain) NSString * previewItemTitle;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * previewItemContentType; 
@property (nonatomic,retain) NSURL * URLToDeleteOnDealloc;                   //@synthesize URLToDeleteOnDealloc=_URLToDeleteOnDealloc - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)previewItemURLOverride;
-(NSString *)previewItemContentType;
-(void)setPreviewItemContentType:(NSString *)arg1 ;
-(id)_primitive_previewItemContentType;
-(NSURL *)previewItemURLForDisplay;
-(void)setPreviewItemURLOverride:(NSURL *)arg1 ;
-(NSURL *)URLToDeleteOnDealloc;
-(void)setURLToDeleteOnDealloc:(NSURL *)arg1 ;
-(void)setPreviewItemURLForDisplay:(NSURL *)arg1 ;
-(NSString *)previewItemTitle;
-(NSURL *)previewItemURL;
-(void)setPreviewItemURL:(NSURL *)arg1 ;
-(void)setPreviewItemTitle:(NSString *)arg1 ;
-(void)dealloc;
@end

