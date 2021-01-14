/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface ARLineCloud : NSObject <NSCopying> {

	NSArray* _lines;

}

@property (nonatomic,readonly) NSArray * lines;              //@synthesize lines=_lines - In the implementation block
-(NSArray *)lines;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLineCloudData:(id)arg1 ;
@end

