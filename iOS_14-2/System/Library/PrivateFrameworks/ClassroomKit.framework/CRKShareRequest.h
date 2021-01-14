/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)urls;
-(NSString *)sourceBundleIdentifier;
-(void)setSourceBundleIdentifier:(NSString *)arg1 ;
-(void)setUrls:(NSArray *)arg1 ;
-(void)setTargetType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTargetIdentifier:(NSString *)arg1 ;
-(NSDictionary *)sandboxExtensions;
-(NSString *)targetType;
-(NSData *)previewImageData;
-(void)setPreviewImageData:(NSData *)arg1 ;
-(void)setSandboxExtensions:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)targetIdentifier;
-(NSString *)shareDescription;
-(void)setShareDescription:(NSString *)arg1 ;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
@end

