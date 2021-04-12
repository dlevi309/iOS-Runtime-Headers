/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataItem.h>

@class AVMutableMetadataItemInternal, NSString, NSLocale, NSDictionary;

@interface AVMutableMetadataItem : AVMetadataItem {

	AVMutableMetadataItemInternal* _mutablePriv;

}

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * extendedLanguageTag; 
@property (nonatomic,copy) NSLocale * locale; 
@property (assign,nonatomic) SCD_Struct_AV7 time; 
@property (assign,nonatomic) SCD_Struct_AV7 duration; 
@property (nonatomic,copy) NSString * dataType; 
@property (nonatomic,copy) id<NSObject><NSCopying> value; 
@property (nonatomic,copy) NSDictionary * extraAttributes; 
+(id)metadataItem;
+(id)keyPathsForValuesAffectingIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)key;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)languageCode;
-(NSString *)identifier;
-(id<NSObject><NSCopying>)value;
-(void)setValue:(id<NSObject><NSCopying>)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)startDate;
-(void)setKey:(id)arg1 ;
-(SCD_Struct_AV7)duration;
-(SCD_Struct_AV7)time;
-(NSString *)dataType;
-(void)setTime:(SCD_Struct_AV7)arg1 ;
-(void)setStartDate:(id)arg1 ;
-(void)setDuration:(SCD_Struct_AV7)arg1 ;
-(NSString *)extendedLanguageTag;
-(id)keySpace;
-(NSDictionary *)extraAttributes;
-(void)setDataType:(NSString *)arg1 ;
-(void)setKeySpace:(id)arg1 ;
-(void)setExtraAttributes:(NSDictionary *)arg1 ;
-(void)setExtendedLanguageTag:(NSString *)arg1 ;
@end

