/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVMetadataItem.h>

@class AVMutableMetadataItemInternal, NSString, NSLocale, NSDictionary;

@interface AVMutableMetadataItem : AVMetadataItem {

	AVMutableMetadataItemInternal* _mutablePriv;

}

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * extendedLanguageTag; 
@property (nonatomic,copy) NSLocale * locale; 
@property (assign,nonatomic) SCD_Struct_AV6 time; 
@property (assign,nonatomic) SCD_Struct_AV6 duration; 
@property (nonatomic,copy) NSString * dataType; 
@property (nonatomic,copy) id<NSObject><NSCopying> value; 
@property (nonatomic,copy) NSDictionary * extraAttributes; 
+(id)keyPathsForValuesAffectingIdentifier;
+(id)metadataItem;
-(NSString *)dataType;
-(SCD_Struct_AV6)time;
-(void)setTime:(SCD_Struct_AV6)arg1 ;
-(NSLocale *)locale;
-(void)setDuration:(SCD_Struct_AV6)arg1 ;
-(id)keySpace;
-(void)setStartDate:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setExtendedLanguageTag:(NSString *)arg1 ;
-(id)startDate;
-(void)setDataType:(NSString *)arg1 ;
-(id)languageCode;
-(void)setValue:(id<NSObject><NSCopying>)arg1 ;
-(NSString *)extendedLanguageTag;
-(id)key;
-(void)setExtraAttributes:(NSDictionary *)arg1 ;
-(void)setKeySpace:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(SCD_Struct_AV6)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(id)arg1 ;
-(NSDictionary *)extraAttributes;
-(id<NSObject><NSCopying>)value;
@end

