/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)location;
-(unsigned long long)length;
-(id)description;
-(id)initWithRange:(NSRange)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)NSRangeValue;
@end

