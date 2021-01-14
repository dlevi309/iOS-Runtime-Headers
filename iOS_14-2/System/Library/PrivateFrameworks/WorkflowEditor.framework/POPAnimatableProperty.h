/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface POPAnimatableProperty : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) id readBlock; 
@property (nonatomic,copy,readonly) id writeBlock; 
@property (nonatomic,readonly) double threshold; 
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)propertyWithName:(id)arg1 initializer:(/*^block*/id)arg2 ;
+(id)propertyWithName:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

