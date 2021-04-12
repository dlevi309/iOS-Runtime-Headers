/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
*/

#import <BrailleTranslation/BrailleTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BRLTBrailleString;

@interface BRLTBrailleBuffer : NSObject <NSCopying> {

	BRLTBrailleString* _brailleString;
	unsigned long long _cursor;

}

@property (nonatomic,readonly) BRLTBrailleString * brailleString; 
@property (assign,nonatomic) unsigned long long cursor;                        //@synthesize cursor=_cursor - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)cursor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCursor:(unsigned long long)arg1 ;
-(id)initWithBrailleString:(id)arg1 ;
-(void)insertBrailleChar:(id)arg1 ;
-(void)deleteBrailleChar;
-(BRLTBrailleString *)brailleString;
@end

