/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)getValue:(FigTime*)arg1 ;
-(FigTime)time;
-(void)setTime:(FigTime)arg1 ;
-(id)initWithFigTime:(FigTime)arg1 ;
-(long long)compareWithTime:(id)arg1 ;
@end

