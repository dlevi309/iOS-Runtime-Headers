/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class REScriptToken, NSDictionary, REScriptASTNode, NSString;

@interface _RESymbolDefinition : NSObject {

	unsigned long long _type;
	REScriptToken* _token;
	NSDictionary* _options;
	REScriptASTNode* _value;
	id _objectValue;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) REScriptToken * token;                //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;               //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) REScriptASTNode * value;                //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) id objectValue;                         //@synthesize objectValue=_objectValue - In the implementation block
-(id)objectValue;
-(NSDictionary *)options;
-(NSString *)name;
-(void)setValue:(REScriptASTNode *)arg1 ;
-(unsigned long long)type;
-(void)setObjectValue:(id)arg1 ;
-(REScriptToken *)token;
-(REScriptASTNode *)value;
-(id)initWithToken:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3 ;
@end

