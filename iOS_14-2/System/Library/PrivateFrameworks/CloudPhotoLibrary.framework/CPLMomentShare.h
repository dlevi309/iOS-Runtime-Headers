/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSData, NSArray, NSURL;

@interface CPLMomentShare : NSObject <NSSecureCoding, NSCopying> {

	short _mode;
	NSString* _identifier;
	NSString* _title;
	NSDate* _creationDate;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDate* _expiryDate;
	long long _assetCount;
	long long _photosCount;
	long long _videosCount;
	NSData* _thumbnailImageData;
	NSData* _previewData;
	NSArray* _participants;
	NSURL* _shareURL;
	NSString* _originatingScopeIdentifier;

}

@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) short mode;                                       //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                              //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                                   //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSDate * expiryDate;                                //@synthesize expiryDate=_expiryDate - In the implementation block
@property (assign,nonatomic) long long assetCount;                             //@synthesize assetCount=_assetCount - In the implementation block
@property (assign,nonatomic) long long photosCount;                            //@synthesize photosCount=_photosCount - In the implementation block
@property (assign,nonatomic) long long videosCount;                            //@synthesize videosCount=_videosCount - In the implementation block
@property (nonatomic,copy) NSData * thumbnailImageData;                        //@synthesize thumbnailImageData=_thumbnailImageData - In the implementation block
@property (nonatomic,copy) NSData * previewData;                               //@synthesize previewData=_previewData - In the implementation block
@property (nonatomic,copy) NSArray * participants;                             //@synthesize participants=_participants - In the implementation block
@property (nonatomic,copy) NSURL * shareURL;                                   //@synthesize shareURL=_shareURL - In the implementation block
@property (nonatomic,copy) NSString * originatingScopeIdentifier;              //@synthesize originatingScopeIdentifier=_originatingScopeIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cplAdditionalSecureClassesForProperty:(id)arg1 ;
-(long long)videosCount;
-(NSDate *)endDate;
-(short)mode;
-(NSURL *)shareURL;
-(void)setStartDate:(NSDate *)arg1 ;
-(long long)photosCount;
-(NSDate *)startDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setShareURL:(NSURL *)arg1 ;
-(void)setPreviewData:(NSData *)arg1 ;
-(NSString *)originatingScopeIdentifier;
-(void)setOriginatingScopeIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(long long)assetCount;
-(void)setMode:(short)arg1 ;
-(void)setParticipants:(NSArray *)arg1 ;
-(NSArray *)participants;
-(id)description;
-(NSDate *)creationDate;
-(void)setVideosCount:(long long)arg1 ;
-(void)setAssetCount:(long long)arg1 ;
-(NSData *)thumbnailImageData;
-(NSDate *)expiryDate;
-(unsigned long long)hash;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setThumbnailImageData:(NSData *)arg1 ;
-(NSData *)previewData;
-(void)setPhotosCount:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithScopeChange:(id)arg1 ;
-(void)updateScopeChange:(id)arg1 ;
-(id)translateToScopeChangeWithScopeType:(long long)arg1 ;
@end

