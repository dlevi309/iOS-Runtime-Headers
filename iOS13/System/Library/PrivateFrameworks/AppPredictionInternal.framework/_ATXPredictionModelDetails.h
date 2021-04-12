/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _ATXPredictionModelDetails : NSObject <NSSecureCoding> {

	long long _assetCompatibilityVersion;
	long long _assetVersion;
	NSString* _abGroup;

}

@property (assign,nonatomic) long long assetCompatibilityVersion;              //@synthesize assetCompatibilityVersion=_assetCompatibilityVersion - In the implementation block
@property (assign,nonatomic) long long assetVersion;                           //@synthesize assetVersion=_assetVersion - In the implementation block
@property (nonatomic,retain) NSString * abGroup;                               //@synthesize abGroup=_abGroup - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)assetVersion;
-(void)setAssetVersion:(long long)arg1 ;
-(NSString *)abGroup;
-(void)setAbGroup:(NSString *)arg1 ;
-(id)initWithAssetCompatibilityVersion:(long long)arg1 assetVersion:(long long)arg2 abGroup:(id)arg3 ;
-(long long)assetCompatibilityVersion;
-(void)setAssetCompatibilityVersion:(long long)arg1 ;
@end

