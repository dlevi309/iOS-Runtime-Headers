/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLItemFetcher.h>

@class NSData, NSString, NSURL, QLItem;

@interface QLDataFetcher : QLItemFetcher {

	NSData* _data;
	NSString* _contentType;
	NSString* _previewItemTitle;
	NSURL* _temporaryURL;
	QLItem* _item;

}
+(BOOL)supportsSecureCoding;
-(id)itemSize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_deleteTempraryFileIfNeeded;
-(void)loadDataIfNeeded;
-(id)_createTemporaryFileIfNeeded;
-(id)_temporaryFilename;
-(id)initWithItem:(id)arg1 contentType:(id)arg2 ;
-(id)initWithData:(id)arg1 contentType:(id)arg2 previewItemTitle:(id)arg3 ;
-(void)prepareShareableItem:(/*^block*/id)arg1 ;
-(id)fetchedContent;
-(id)newItemProvider;
-(id)shareableItem;
-(void)dealloc;
@end

