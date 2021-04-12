/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)left;
-(double)right;
-(id)UIEdgeInsetsValue;
-(id)description;
-(double)bottom;
-(double)top;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)UIEdgeInsets;
@end

