/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class NSString;

@interface SGQuickResponse : NSObject {

	BOOL _isCustomResponse;
	NSString* _text;
	NSString* _lang;
	unsigned long long _replyTextId;
	unsigned long long _styleGroupId;
	unsigned long long _semanticClassId;
	unsigned long long _modelId;
	unsigned long long _categoryId;

}

@property (nonatomic,copy,readonly) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * lang;                            //@synthesize lang=_lang - In the implementation block
@property (nonatomic,readonly) unsigned long long replyTextId;                  //@synthesize replyTextId=_replyTextId - In the implementation block
@property (nonatomic,readonly) unsigned long long styleGroupId;                 //@synthesize styleGroupId=_styleGroupId - In the implementation block
@property (nonatomic,readonly) unsigned long long semanticClassId;              //@synthesize semanticClassId=_semanticClassId - In the implementation block
@property (nonatomic,readonly) unsigned long long modelId;                      //@synthesize modelId=_modelId - In the implementation block
@property (nonatomic,readonly) unsigned long long categoryId;                   //@synthesize categoryId=_categoryId - In the implementation block
@property (nonatomic,readonly) BOOL isCustomResponse;                           //@synthesize isCustomResponse=_isCustomResponse - In the implementation block
-(NSString *)text;
-(NSString *)lang;
-(unsigned long long)modelId;
-(BOOL)isCustomResponse;
-(unsigned long long)replyTextId;
-(unsigned long long)styleGroupId;
-(unsigned long long)semanticClassId;
-(unsigned long long)categoryId;
-(id)initWithText:(id)arg1 lang:(id)arg2 replyTextId:(unsigned long long)arg3 styleGroupId:(unsigned long long)arg4 semanticClassId:(unsigned long long)arg5 modelId:(unsigned long long)arg6 categoryId:(unsigned long long)arg7 isCustomResponse:(BOOL)arg8 ;
@end

