/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/OADEffectsParent.h>

@class OADFill, NSArray, NSString;

@interface OADTableBackground : NSObject <OADEffectsParent> {

	OADFill* mFill;
	NSArray* mEffects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fill;
-(NSString *)description;
-(BOOL)hasEffects;
-(id)effects;
-(void)setEffects:(id)arg1 ;
-(void)setFill:(id)arg1 ;
@end

