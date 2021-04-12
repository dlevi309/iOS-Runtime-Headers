/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/INJSONSerializable.h>

@class NSDictionary, NSString;

@interface INParameterContexts : NSObject <INJSONSerializable> {

	NSDictionary* _suggestedValuesDictionary;
	NSDictionary* _typedSuggestedValuesDictionary;
	NSDictionary* _operatorsDictionary;

}

@property (setter=_setSuggestedValuesDictionary:,nonatomic,retain) NSDictionary * _suggestedValuesDictionary;                        //@synthesize suggestedValuesDictionary=_suggestedValuesDictionary - In the implementation block
@property (setter=_setTypedSuggestedValuesDictionary:,nonatomic,retain) NSDictionary * _typedSuggestedValuesDictionary;              //@synthesize typedSuggestedValuesDictionary=_typedSuggestedValuesDictionary - In the implementation block
@property (setter=_setOperatorsDictionary:,nonatomic,retain) NSDictionary * _operatorsDictionary;                                    //@synthesize operatorsDictionary=_operatorsDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)_isEmpty;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(NSDictionary *)_suggestedValuesDictionary;
-(NSDictionary *)_typedSuggestedValuesDictionary;
-(NSDictionary *)_operatorsDictionary;
-(id)_initWithIntent:(id)arg1 decoder:(id)arg2 JSONDictionary:(id)arg3 ;
-(void)_updateOperatorsForIntent:(id)arg1 JSONDictionary:(id)arg2 ;
-(void)_updateSuggestedValuesForIntent:(id)arg1 decoder:(id)arg2 JSONDictionary:(id)arg3 ;
-(void)_setSuggestedValuesDictionary:(id)arg1 ;
-(void)_setTypedSuggestedValuesDictionary:(id)arg1 ;
-(void)_setOperatorsDictionary:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
@end

