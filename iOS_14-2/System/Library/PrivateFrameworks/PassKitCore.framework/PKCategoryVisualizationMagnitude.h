/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKCategoryVisualizationMagnitude : NSObject <NSSecureCoding> {

	NSString* _passUniqueIdentifier;
	long long _bucket;
	double _magnitude;

}

@property (nonatomic,copy) NSString * passUniqueIdentifier;              //@synthesize passUniqueIdentifier=_passUniqueIdentifier - In the implementation block
@property (assign,nonatomic) long long bucket;                           //@synthesize bucket=_bucket - In the implementation block
@property (assign,nonatomic) double magnitude;                           //@synthesize magnitude=_magnitude - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBucket:(long long)arg1 ;
-(double)magnitude;
-(long long)bucket;
-(void)setMagnitude:(double)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)passUniqueIdentifier;
-(void)setPassUniqueIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

