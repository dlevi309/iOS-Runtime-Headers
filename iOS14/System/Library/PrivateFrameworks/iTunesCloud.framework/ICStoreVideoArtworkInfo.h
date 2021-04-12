/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface ICStoreVideoArtworkInfo : NSObject <NSSecureCoding> {

	NSDictionary* _aspectRatioToCRABSVideoDictionaries;
	NSDictionary* _aspectRatioToHLSVideoURL;
	NSDictionary* _aspectRatioToPreviewFrameArtworkInfo;
	NSString* _stringRepresentation;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringRepresentation;                //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)stringRepresentation;
-(id)_aspectRatioKeyForAspectRatio:(double)arg1 ;
-(id)initWithVideoArtworkResponseDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)responseDictionary;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)HLSVideoURLForAspectRatio:(double)arg1 ;
-(id)CRABSVideoURLMatchingSize:(CGSize)arg1 ;
-(id)previewFrameArtworkInfoMatchingAspectRatio:(double)arg1 ;
-(id)supportedSizesForCRABSVideoForAspectRatio:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

