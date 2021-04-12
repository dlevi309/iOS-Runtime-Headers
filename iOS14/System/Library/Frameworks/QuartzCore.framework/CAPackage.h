/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CALayer *)rootLayer;
-(id)CAMLParser:(id)arg1 resourceForURL:(id)arg2 ;
-(void)CAMLParser:(id)arg1 didLoadResource:(id)arg2 fromURL:(id)arg3 ;
-(id)publishedObjectNames;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2 ;
-(BOOL)isGeometryFlipped;
-(void)foreachLayer:(/*^block*/id)arg1 ;
-(void)_readFromCAMLData:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)_addClassSubstitutions:(id)arg1 ;
-(id)_initWithData:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)_initWithContentsOfURL:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)substitutedClasses;
-(void)_readFromCAMLURL:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3 ;
-(id)publishedObjectWithName:(id)arg1 ;
-(void)_readFromArchiveData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2 ;
-(void)dealloc;
@end

