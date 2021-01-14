/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelativeMotion.framework/RelativeMotion
*/

#import <RelativeMotion/RelativeMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RMLogItem : NSObject <NSSecureCoding, NSCopying> {

	id _internalLogItem;

}

@property (nonatomic,readonly) double timestamp; 
+(BOOL)supportsSecureCoding;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithTimestamp:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

