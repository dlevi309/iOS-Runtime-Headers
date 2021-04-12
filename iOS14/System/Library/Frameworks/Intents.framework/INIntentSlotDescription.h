/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INIntentSlotDescriptionExport.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, INCodableAttribute, NSNumber;

@interface INIntentSlotDescription : NSObject <INIntentSlotDescriptionExport, NSCopying> {

	BOOL _isExtended;
	BOOL _isPrivate;
	Class _resolutionResultClass;
	NSString* _name;
	unsigned long long _tag;
	NSString* _facadePropertyName;
	NSString* _dataPropertyName;
	long long _valueType;
	long long _valueStyle;
	NSArray* _resolveSelectorStrings;
	NSArray* _provideOptionsSelectorStrings;
	NSArray* _defaultValueSelectorStrings;
	INCodableAttribute* _codableAttribute;
	NSNumber* _rank;

}

@property (nonatomic,readonly) BOOL isEnum; 
@property (nonatomic,copy,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long tag;                                    //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy,readonly) NSString * facadePropertyName;                        //@synthesize facadePropertyName=_facadePropertyName - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataPropertyName;                          //@synthesize dataPropertyName=_dataPropertyName - In the implementation block
@property (nonatomic,readonly) long long valueType;                                       //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) long long valueStyle;                                      //@synthesize valueStyle=_valueStyle - In the implementation block
@property (nonatomic,readonly) BOOL isExtended;                                           //@synthesize isExtended=_isExtended - In the implementation block
@property (nonatomic,readonly) BOOL isPrivate;                                            //@synthesize isPrivate=_isPrivate - In the implementation block
@property (nonatomic,readonly) SEL resolveSelector; 
@property (nonatomic,readonly) SEL deprecatedResolveSelector; 
@property (nonatomic,copy,readonly) NSArray * resolveSelectorStrings;                     //@synthesize resolveSelectorStrings=_resolveSelectorStrings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * provideOptionsSelectorStrings;              //@synthesize provideOptionsSelectorStrings=_provideOptionsSelectorStrings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * defaultValueSelectorStrings;                //@synthesize defaultValueSelectorStrings=_defaultValueSelectorStrings - In the implementation block
@property (nonatomic,copy,readonly) INCodableAttribute * codableAttribute;                //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (nonatomic,readonly) Class resolutionResultClass;                               //@synthesize resolutionResultClass=_resolutionResultClass - In the implementation block
@property (nonatomic,retain) NSNumber * rank;                                             //@synthesize rank=_rank - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(INCodableAttribute *)codableAttribute;
-(long long)valueType;
-(void)setRank:(NSNumber *)arg1 ;
-(SEL)deprecatedResolveSelector;
-(BOOL)isEnum;
-(void)setValue:(id)arg1 forSlotComposer:(id)arg2 ;
-(unsigned long long)tag;
-(NSArray *)defaultValueSelectorStrings;
-(id)valueForSlotComposer:(id)arg1 ;
-(id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 isExtended:(BOOL)arg5 isPrivate:(BOOL)arg6 valueType:(long long)arg7 valueStyle:(long long)arg8 defaultValueSelectorStrings:(id)arg9 provideOptionsSelectorStrings:(id)arg10 resolutionResultClass:(Class)arg11 resolveSelectors:(SEL)arg12 ;
-(NSString *)name;
-(SEL)resolveSelector;
-(long long)valueStyle;
-(NSArray *)provideOptionsSelectorStrings;
-(BOOL)isExtended;
-(NSString *)dataPropertyName;
-(unsigned long long)hash;
-(NSNumber *)rank;
-(NSArray *)resolveSelectorStrings;
-(BOOL)isPrivate;
-(id)localizeValue:(id)arg1 withLocalizer:(id)arg2 ;
-(Class)resolutionResultClass;
-(id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 isExtended:(BOOL)arg5 isPrivate:(BOOL)arg6 valueType:(long long)arg7 valueStyle:(long long)arg8 codableAttribute:(id)arg9 defaultValueSelectorStrings:(id)arg10 provideOptionsSelectorStrings:(id)arg11 resolutionResultClass:(Class)arg12 resolveSelectors:(SEL)arg13 ;
-(id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 valueType:(long long)arg5 valueStyle:(long long)arg6 isExtended:(BOOL)arg7 isPrivate:(BOOL)arg8 resolveSelectors:(SEL)arg9 ;
-(id)localizeValue:(id)arg1 forLanguage:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)facadePropertyName;
-(BOOL)isEqual:(id)arg1 ;
@end

