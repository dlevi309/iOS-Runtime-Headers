/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


#import <Metal/Metal-Structs.h>
@class NSString;

@interface _MTLObjectWithLabel : NSObject {

	NSString* _label;
	os_unfair_lock_s _labelLock;

}

@property (copy) NSString * label; 
-(id)init;
-(void)dealloc;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)retainedLabel;
@end

