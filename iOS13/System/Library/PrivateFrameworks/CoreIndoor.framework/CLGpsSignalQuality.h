/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(int)quality;
-(void)setQuality:(int)arg1 ;
-(id)initWithSignalQuality:(int)arg1 ;
@end

