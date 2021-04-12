/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKUISizeValue : NSObject <NSCopying> {

	long long _height;
	long long _width;

}

@property (nonatomic,readonly) CGSize size; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(id)initWithSize:(CGSize)arg1 ;
-(void)unionWithSize:(CGSize)arg1 ;
@end

