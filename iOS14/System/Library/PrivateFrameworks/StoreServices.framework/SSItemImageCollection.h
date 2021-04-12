/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface SSItemImageCollection : NSObject <NSCopying> {

	NSArray* _itemImages;

}

@property (nonatomic,readonly) NSArray * itemImages;              //@synthesize itemImages=_itemImages - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)_newImagesForDictionary:(id)arg1 ;
-(id)imagesForSize:(CGSize)arg1 ;
-(id)_imagesForSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)bestImageForSize:(CGSize)arg1 ;
-(id)imagesForKind:(id)arg1 ;
-(id)initWithImageCollection:(id)arg1 ;
-(id)initWithItemImages:(id)arg1 ;
-(NSArray *)itemImages;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

