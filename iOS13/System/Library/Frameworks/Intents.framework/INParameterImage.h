/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INParameter, INImage;

@interface INParameterImage : NSObject <NSCopying> {

	INParameter* _parameter;
	INImage* _image;

}

@property (nonatomic,copy,readonly) INParameter * parameter;              //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,copy,readonly) INImage * image;                      //@synthesize image=_image - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(INImage *)image;
-(id)initWithParameter:(id)arg1 image:(id)arg2 ;
-(INParameter *)parameter;
@end

