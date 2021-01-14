/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/EDKeyedObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EDCollection, EDDifferentialStyle, NSString;

@interface EDTableStyleElement : NSObject <EDKeyedObject, NSCopying> {

	EDCollection* mDifferentialStyles;
	int mType;
	unsigned mBandSize;
	EDDifferentialStyle* mDifferentialStyle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tableStyleElementWithResources:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(NSString *)description;
-(long long)key;
-(int)type;
-(id)initWithResources:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDifferentialStyle:(id)arg1 ;
-(id)differentialStyle;
-(unsigned)bandSize;
-(void)setBandSize:(unsigned)arg1 ;
-(void)setDifferentialStyleWithIndex:(unsigned long long)arg1 ;
@end

