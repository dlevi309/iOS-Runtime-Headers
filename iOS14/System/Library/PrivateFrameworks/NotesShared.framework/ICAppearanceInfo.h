/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@interface ICAppearanceInfo : NSObject {

	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isDark; 
+(id)appearanceInfoWithType:(unsigned long long)arg1 ;
+(void)enumerateAppearanceTypesUsingBlock:(/*^block*/id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)hash;
-(BOOL)isDark;
-(BOOL)isEqual:(id)arg1 ;
@end

