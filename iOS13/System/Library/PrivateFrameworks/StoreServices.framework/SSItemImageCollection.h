/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface SSItemImageCollection : NSObject <NSCopying> {

	NSArray* _itemImages;

}

@property (nonatomic,readonly) NSArray * itemImages;              //@synthesize itemImages=_itemImages - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)bestImageForSize:(CGSize)arg1 ;
-(id)imagesForKind:(id)arg1 ;
-(id)initWithImageCollection:(id)arg1 ;
-(id)initWithItemImages:(id)arg1 ;
-(NSArray *)itemImages;
-(id)_newImagesForDictionary:(id)arg1 ;
-(id)imagesForSize:(CGSize)arg1 ;
-(id)_imagesForSize:(CGSize)arg1 scale:(double)arg2 ;
@end

