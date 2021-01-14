/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PHTextFeature : NSObject <NSSecureCoding> {

	float _weight;
	long long _type;
	NSString* _string;
	unsigned long long _origin;

}

@property (assign,nonatomic) long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * string;                        //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) float weight;                           //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) unsigned long long origin;              //@synthesize origin=_origin - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringForType:(long long)arg1 ;
+(id)stringForOrigin:(unsigned long long)arg1 ;
+(id)textFeatureWithType:(long long)arg1 string:(id)arg2 weight:(float)arg3 origin:(unsigned long long)arg4 ;
+(id)textFeatureWithData:(id)arg1 ;
+(id)fetchTextFeaturesByAssetLocalIdentifierForAssets:(id)arg1 ;
+(id)_textFeaturesByMomentLocalIdentifierForMomentLocalIdentifiers:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)_momentLocalIdentifierByAssetLocalIdentifiersForAssets:(id)arg1 ;
-(void)setOrigin:(unsigned long long)arg1 ;
-(unsigned long long)origin;
-(void)setWeight:(float)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(float)weight;
-(void)setType:(long long)arg1 ;
-(id)description;
-(id)encodedData;
-(id)initWithType:(long long)arg1 string:(id)arg2 weight:(float)arg3 origin:(unsigned long long)arg4 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
@end

