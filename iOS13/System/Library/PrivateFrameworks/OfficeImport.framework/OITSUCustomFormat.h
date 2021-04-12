/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, OITSUCustomFormatData, NSMutableArray;

@interface OITSUCustomFormat : NSObject <NSCopying, NSMutableCopying> {

	NSString* _formatNameStem;
	NSString* _formatNameTag;
	NSString* _currencyCode;
	BOOL _currencyCodeComputed;
	int _formatType;
	OITSUCustomFormatData* _defaultFormatData;
	NSString* _formatName;
	NSMutableArray* _conditionList;

}

@property (nonatomic,readonly) NSMutableArray * conditionList;                         //@synthesize conditionList=_conditionList - In the implementation block
@property (nonatomic,readonly) int formatType;                                         //@synthesize formatType=_formatType - In the implementation block
@property (nonatomic,readonly) OITSUCustomFormatData * defaultFormatData;              //@synthesize defaultFormatData=_defaultFormatData - In the implementation block
@property (nonatomic,readonly) unsigned long long conditionCount; 
@property (nonatomic,readonly) NSString * formatName;                                  //@synthesize formatName=_formatName - In the implementation block
@property (nonatomic,readonly) NSString * formatNameStem; 
@property (nonatomic,readonly) NSString * formatNameTag; 
@property (nonatomic,readonly) NSString * currencyCode; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)currencyCode;
-(unsigned long long)conditionCount;
-(NSString *)formatName;
-(int)formatType;
-(OITSUCustomFormatData *)defaultFormatData;
-(id)conditionalFormatDataForValue:(double)arg1 ;
-(id)initWithName:(id)arg1 formatType:(int)arg2 data:(id)arg3 conditionList:(id)arg4 ;
-(id)initWithName:(id)arg1 formatType:(int)arg2 data:(id)arg3 ;
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
-(id)conditionalFormatDataForKey:(unsigned long long)arg1 ;
@end

