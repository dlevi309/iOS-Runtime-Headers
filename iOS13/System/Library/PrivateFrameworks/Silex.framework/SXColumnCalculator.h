/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXColumnCalculator.h>

@protocol SXColumnCalculator <NSObject>
@required
-(id)columnLayoutWithViewportSize:(CGSize)arg1 constrainedToWidth:(double)arg2 documentLayout:(id)arg3 contentScaleFactor:(double)arg4;
-(id)columnLayoutWithConstrainedViewportSize:(CGSize)arg1 viewportSize:(CGSize)arg2 documentLayout:(id)arg3;

@end


@class NSString;

@interface SXColumnCalculator : NSObject <SXColumnCalculator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)columnLayoutWithViewportSize:(CGSize)arg1 constrainedToWidth:(double)arg2 documentLayout:(id)arg3 contentScaleFactor:(double)arg4 ;
-(id)columnLayoutWithConstrainedViewportSize:(CGSize)arg1 viewportSize:(CGSize)arg2 documentLayout:(id)arg3 ;
-(id)columnLayoutWithConstrainedViewportSize:(CGSize)arg1 scaledConstrainedViewportSize:(CGSize)arg2 viewportSize:(CGSize)arg3 documentLayout:(id)arg4 contentScaleFactor:(double)arg5 ;
@end

