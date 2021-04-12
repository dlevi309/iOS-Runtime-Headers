/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(REScriptToken *)token;
-(NSDictionary *)options;
-(unsigned long long)type;
-(REScriptASTNode *)value;
-(void)setValue:(REScriptASTNode *)arg1 ;
-(id)objectValue;
-(void)setObjectValue:(id)arg1 ;
-(id)initWithToken:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3 ;
@end

