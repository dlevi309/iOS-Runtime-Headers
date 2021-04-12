/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@class NSDictionary, NSString;

@interface __NSVariableWidthString : NSString {

	NSDictionary* _variants;
	NSString* _defaultString;

}

@property (readonly) unsigned long long length; 
-(id)initWithWidthContexts:(id)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)variantFittingPresentationWidth:(long long)arg1 ;
-(unsigned long long)length;
-(id)initWithString:(id)arg1 widthVariants:(id)arg2 ;
-(id)_widthVariants;
-(id)initWithWidthVariants:(id)arg1 ;
-(id)formatConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

