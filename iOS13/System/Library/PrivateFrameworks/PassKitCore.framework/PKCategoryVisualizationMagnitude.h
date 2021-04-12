/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)bucket;
-(double)magnitude;
-(void)setMagnitude:(double)arg1 ;
-(NSString *)passUniqueIdentifier;
-(void)setPassUniqueIdentifier:(NSString *)arg1 ;
-(void)setBucket:(long long)arg1 ;
@end

