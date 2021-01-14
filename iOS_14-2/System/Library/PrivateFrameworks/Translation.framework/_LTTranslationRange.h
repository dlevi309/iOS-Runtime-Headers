/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@class NSString, NSDictionary;

@interface _LTTranslationRange : NSObject {

	BOOL _shouldTranslate;
	NSString* _identifier;
	NSString* _text;
	NSDictionary* _metaInfo;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                    //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) BOOL shouldTranslate;                    //@synthesize shouldTranslate=_shouldTranslate - In the implementation block
@property (nonatomic,copy) NSDictionary * metaInfo;                     //@synthesize metaInfo=_metaInfo - In the implementation block
-(NSString *)text;
-(id)initWithIdentifier:(id)arg1 text:(id)arg2 shouldTranslate:(BOOL)arg3 ;
-(void)setMetaInfo:(NSDictionary *)arg1 ;
-(BOOL)shouldTranslate;
-(NSDictionary *)metaInfo;
-(NSString *)identifier;
@end

