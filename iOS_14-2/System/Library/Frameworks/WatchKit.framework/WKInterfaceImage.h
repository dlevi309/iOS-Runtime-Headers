/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <WatchKit/WKInterfaceObject.h>
#import <libobjc.A.dylib/WKImageAnimatable.h>

@class NSString;

@interface WKInterfaceImage : WKInterfaceObject <WKImageAnimatable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImage:(id)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)startAnimating;
-(void)stopAnimating;
-(void)setImageData:(id)arg1 ;
-(void)startAnimatingWithImagesInRange:(NSRange)arg1 duration:(double)arg2 repeatCount:(long long)arg3 ;
-(void)setImageNamed:(id)arg1 ;
@end

