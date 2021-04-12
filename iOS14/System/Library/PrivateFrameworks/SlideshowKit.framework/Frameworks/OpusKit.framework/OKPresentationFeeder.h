/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)className;
-(void)setClassName:(NSString *)arg1 ;
-(id)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)resolveIfNeeded;
-(id)initWithDictionary:(id)arg1 andName:(id)arg2 forPresentation:(id)arg3 ;
@end

