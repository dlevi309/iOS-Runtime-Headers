/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface POPAnimatableProperty : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) id readBlock; 
@property (nonatomic,copy,readonly) id writeBlock; 
@property (nonatomic,readonly) double threshold; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)propertyWithName:(id)arg1 initializer:(/*^block*/id)arg2 ;
+(id)propertyWithName:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

