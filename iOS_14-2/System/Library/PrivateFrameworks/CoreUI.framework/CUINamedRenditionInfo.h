/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUINamedRenditionInfo : NSObject {

	void* _bitmap;
	const renditionkeyfmt* _keyFormat;

}
-(unsigned short)getValueOfAttribute:(int)arg1 ;
-(id)initWithKeyFormat:(const renditionkeyfmt*)arg1 ;
-(id)debugDescription;
-(id)initWithData:(id)arg1 andKeyFormat:(const renditionkeyfmt*)arg2 ;
-(BOOL)isEqualToNamedRenditionInfo:(id)arg1 ;
-(BOOL)contentEqualForAttribute:(int)arg1 withRenditionInfo:(id)arg2 ;
-(int)attributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(id)description;
-(unsigned short)getClosestValueOfAttribute:(int)arg1 withValue:(unsigned short)arg2 ;
-(BOOL)contentPresentForAttribute:(int)arg1 ;
-(id)bitwiseAndWith:(id)arg1 ;
-(BOOL)diverseContentPresentForAttribute:(int)arg1 ;
-(void)incrementIndex:(unsigned long long*)arg1 inValues:(id)arg2 forAttribute:(int)arg3 ;
-(void)setAttributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(void)decrementValue:(long long*)arg1 forAttribute:(int)arg2 ;
-(void)clearAttributePresent:(int)arg1 withValue:(unsigned short)arg2 ;
-(id)archivedData;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)numberOfBitsSet;
@end

