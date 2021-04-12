/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSString, NSArray, NSData, NSDictionary;

@interface CRKShareRequest : CATTaskRequest {

	DMFControlGroupIdentifier* _courseIdentifier;
	NSString* _targetType;
	NSString* _targetIdentifier;
	NSArray* _urls;
	NSString* _shareDescription;
	NSData* _previewImageData;
	NSDictionary* _sandboxExtensions;
	NSString* _sourceBundleIdentifier;

}

@property (nonatomic,copy) DMFControlGroupIdentifier * courseIdentifier;              //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * targetType;                                     //@synthesize targetType=_targetType - In the implementation block
@property (nonatomic,copy) NSString * targetIdentifier;                               //@synthesize targetIdentifier=_targetIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * urls;                                            //@synthesize urls=_urls - In the implementation block
@property (nonatomic,copy) NSString * shareDescription;                               //@synthesize shareDescription=_shareDescription - In the implementation block
@property (nonatomic,retain) NSData * previewImageData;                               //@synthesize previewImageData=_previewImageData - In the implementation block
@property (nonatomic,retain) NSDictionary * sandboxExtensions;                        //@synthesize sandboxExtensions=_sandboxExtensions - In the implementation block
@property (nonatomic,copy) NSString * sourceBundleIdentifier;                         //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)urls;
-(void)setUrls:(NSArray *)arg1 ;
-(NSString *)targetType;
-(void)setTargetType:(NSString *)arg1 ;
-(NSData *)previewImageData;
-(void)setPreviewImageData:(NSData *)arg1 ;
-(NSDictionary *)sandboxExtensions;
-(void)setSandboxExtensions:(NSDictionary *)arg1 ;
-(void)setSourceBundleIdentifier:(NSString *)arg1 ;
-(NSString *)sourceBundleIdentifier;
-(NSString *)targetIdentifier;
-(void)setTargetIdentifier:(NSString *)arg1 ;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(void)setShareDescription:(NSString *)arg1 ;
-(NSString *)shareDescription;
@end

