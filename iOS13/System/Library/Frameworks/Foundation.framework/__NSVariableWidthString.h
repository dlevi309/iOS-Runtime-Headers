/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)formatConfiguration;
-(id)initWithWidthContexts:(id)arg1 ;
-(id)initWithString:(id)arg1 widthVariants:(id)arg2 ;
-(id)initWithWidthVariants:(id)arg1 ;
-(id)variantFittingPresentationWidth:(long long)arg1 ;
@end

