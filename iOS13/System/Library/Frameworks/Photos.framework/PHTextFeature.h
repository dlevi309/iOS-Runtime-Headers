/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)string;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(id)encodedData;
-(unsigned long long)origin;
-(void)setWeight:(float)arg1 ;
-(float)weight;
-(void)setOrigin:(unsigned long long)arg1 ;
-(id)initWithType:(long long)arg1 string:(id)arg2 weight:(float)arg3 origin:(unsigned long long)arg4 ;
@end

