/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUFlushableObject.h>

@interface TSUFlushableCachedImage : TSUFlushableObject {

	CGImageRef _image;
	id _delegate;
	SEL _delegateCreateImageSelector;

}
-(void)unload;
-(void)dealloc;
-(CGImageRef)newImage;
-(id)initWithDelegate:(id)arg1 createImageSelector:(SEL)arg2 ;
-(BOOL)hasFlushableContent;
@end

