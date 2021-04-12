/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol QLItemThumbnailGeneratorProtocolInternal;
@class NSString, UIColor, NSNumber, QLItem, NSDictionary;

@interface QLPreviewContext : NSObject <NSSecureCoding> {

	BOOL _canBeEdited;
	BOOL _canBeShared;
	id<QLItemThumbnailGeneratorProtocolInternal> _thumbnailGenerator;
	NSString* _previewTitle;
	NSString* _contentType;
	unsigned long long _editedFileBehavior;
	NSString* _password;
	unsigned long long _previewItemType;
	UIColor* _backgroundColor;
	NSNumber* _itemSize;
	long long _processIdentifier;
	QLItem* _item;
	NSDictionary* _clientPreviewOptions;

}

@property (retain) id<QLItemThumbnailGeneratorProtocolInternal> thumbnailGenerator;              //@synthesize thumbnailGenerator=_thumbnailGenerator - In the implementation block
@property (retain) NSString * previewTitle;                                                      //@synthesize previewTitle=_previewTitle - In the implementation block
@property (retain) NSString * contentType;                                                       //@synthesize contentType=_contentType - In the implementation block
@property (assign) BOOL canBeEdited;                                                             //@synthesize canBeEdited=_canBeEdited - In the implementation block
@property (assign) BOOL canBeShared;                                                             //@synthesize canBeShared=_canBeShared - In the implementation block
@property (assign) unsigned long long editedFileBehavior;                                        //@synthesize editedFileBehavior=_editedFileBehavior - In the implementation block
@property (assign) unsigned long long previewItemType;                                           //@synthesize previewItemType=_previewItemType - In the implementation block
@property (retain) UIColor * backgroundColor;                                                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (retain) NSNumber * itemSize;                                                          //@synthesize itemSize=_itemSize - In the implementation block
@property (assign) long long processIdentifier;                                                  //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (retain) QLItem * item;                                                                //@synthesize item=_item - In the implementation block
@property (retain) NSDictionary * clientPreviewOptions;                                          //@synthesize clientPreviewOptions=_clientPreviewOptions - In the implementation block
@property (copy) NSString * password;                                                            //@synthesize password=_password - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(long long)processIdentifier;
-(QLItem *)item;
-(void)setItem:(QLItem *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(BOOL)canBeEdited;
-(NSNumber *)itemSize;
-(void)setItemSize:(NSNumber *)arg1 ;
-(void)setProcessIdentifier:(long long)arg1 ;
-(BOOL)canBeShared;
-(unsigned long long)previewItemType;
-(NSString *)previewTitle;
-(id<QLItemThumbnailGeneratorProtocolInternal>)thumbnailGenerator;
-(void)setCanBeEdited:(BOOL)arg1 ;
-(void)setEditedFileBehavior:(unsigned long long)arg1 ;
-(void)setCanBeShared:(BOOL)arg1 ;
-(unsigned long long)editedFileBehavior;
-(NSDictionary *)clientPreviewOptions;
-(void)setThumbnailGenerator:(id<QLItemThumbnailGeneratorProtocolInternal>)arg1 ;
-(void)setPreviewTitle:(NSString *)arg1 ;
-(void)setPreviewItemType:(unsigned long long)arg1 ;
-(void)setClientPreviewOptions:(NSDictionary *)arg1 ;
@end

