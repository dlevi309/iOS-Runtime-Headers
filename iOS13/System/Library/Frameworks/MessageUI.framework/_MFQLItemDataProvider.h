/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <libobjc.A.dylib/QLPreviewItemDataProvider.h>

@class NSData, QLItem, NSString;

@interface _MFQLItemDataProvider : NSObject <QLPreviewItemDataProvider> {

	NSData* _data;
	QLItem* _item;

}

@property (nonatomic,readonly) QLItem * item;                       //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(QLItem *)item;
-(id)provideDataForItem:(id)arg1 ;
-(id)initWithData:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 ;
@end

