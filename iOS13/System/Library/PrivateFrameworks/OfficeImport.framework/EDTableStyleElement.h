/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)key;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setDifferentialStyle:(id)arg1 ;
-(id)differentialStyle;
-(unsigned)bandSize;
-(void)setBandSize:(unsigned)arg1 ;
-(void)setDifferentialStyleWithIndex:(unsigned long long)arg1 ;
@end

