/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableDictionary, NSMutableArray, NSArray;

@interface CACLanguageModel : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _text;
	NSMutableDictionary* _attributes;
	NSMutableArray* _children;

}

@property (retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * text;                                 //@synthesize text=_text - In the implementation block
@property (readonly) NSMutableDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (readonly) NSArray * children;                            //@synthesize children=_children - In the implementation block
-(NSArray *)children;
-(void)setText:(NSString *)arg1 ;
-(id)_mutableAttributes;
-(NSMutableDictionary *)attributes;
-(id)description;
-(NSString *)text;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_mutableChildren;
-(void)removeAllChildren;
-(id)initWithText:(id)arg1 identifier:(id)arg2 attributes:(id)arg3 ;
-(void)addChildLanguageModel:(id)arg1 ;
-(id)objectForAttribute:(id)arg1 ;
-(RXLanguageObjectRef)createRXLanguageObjectRef;
-(void)setObject:(id)arg1 forAttribute:(id)arg2 ;
-(id)_initWithLanguageModel:(id)arg1 ;
-(void)logTreeDescriptionWithLevel:(int)arg1 ;
@end

