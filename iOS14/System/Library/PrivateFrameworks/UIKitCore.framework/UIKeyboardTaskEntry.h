/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)execute:(id)arg1 ;
-(id)initWithTask:(/*^block*/id)arg1 ;
-(NSArray *)originatingStack;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

