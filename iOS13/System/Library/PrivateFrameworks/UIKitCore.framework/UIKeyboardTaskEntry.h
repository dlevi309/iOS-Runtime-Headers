/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface UIKeyboardTaskEntry : NSObject <NSCopying> {

	/*^block*/id __task;
	NSArray* __creationStack;

}

@property (nonatomic,retain,readonly) NSArray * originatingStack;              //@synthesize _creationStack=__creationStack - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)execute:(id)arg1 ;
-(id)initWithTask:(/*^block*/id)arg1 ;
-(NSArray *)originatingStack;
@end

