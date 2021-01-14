/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLGpsSignalQuality : NSObject <NSSecureCoding> {

	int _quality;

}

@property (assign,nonatomic) int quality;              //@synthesize quality=_quality - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(int)quality;
-(id)initWithCoder:(id)arg1 ;
-(void)setQuality:(int)arg1 ;
-(id)initWithSignalQuality:(int)arg1 ;
@end

