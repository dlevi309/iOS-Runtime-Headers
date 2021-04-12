/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLabel:(NSString *)arg1 ;
-(id)retainedLabel;
-(NSString *)label;
-(void)dealloc;
@end

