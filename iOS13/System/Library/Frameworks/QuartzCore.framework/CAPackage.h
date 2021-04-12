/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CALayer;

@interface CAPackage : NSObject {

	CAPackageData* _data;

}

@property (readonly) CALayer * rootLayer; 
@property (getter=isGeometryFlipped,readonly) BOOL geometryFlipped; 
+(id)packageWithContentsOfURL:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)packageWithData:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3 ;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2 ;
-(CALayer *)rootLayer;
-(BOOL)isGeometryFlipped;
-(void)foreachLayer:(/*^block*/id)arg1 ;
-(id)publishedObjectWithName:(id)arg1 ;
-(void)CAMLParser:(id)arg1 didLoadResource:(id)arg2 fromURL:(id)arg3 ;
-(id)CAMLParser:(id)arg1 resourceForURL:(id)arg2 ;
-(Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2 ;
-(id)_initWithContentsOfURL:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)_initWithData:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)substitutedClasses;
-(void)_addClassSubstitutions:(id)arg1 ;
-(void)_readFromArchiveData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)_readFromCAMLData:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)_readFromCAMLURL:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)publishedObjectNames;
@end

