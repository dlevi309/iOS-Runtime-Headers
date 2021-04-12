/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface ARLineCloud : NSObject <NSCopying> {

	NSArray* _lines;

}

@property (nonatomic,readonly) NSArray * lines;              //@synthesize lines=_lines - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)lines;
-(id)initWithLineCloudData:(id)arg1 ;
@end

