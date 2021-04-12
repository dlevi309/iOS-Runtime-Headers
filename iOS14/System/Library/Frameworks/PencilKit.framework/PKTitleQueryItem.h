/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


#import <PencilKit/PencilKit-Structs.h>
@class NSString;

@interface PKTitleQueryItem : NSObject {

	NSString* _transcribedTitle;
	CGRect _bounds;

}

@property (nonatomic,readonly) NSString * transcribedTitle;              //@synthesize transcribedTitle=_transcribedTitle - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                            //@synthesize bounds=_bounds - In the implementation block
-(CGRect)bounds;
-(NSString *)transcribedTitle;
-(id)initWithTranscribedTitle:(id)arg1 bounds:(CGRect)arg2 ;
@end

