/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSOrderedSet;

@interface _UICommandDiffv1 : NSObject <NSCopying, NSSecureCoding> {

	NSOrderedSet* _changes;

}

@property (nonatomic,readonly) NSOrderedSet * changes;              //@synthesize changes=_changes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)diffWithChanges:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSOrderedSet *)changes;
-(id)initWithChanges:(id)arg1 ;
@end

