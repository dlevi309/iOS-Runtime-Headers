/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUProgress.h>

@class NSProgress, NSArray;

@interface TSUNSProgress : TSUProgress {

	NSProgress* _NSProgress;
	NSArray* _NSProgressObservers;

}
-(void)setMessage:(id)arg1 ;
-(id)message;
-(id)init;
-(BOOL)isIndeterminate;
-(double)maxValue;
-(double)value;
-(id)initForSubclass;
-(id)initWithNSProgress:(id)arg1 ;
@end

