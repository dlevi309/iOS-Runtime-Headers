/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface PGSearchThumbnailMomentAssetPairUUID : NSObject <NSSecureCoding, NSCoding> {

	NSString* _assetUUID;
	NSString* _momentUUID;

}

@property (nonatomic,readonly) NSString * assetUUID;               //@synthesize assetUUID=_assetUUID - In the implementation block
@property (nonatomic,readonly) NSString * momentUUID;              //@synthesize momentUUID=_momentUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAssetUUID:(id)arg1 momentUUID:(id)arg2 ;
-(NSString *)assetUUID;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)momentUUID;
@end

