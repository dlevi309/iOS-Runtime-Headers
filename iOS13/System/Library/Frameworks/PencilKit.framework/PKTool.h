/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKInk;

@interface PKTool : NSObject <NSCopying> {

	PKInk* _ink;

}

@property (nonatomic,readonly) PKInk * ink;              //@synthesize ink=_ink - In the implementation block
+(id)_toolWithInk:(id)arg1 ;
+(BOOL)_inkIsInkingTool:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(PKInk *)ink;
-(id)_initWithIdentifier:(id)arg1 color:(id)arg2 weight:(double)arg3 ;
-(id)_initWithInk:(id)arg1 ;
-(id)initWithType:(id)arg1 color:(id)arg2 weight:(double)arg3 ;
@end

