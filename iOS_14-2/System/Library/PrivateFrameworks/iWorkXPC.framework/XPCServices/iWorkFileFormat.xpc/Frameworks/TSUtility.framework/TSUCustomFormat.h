/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, TSUCustomFormatData, NSMutableArray;

@interface TSUCustomFormat : NSObject <NSCopying, NSMutableCopying> {

	NSString* _formatNameStem;
	NSString* _formatNameTag;
	NSString* _currencyCode;
	BOOL _currencyCodeComputed;
	unsigned _formatType;
	TSUCustomFormatData* _defaultFormatData;
	NSString* _formatName;
	NSMutableArray* _conditionList;

}

@property (nonatomic,readonly) NSMutableArray * conditionList;                       //@synthesize conditionList=_conditionList - In the implementation block
@property (nonatomic,readonly) unsigned formatType;                                  //@synthesize formatType=_formatType - In the implementation block
@property (nonatomic,readonly) TSUCustomFormatData * defaultFormatData;              //@synthesize defaultFormatData=_defaultFormatData - In the implementation block
@property (nonatomic,readonly) unsigned long long conditionCount; 
@property (nonatomic,readonly) NSString * formatName;                                //@synthesize formatName=_formatName - In the implementation block
@property (nonatomic,readonly) NSString * formatNameStem; 
@property (nonatomic,readonly) NSString * formatNameTag; 
@property (nonatomic,readonly) BOOL conditionsAllowed; 
@property (nonatomic,readonly) NSString * currencyCode; 
-(NSString *)currencyCode;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)conditionCount;
-(unsigned)formatType;
-(NSString *)formatName;
-(id)initWithName:(id)arg1 formatType:(unsigned)arg2 data:(id)arg3 conditionList:(id)arg4 ;
-(TSUCustomFormatData *)defaultFormatData;
-(id)initWithName:(id)arg1 formatType:(unsigned)arg2 data:(id)arg3 ;
-(NSMutableArray *)conditionList;
-(void)p_addConditionOfType:(int)arg1 value:(double)arg2 data:(id)arg3 ;
-(void)p_makeFormatNameStemAndTag;
-(NSString *)formatNameStem;
-(BOOL)p_isEqual:(id)arg1 matchingFullName:(BOOL)arg2 ;
-(id)conditionalFormatDataForValue:(double)arg1 outKey:(unsigned long long*)arg2 ;
-(id)conditionalFormatAtIndex:(unsigned long long)arg1 ;
-(id)customFormatWithNewName:(id)arg1 ;
-(NSString *)formatNameTag;
-(BOOL)isEqualWithStemNameMatching:(id)arg1 ;
-(id)conditionalFormatDataForValue:(double)arg1 ;
-(id)conditionalFormatDataForKey:(unsigned long long)arg1 ;
-(BOOL)conditionsAllowed;
-(void)p_setFormatType:(unsigned)arg1 ;
@end

