/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setMode:(short)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(short)mode;
-(NSDate *)creationDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)expiryDate;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(NSData *)previewData;
-(NSArray *)participants;
-(long long)assetCount;
-(NSURL *)shareURL;
-(void)setShareURL:(NSURL *)arg1 ;
-(long long)photosCount;
-(void)setPhotosCount:(long long)arg1 ;
-(void)setParticipants:(NSArray *)arg1 ;
-(NSData *)thumbnailImageData;
-(void)setThumbnailImageData:(NSData *)arg1 ;
-(long long)videosCount;
-(void)setPreviewData:(NSData *)arg1 ;
-(void)setOriginatingScopeIdentifier:(NSString *)arg1 ;
-(NSString *)originatingScopeIdentifier;
-(void)setVideosCount:(long long)arg1 ;
-(void)setAssetCount:(long long)arg1 ;
@end

