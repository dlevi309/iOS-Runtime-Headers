/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/OKActionKeyPressedExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface OKActionKeyPressed : OKAction <OKActionKeyPressedExports, NSSecureCoding> {

	BOOL isKeyUp;
	NSString* keyPressed;
	double timestamp;

}

@property (nonatomic,retain) NSString * keyPressed; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) BOOL isKeyUp; 
+(BOOL)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)keyPressedActionWithKey:(id)arg1 atTime:(double)arg2 isKeyUp:(BOOL)arg3 withLocation:(CGPoint)arg4 context:(id)arg5 ;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isKeyUp;
-(void)dealloc;
-(void)setKeyPressed:(NSString *)arg1 ;
-(NSString *)keyPressed;
@end

