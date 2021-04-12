/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSString, NSData, NSArray, NSDictionary;

@interface CRKAirDropTransferInfo : NSObject {

	BOOL _autoAccept;
	BOOL _hideProgress;
	NSString* _senderName;
	NSData* _previewImageData;
	NSString* _bundleID;
	NSArray* _items;
	NSArray* _files;
	NSString* _sourceBundleIdentifier;
	NSString* _itemsDescription;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (assign,nonatomic) BOOL autoAccept;                                             //@synthesize autoAccept=_autoAccept - In the implementation block
@property (assign,nonatomic) BOOL hideProgress;                                           //@synthesize hideProgress=_hideProgress - In the implementation block
@property (nonatomic,copy) NSString * senderName;                                         //@synthesize senderName=_senderName - In the implementation block
@property (nonatomic,copy) NSData * previewImageData;                                     //@synthesize previewImageData=_previewImageData - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSArray * items;                                               //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSArray * files;                                               //@synthesize files=_files - In the implementation block
@property (nonatomic,copy) NSString * sourceBundleIdentifier;                             //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * itemsDescription;                                   //@synthesize itemsDescription=_itemsDescription - In the implementation block
-(id)description;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)addItems:(id)arg1 ;
-(void)addFiles:(id)arg1 ;
-(NSArray *)files;
-(void)setFiles:(NSArray *)arg1 ;
-(void)setHideProgress:(BOOL)arg1 ;
-(void)setItemsDescription:(NSString *)arg1 ;
-(NSString *)itemsDescription;
-(BOOL)hideProgress;
-(NSData *)previewImageData;
-(void)setPreviewImageData:(NSData *)arg1 ;
-(void)setSourceBundleIdentifier:(NSString *)arg1 ;
-(NSString *)sourceBundleIdentifier;
-(NSString *)senderName;
-(void)setSenderName:(NSString *)arg1 ;
-(BOOL)autoAccept;
-(void)setAutoAccept:(BOOL)arg1 ;
@end

