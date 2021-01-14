/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface PAEKeyerOMVertex : NSObject <NSSecureCoding> {

	NSNumber* _lx;
	NSNumber* _mx;
	NSNumber* _rx;
	NSNumber* _bx;
	NSNumber* _ly;
	NSNumber* _my;
	NSNumber* _ry;
	NSNumber* _by;

}
+(BOOL)supportsSecureCoding;
-(float)lx;
-(float)ly;
-(float)rx;
-(float)by;
-(float)mx;
-(float)bx;
-(float)my;
-(float)ry;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRx:(id)arg1 ;
-(void)setLy:(id)arg1 ;
-(void)setBy:(id)arg1 ;
-(void)setLx:(id)arg1 ;
-(void)setMx:(id)arg1 ;
-(void)setBx:(id)arg1 ;
-(void)setMy:(id)arg1 ;
-(void)setRy:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

