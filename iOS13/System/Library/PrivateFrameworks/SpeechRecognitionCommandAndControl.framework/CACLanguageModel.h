/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSMutableDictionary *)attributes;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSArray *)children;
-(id)_mutableAttributes;
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

