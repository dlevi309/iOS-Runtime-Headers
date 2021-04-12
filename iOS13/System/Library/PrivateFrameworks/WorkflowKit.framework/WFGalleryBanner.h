/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFCloudKitItem.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class CKRecordID, NSString, WFFileRepresentation;

@interface WFGalleryBanner : NSObject <WFCloudKitItem, NSMutableCopying> {

	CKRecordID* _identifier;
	NSString* _name;
	CKRecordID* _detailPage;
	WFFileRepresentation* _iphone2xImageFile;
	WFFileRepresentation* _iphone3xImageFile;
	WFFileRepresentation* _ipad2xImageFile;
	NSString* _language;
	CKRecordID* _base;
	NSString* _persistentIdentifier;

}

@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) CKRecordID * detailPage;                             //@synthesize detailPage=_detailPage - In the implementation block
@property (nonatomic,retain) WFFileRepresentation * iphone2xImageFile;              //@synthesize iphone2xImageFile=_iphone2xImageFile - In the implementation block
@property (nonatomic,retain) WFFileRepresentation * iphone3xImageFile;              //@synthesize iphone3xImageFile=_iphone3xImageFile - In the implementation block
@property (nonatomic,retain) WFFileRepresentation * ipad2xImageFile;                //@synthesize ipad2xImageFile=_ipad2xImageFile - In the implementation block
@property (nonatomic,readonly) NSString * language;                                 //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) CKRecordID * base;                                   //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) NSString * persistentIdentifier;                     //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CKRecordID * identifier;                             //@synthesize identifier=_identifier - In the implementation block
+(id)properties;
+(id)recordType;
+(id)propertyForSize:(long long)arg1 ;
+(double)scaleForBannerSize:(long long)arg1 ;
+(CGSize)pointSizeForBannerSize:(long long)arg1 ;
+(CGSize)pixelSizeForBannerSize:(long long)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CKRecordID *)identifier;
-(NSString *)persistentIdentifier;
-(NSString *)language;
-(CKRecordID *)base;
-(unsigned long long)referenceActionForKey:(id)arg1 ;
-(id)imageFileForSize:(long long)arg1 ;
-(id)imageForSize:(long long)arg1 ;
-(CKRecordID *)detailPage;
-(WFFileRepresentation *)iphone2xImageFile;
-(void)setIphone2xImageFile:(WFFileRepresentation *)arg1 ;
-(WFFileRepresentation *)iphone3xImageFile;
-(void)setIphone3xImageFile:(WFFileRepresentation *)arg1 ;
-(WFFileRepresentation *)ipad2xImageFile;
-(void)setIpad2xImageFile:(WFFileRepresentation *)arg1 ;
@end

