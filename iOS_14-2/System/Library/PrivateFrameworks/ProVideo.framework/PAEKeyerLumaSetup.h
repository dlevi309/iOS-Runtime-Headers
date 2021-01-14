/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSNumber;

@interface PAEKeyerLumaSetup : NSObject <NSCoding> {

	NSNumber* _lumA;
	NSNumber* _lumB;
	NSNumber* _lumC;
	NSNumber* _lumD;

}
-(id)init;
-(float)lumA;
-(float)lumB;
-(float)lumC;
-(float)lumD;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)interpolateBetween:(id)arg1 withWeight:(float)arg2 ;
-(void)setLumA:(float)arg1 ;
-(void)setLumB:(float)arg1 ;
-(void)setLumC:(float)arg1 ;
-(void)setLumD:(float)arg1 ;
-(void)setLumANumber:(id)arg1 ;
-(void)setLumBNumber:(id)arg1 ;
-(void)setLumCNumber:(id)arg1 ;
-(void)setLumDNumber:(id)arg1 ;
@end

