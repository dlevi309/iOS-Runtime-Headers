/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUINamedRenditionInfo : NSObject {

	void* _bitmap;
	const renditionkeyfmt* _keyFormat;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isEqualToNamedRenditionInfo:(id)arg1 ;
-(id)_initWithKeyFormat:(const renditionkeyfmt*)arg1 andBitmap:(void*)arg2 ;
-(id)initWithData:(id)arg1 andKeyFormat:(const renditionkeyfmt*)arg2 ;
-(id)initWithKeyFormat:(const renditionkeyfmt*)arg1 ;
-(id)archivedData;
-(id)bitwiseAndWith:(id)arg1 ;
-(int)attributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(BOOL)contentPresentForAttribute:(int)arg1 ;
-(BOOL)contentEqualForAttribute:(int)arg1 withRenditionInfo:(id)arg2 ;
-(BOOL)diverseContentPresentForAttribute:(int)arg1 ;
-(void)setAttributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(void)clearAttributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(unsigned long long)numberOfBitsSet;
-(void)decrementValue:(long long*)arg1 forAttribute:(int)arg2 ;
-(void)incrementIndex:(unsigned long long*)arg1 inValues:(id)arg2 forAttribute:(int)arg3 ;
@end

