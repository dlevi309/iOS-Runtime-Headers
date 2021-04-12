/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FigTimeObj : NSObject <NSCopying, NSSecureCoding> {

	FigTime _time;

}
+(BOOL)supportsSecureCoding;
+(id)timeWithTime:(FigTime)arg1 ;
+(BOOL)classIsAbstract;
-(FigTime)time;
-(long long)compare:(id)arg1 ;
-(void)setTime:(FigTime)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)getValue:(FigTime*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithFigTime:(FigTime)arg1 ;
-(long long)compareWithTime:(id)arg1 ;
@end

