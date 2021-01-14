/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface _LTTranslationSense : NSObject <NSSecureCoding> {

	BOOL _phrasebookMatch;
	NSString* _senseID;
	NSString* _definition;
	NSString* _sourceMatch;
	NSString* _targetMatch;
	NSArray* _labels;

}

@property (assign,getter=isPhrasebookMatch,nonatomic) BOOL phrasebookMatch;              //@synthesize phrasebookMatch=_phrasebookMatch - In the implementation block
@property (nonatomic,copy) NSString * senseID;                                           //@synthesize senseID=_senseID - In the implementation block
@property (nonatomic,copy) NSString * definition;                                        //@synthesize definition=_definition - In the implementation block
@property (nonatomic,copy) NSString * sourceMatch;                                       //@synthesize sourceMatch=_sourceMatch - In the implementation block
@property (nonatomic,copy) NSString * targetMatch;                                       //@synthesize targetMatch=_targetMatch - In the implementation block
@property (nonatomic,copy) NSArray * labels;                                             //@synthesize labels=_labels - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)senseFromDictionary:(id)arg1 ;
+(id)sensesFromArray:(id)arg1 ;
+(id)senseWithPhrasebookMatchMeta:(id)arg1 ;
-(void)setLabels:(NSArray *)arg1 ;
-(id)jsonRepresentation;
-(NSArray *)labels;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)senseID;
-(void)setDefinition:(NSString *)arg1 ;
-(void)setSenseID:(NSString *)arg1 ;
-(void)setPhrasebookMatch:(BOOL)arg1 ;
-(BOOL)isPhrasebookMatch;
-(void)setSourceMatch:(NSString *)arg1 ;
-(void)setTargetMatch:(NSString *)arg1 ;
-(NSString *)sourceMatch;
-(NSString *)targetMatch;
-(NSString *)definition;
-(id)initWithCoder:(id)arg1 ;
@end

