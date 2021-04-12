/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSString *)assetUUID;
-(id)initWithAssetUUID:(id)arg1 momentUUID:(id)arg2 ;
-(NSString *)momentUUID;
@end

