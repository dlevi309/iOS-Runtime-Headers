/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CHSSizeConfiguration : NSObject <NSSecureCoding> {

	CGSize _smallSize;
	CGSize _mediumSize;
	CGSize _largeSize;

}

@property (nonatomic,readonly) CGSize smallSize;               //@synthesize smallSize=_smallSize - In the implementation block
@property (nonatomic,readonly) CGSize mediumSize;              //@synthesize mediumSize=_mediumSize - In the implementation block
@property (nonatomic,readonly) CGSize largeSize;               //@synthesize largeSize=_largeSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(CGSize)smallSize;
-(CGSize)largeSize;
-(id)initWithSmallSize:(CGSize)arg1 mediumSize:(CGSize)arg2 largeSize:(CGSize)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)mediumSize;
-(BOOL)isEqual:(id)arg1 ;
@end

