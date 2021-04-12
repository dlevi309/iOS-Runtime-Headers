/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLInsetsJSExports.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TMLInsets : NSObject <TMLInsetsJSExports, NSCopying> {

	UIEdgeInsets _insets;

}

@property (nonatomic,readonly) double top; 
@property (nonatomic,readonly) double left; 
@property (nonatomic,readonly) double bottom; 
@property (nonatomic,readonly) double right; 
+(void)initializeJSContext:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)left;
-(id)UIEdgeInsetsValue;
-(double)top;
-(double)bottom;
-(double)right;
-(id)initWithInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)UIEdgeInsets;
@end

