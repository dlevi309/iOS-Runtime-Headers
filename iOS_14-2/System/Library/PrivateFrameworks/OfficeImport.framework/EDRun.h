/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/EDKeyedObject.h>

@class EDResources, NSArray, NSString;

@interface EDRun : NSObject <EDKeyedObject> {

	EDResources* mResources;
	unsigned long long mCharIndex;
	unsigned long long mFontIndex;
	NSArray* mEffects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)runWithCharIndex:(unsigned long long)arg1 font:(id)arg2 resources:(id)arg3 ;
+(id)runWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 resources:(id)arg3 ;
+(id)runWithCharIndex:(unsigned long long)arg1 font:(id)arg2 effects:(id)arg3 resources:(id)arg4 ;
+(id)runWithResources:(id)arg1 ;
+(id)runWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 effects:(id)arg3 resources:(id)arg4 ;
-(void)setFont:(id)arg1 ;
-(void)setCharIndex:(unsigned long long)arg1 ;
-(NSString *)description;
-(long long)key;
-(unsigned long long)hash;
-(unsigned long long)fontIndex;
-(id)initWithResources:(id)arg1 ;
-(id)effects;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)font;
-(unsigned long long)charIndex;
-(void)overrideFont:(id)arg1 ;
-(void)adjustIndex:(unsigned long long)arg1 ;
-(id)initWithCharIndex:(unsigned long long)arg1 font:(id)arg2 resources:(id)arg3 ;
-(id)initWithCharIndex:(unsigned long long)arg1 font:(id)arg2 effects:(id)arg3 resources:(id)arg4 ;
-(BOOL)isEqualToRun:(id)arg1 ;
-(id)initWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 resources:(id)arg3 ;
-(id)initWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 effects:(id)arg3 resources:(id)arg4 ;
@end

