/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ICDocCamViewControllerDelegate;
@class NSDictionary, ICDocCamImageQuad, NSString, NSData;

@interface ICDocCamDocumentInfo : NSObject <NSSecureCoding> {

	short _currentFilter;
	NSDictionary* _metaData;
	ICDocCamImageQuad* _imageQuad;
	NSString* _croppedAndFilteredImageUUID;
	NSString* _croppedButNotFilteredImageUUID;
	NSString* _fullImageUUID;
	NSString* _meshAnimImageUUID;
	long long _currentOrientation;
	NSString* _scanDataDelegateIdentifier;
	NSData* _markupModelData;
	id<ICDocCamViewControllerDelegate> _delegate;

}

@property (__weak) id<ICDocCamViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDictionary * metaData;                                //@synthesize metaData=_metaData - In the implementation block
@property (nonatomic,retain) ICDocCamImageQuad * imageQuad;                          //@synthesize imageQuad=_imageQuad - In the implementation block
@property (nonatomic,retain) NSString * croppedAndFilteredImageUUID;                 //@synthesize croppedAndFilteredImageUUID=_croppedAndFilteredImageUUID - In the implementation block
@property (nonatomic,retain) NSString * croppedButNotFilteredImageUUID;              //@synthesize croppedButNotFilteredImageUUID=_croppedButNotFilteredImageUUID - In the implementation block
@property (nonatomic,retain) NSString * fullImageUUID;                               //@synthesize fullImageUUID=_fullImageUUID - In the implementation block
@property (nonatomic,retain) NSString * meshAnimImageUUID;                           //@synthesize meshAnimImageUUID=_meshAnimImageUUID - In the implementation block
@property (assign,nonatomic) short currentFilter;                                    //@synthesize currentFilter=_currentFilter - In the implementation block
@property (assign,nonatomic) long long currentOrientation;                           //@synthesize currentOrientation=_currentOrientation - In the implementation block
@property (nonatomic,retain) NSString * scanDataDelegateIdentifier;                  //@synthesize scanDataDelegateIdentifier=_scanDataDelegateIdentifier - In the implementation block
@property (nonatomic,readonly) id<DCScanDataDelegate> scanDataDelegate; 
@property (nonatomic,readonly) BOOL hasFilter; 
@property (nonatomic,retain) NSData * markupModelData;                               //@synthesize markupModelData=_markupModelData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<ICDocCamViewControllerDelegate>)delegate;
-(void)setDelegate:(id<ICDocCamViewControllerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(long long)currentOrientation;
-(BOOL)hasFilter;
-(NSDictionary *)metaData;
-(void)setMetaData:(NSDictionary *)arg1 ;
-(id)allUUIDs;
-(void)setCurrentOrientation:(long long)arg1 ;
-(void)setMarkupModelData:(NSData *)arg1 ;
-(NSData *)markupModelData;
-(short)currentFilter;
-(void)setCurrentFilter:(short)arg1 ;
-(NSString *)fullImageUUID;
-(ICDocCamImageQuad *)imageQuad;
-(void)setScanDataDelegateIdentifier:(NSString *)arg1 ;
-(NSString *)croppedAndFilteredImageUUID;
-(NSString *)croppedButNotFilteredImageUUID;
-(void)setCroppedButNotFilteredImageUUID:(NSString *)arg1 ;
-(void)setCroppedAndFilteredImageUUID:(NSString *)arg1 ;
-(id<DCScanDataDelegate>)scanDataDelegate;
-(NSString *)scanDataDelegateIdentifier;
-(void)setImageQuad:(ICDocCamImageQuad *)arg1 ;
-(void)setFullImageUUID:(NSString *)arg1 ;
-(void)setMeshAnimImageUUID:(NSString *)arg1 ;
-(NSString *)meshAnimImageUUID;
@end

