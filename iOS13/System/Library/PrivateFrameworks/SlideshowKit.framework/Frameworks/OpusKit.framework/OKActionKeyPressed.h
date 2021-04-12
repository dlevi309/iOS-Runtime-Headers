/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(void)setKeyPressed:(NSString *)arg1 ;
-(NSString *)keyPressed;
-(BOOL)isKeyUp;
@end

