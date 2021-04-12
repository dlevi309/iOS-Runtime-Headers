/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
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
-(long long)currentOrientation;
-(id)init;
-(id<ICDocCamViewControllerDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMetaData:(NSDictionary *)arg1 ;
-(void)setDelegate:(id<ICDocCamViewControllerDelegate>)arg1 ;
-(id)description;
-(id)initWithDelegate:(id)arg1 ;
-(NSDictionary *)metaData;
-(BOOL)hasFilter;
-(id)allUUIDs;
-(id)initWithCoder:(id)arg1 ;
-(void)setMarkupModelData:(NSData *)arg1 ;
-(NSData *)markupModelData;
-(short)currentFilter;
-(void)setCurrentFilter:(short)arg1 ;
-(void)setCurrentOrientation:(long long)arg1 ;
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

