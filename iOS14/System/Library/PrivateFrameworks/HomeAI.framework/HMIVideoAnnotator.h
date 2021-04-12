/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMIVideoAnnotator : HMFObject <HMFLogging> {

	opaqueCMSampleBufferRef _sbuf;
	CGContextRef _context;
	CGColorSpaceRef _colorSpace;
	CTFontRef _font;
	CGSize _size;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)draw:(/*^block*/id)arg1 ;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(void)drawPolygonWithNormalizedPoints:(id)arg1 ;
-(void)drawTextHeaderBar:(id)arg1 ;
-(const CTFontRef)_createFontWithSize:(double)arg1 ;
@end

