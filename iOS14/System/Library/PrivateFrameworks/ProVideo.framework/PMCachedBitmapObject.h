/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PMCachedBitmapObject : NSObject {

	shared_ptr<PCBitmap>* _bitmap;

}
-(shared_ptr<PCBitmap>*)bitmap;
-(void)dealloc;
-(id)initWithBitmap:(const shared_ptr<PCBitmap>*)arg1 ;
@end

