/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface UISDActivityItemData : NSObject <NSSecureCoding> {

	NSArray* _securityContexts;
	NSDictionary* _openURLAnnotationsByURL;
	NSMutableDictionary* _attachmentNamesByItem;
	NSMutableDictionary* _subjectsByItem;
	NSMutableDictionary* _previewImagesByItem;
	NSMutableDictionary* _previewImageDataByItem;
	NSMutableDictionary* _dataTypesByItem;

}

@property (nonatomic,readonly) NSMutableDictionary * attachmentNamesByItem;               //@synthesize attachmentNamesByItem=_attachmentNamesByItem - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * subjectsByItem;                      //@synthesize subjectsByItem=_subjectsByItem - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * previewImagesByItem;                 //@synthesize previewImagesByItem=_previewImagesByItem - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * previewImageDataByItem;              //@synthesize previewImageDataByItem=_previewImageDataByItem - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * dataTypesByItem;                     //@synthesize dataTypesByItem=_dataTypesByItem - In the implementation block
@property (nonatomic,retain) NSArray * securityContexts;                                  //@synthesize securityContexts=_securityContexts - In the implementation block
@property (nonatomic,retain) NSDictionary * openURLAnnotationsByURL;                      //@synthesize openURLAnnotationsByURL=_openURLAnnotationsByURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addAttachmentName:(id)arg1 forItem:(id)arg2 ;
-(void)addSubject:(id)arg1 forItem:(id)arg2 ;
-(void)addPreviewImageData:(id)arg1 forItem:(id)arg2 ;
-(void)addPreviewImage:(id)arg1 forItem:(id)arg2 ;
-(void)addDataType:(id)arg1 forItem:(id)arg2 ;
-(void)setSecurityContexts:(NSArray *)arg1 ;
-(void)setOpenURLAnnotationsByURL:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)attachmentNamesByItem;
-(NSMutableDictionary *)subjectsByItem;
-(NSMutableDictionary *)previewImagesByItem;
-(NSMutableDictionary *)previewImageDataByItem;
-(NSMutableDictionary *)dataTypesByItem;
-(NSDictionary *)openURLAnnotationsByURL;
-(NSArray *)securityContexts;
-(id)attachmentNameForItem:(id)arg1 ;
-(id)subjectForItem:(id)arg1 ;
-(id)previewImageForItem:(id)arg1 ;
-(id)previewImageDataForItem:(id)arg1 ;
-(id)dataTypeForItem:(id)arg1 ;
@end

