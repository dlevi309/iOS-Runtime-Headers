/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/QLPreviewControllerConformingDataSource.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>

@class NSArray, NSString;

@interface CKQLPreviewControllerDataSource : NSObject <QLPreviewControllerConformingDataSource, QLPreviewControllerDataSource> {

	NSArray* _previewItems;

}

@property (nonatomic,copy) NSArray * previewItems;                  //@synthesize previewItems=_previewItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)previewItems;
-(void)setPreviewItems:(NSArray *)arg1 ;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
@end

