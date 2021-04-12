/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKPresentationCanvas.h>

@class NSString, NSMutableDictionary;

@interface OKPresentationFeeder : OKPresentationCanvas {

	NSString* _className;
	NSMutableDictionary* _internalSettings;

}

@property (nonatomic,copy) NSString * className;              //@synthesize className=_className - In the implementation block
+(id)feederWithName:(id)arg1 className:(id)arg2 settings:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionary;
-(NSString *)className;
-(void)setClassName:(NSString *)arg1 ;
-(void)resolveIfNeeded;
-(id)initWithDictionary:(id)arg1 andName:(id)arg2 forPresentation:(id)arg3 ;
@end

