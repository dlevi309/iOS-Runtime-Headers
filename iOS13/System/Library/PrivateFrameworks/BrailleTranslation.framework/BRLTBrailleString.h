/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
*/

#import <BrailleTranslation/BrailleTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSArray;

@interface BRLTBrailleString : NSObject <NSCopying> {

	NSMutableArray* _brailleChars;

}

@property (nonatomic,readonly) NSString * unicode; 
@property (nonatomic,readonly) NSArray * brailleChars; 
@property (nonatomic,readonly) unsigned long long length; 
+(id)brfToUnicode:(id)arg1 ;
+(id)brfTable;
+(id)unicodeToBestEffortBrf:(id)arg1 ;
+(BOOL)isValidBRF:(id)arg1 ;
-(id)init;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)unicode;
-(id)initWithBrailleChars:(id)arg1 ;
-(id)initWithUnicode:(id)arg1 ;
-(id)bestEffortBrf;
-(NSArray *)brailleChars;
-(BOOL)isEqualToBrailleString:(id)arg1 ;
-(id)initWithBrf:(id)arg1 ;
@end

