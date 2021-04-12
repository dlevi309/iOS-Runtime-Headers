/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@protocol CoreDAVItem <NSObject>
@required
+(id)copyParseRules;
+(id)parseRuleCache;
-(void)write:(id)arg1;
-(BOOL)validate;
-(void)parserFoundAttributes:(id)arg1;
-(id)copyParseRules;
-(void)parserFoundPayload:(id)arg1;
-(void)parserFoundUnrecognizedElement:(id)arg1;
-(void)parserSuggestsBaseURL:(id)arg1;

@end


@class NSString, NSMutableSet, NSMutableArray, NSData;

@interface CoreDAVItem : NSObject <CoreDAVItem> {

	NSString* _name;
	NSString* _nameSpace;
	NSMutableSet* _attributes;
	NSMutableArray* _extraChildItems;
	NSData* _payload;
	BOOL _useCDATA;

}

@property (nonatomic,retain) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * nameSpace;                          //@synthesize nameSpace=_nameSpace - In the implementation block
@property (nonatomic,retain) NSMutableSet * attributes;                     //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * extraChildItems;              //@synthesize extraChildItems=_extraChildItems - In the implementation block
@property (nonatomic,retain) NSData * payload;                              //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) BOOL useCDATA;                                 //@synthesize useCDATA=_useCDATA - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)copyParseRules;
+(id)parseRuleCache;
-(id)init;
-(NSString *)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSMutableSet *)attributes;
-(void)setAttributes:(NSMutableSet *)arg1 ;
-(NSString *)nameSpace;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)payload;
-(void)write:(id)arg1 ;
-(id)hashString;
-(BOOL)validate;
-(id)payloadAsString;
-(long long)payloadAsNSInteger;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)parserFoundAttributes:(id)arg1 ;
-(NSMutableArray *)extraChildItems;
-(id)copyParseRules;
-(id)childrenToWrite;
-(void)setPayloadAsString:(id)arg1 ;
-(void)setNameSpace:(NSString *)arg1 ;
-(void)parserFoundPayload:(id)arg1 ;
-(void)parserFoundUnrecognizedElement:(id)arg1 ;
-(void)parserSuggestsBaseURL:(id)arg1 ;
-(id)generateXMLString;
-(void)setExtraChildItems:(NSMutableArray *)arg1 ;
-(BOOL)useCDATA;
-(void)setUseCDATA:(BOOL)arg1 ;
@end

