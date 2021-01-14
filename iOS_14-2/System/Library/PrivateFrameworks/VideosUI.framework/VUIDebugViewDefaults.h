/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSString;

@interface VUIDebugViewDefaults : NSObject {

	BOOL _defaultBoolValue;
	BOOL _integerValueType;
	NSString* _title;
	NSString* _subtitle;
	NSString* _domain;
	NSString* _defaultName;
	unsigned long long _defaultIntegerValue;

}

@property (nonatomic,readonly) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSString * domain;                                 //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSString * defaultName;                            //@synthesize defaultName=_defaultName - In the implementation block
@property (assign,nonatomic) BOOL defaultBoolValue;                               //@synthesize defaultBoolValue=_defaultBoolValue - In the implementation block
@property (assign,nonatomic) BOOL integerValueType;                               //@synthesize integerValueType=_integerValueType - In the implementation block
@property (assign,nonatomic) unsigned long long defaultIntegerValue;              //@synthesize defaultIntegerValue=_defaultIntegerValue - In the implementation block
-(NSString *)subtitle;
-(NSString *)domain;
-(NSString *)defaultName;
-(NSString *)title;
-(BOOL)integerValueType;
-(unsigned long long)defaultIntegerValue;
-(BOOL)defaultBoolValue;
-(void)toggleDefaultBoolValue;
-(void)setDefaultIntegerValue:(unsigned long long)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 domain:(id)arg3 defaultName:(id)arg4 boolType:(BOOL)arg5 ;
-(void)setDefaultBoolValue:(BOOL)arg1 ;
-(void)setIntegerValueType:(BOOL)arg1 ;
@end

