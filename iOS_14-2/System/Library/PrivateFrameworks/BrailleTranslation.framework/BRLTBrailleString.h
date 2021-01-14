/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(NSString *)unicode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBrailleChars:(id)arg1 ;
-(id)initWithUnicode:(id)arg1 ;
-(id)bestEffortBrf;
-(NSArray *)brailleChars;
-(BOOL)isEqualToBrailleString:(id)arg1 ;
-(id)initWithBrf:(id)arg1 ;
@end

