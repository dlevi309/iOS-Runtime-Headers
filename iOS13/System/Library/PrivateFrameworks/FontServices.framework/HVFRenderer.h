/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/libhvf.dylib
*/


#import <libhvf.dylib/libhvf.dylib-Structs.h>
@class NSData;

@interface HVFRenderer : NSObject {

	unique_ptr<hvf::Renderer, std::__1::default_delete<hvf::Renderer> >* renderer;
	NSData* hvfb;

}

@property (nonatomic,retain) NSData * hvfb; 
-(id)initWithLoader:(HVFLoaderImpl*)arg1 ;
-(NSData *)hvfb;
-(id)initWithTableData:(id)arg1 ;
-(unsigned)countParts;
-(BOOL)renderPartAtIndex:(unsigned)arg1 transform:(id)arg2 toContext:(/*^block*/id)arg3 ;
-(BOOL)renderPartAtIndex:(unsigned)arg1 toContext:(/*^block*/id)arg2 ;
-(void)setHvfb:(NSData *)arg1 ;
@end

