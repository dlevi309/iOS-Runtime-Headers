/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithData:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 ;
-(id)provideDataForItem:(id)arg1 ;
@end

