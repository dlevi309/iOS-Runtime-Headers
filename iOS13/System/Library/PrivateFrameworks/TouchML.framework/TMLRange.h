/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLRangeJSExports.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TMLRange : NSObject <TMLRangeJSExports, NSCopying> {

	NSRange _range;

}

@property (nonatomic,readonly) unsigned long long location; 
@property (nonatomic,readonly) unsigned long long length; 
+(void)initializeJSContext:(id)arg1 ;
-(unsigned long long)length;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRange:(NSRange)arg1 ;
-(unsigned long long)location;
-(id)NSRangeValue;
@end

