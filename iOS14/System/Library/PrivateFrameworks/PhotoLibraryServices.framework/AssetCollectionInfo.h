/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSNumber, NSDate;

@interface AssetCollectionInfo : NSObject <NSSecureCoding> {

	BOOL _isMine;
	BOOL _isVideo;
	BOOL _isPhotoIris;
	BOOL _isDeletable;
	unsigned short _playbackVariation;
	NSString* _GUID;
	NSString* _personID;
	NSDictionary* _metaData;
	NSNumber* _width;
	NSNumber* _height;
	NSDate* _timestamp;
	NSString* _derivativeUTI;

}

@property (getter=UID,nonatomic,readonly) NSString * GUID;                    //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,readonly) NSString * personID;                           //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) BOOL isMine;                                   //@synthesize isMine=_isMine - In the implementation block
@property (nonatomic,readonly) BOOL isVideo;                                  //@synthesize isVideo=_isVideo - In the implementation block
@property (nonatomic,readonly) BOOL isPhotoIris;                              //@synthesize isPhotoIris=_isPhotoIris - In the implementation block
@property (nonatomic,readonly) unsigned short playbackVariation;              //@synthesize playbackVariation=_playbackVariation - In the implementation block
@property (nonatomic,readonly) BOOL isDeletable;                              //@synthesize isDeletable=_isDeletable - In the implementation block
@property (nonatomic,readonly) NSDictionary * metaData;                       //@synthesize metaData=_metaData - In the implementation block
@property (nonatomic,readonly) NSNumber * width;                              //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) NSNumber * height;                             //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSString * derivativeUTI;                      //@synthesize derivativeUTI=_derivativeUTI - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)width;
-(BOOL)isMine;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)height;
-(unsigned short)playbackVariation;
-(BOOL)isPhotoIris;
-(id)description;
-(NSDictionary *)metaData;
-(BOOL)isVideo;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)personID;
-(NSString *)derivativeUTI;
-(id)initWithAssetCollection:(id)arg1 ;
-(BOOL)isDeletable;
-(NSString *)GUID;
@end

