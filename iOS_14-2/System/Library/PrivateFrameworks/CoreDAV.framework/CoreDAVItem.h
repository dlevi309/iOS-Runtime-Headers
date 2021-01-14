/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@protocol CoreDAVItem <NSObject>
@required
+(id)parseRuleCache;
+(id)copyParseRules;
-(BOOL)validate;
-(void)write:(id)arg1;
-(id)copyParseRules;
-(void)parserFoundAttributes:(id)arg1;
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
+(id)parseRuleCache;
+(id)copyParseRules;
-(BOOL)validate;
-(void)setPayload:(NSData *)arg1 ;
-(id)init;
-(void)write:(id)arg1 ;
-(void)setAttributes:(NSMutableSet *)arg1 ;
-(NSString *)nameSpace;
-(NSData *)payload;
-(NSString *)name;
-(NSMutableSet *)attributes;
-(NSString *)description;
-(id)hashString;
-(id)payloadAsString;
-(void)setName:(NSString *)arg1 ;
-(NSMutableArray *)extraChildItems;
-(void)setNameSpace:(NSString *)arg1 ;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
-(id)childrenToWrite;
-(void)parserFoundAttributes:(id)arg1 ;
-(void)parserFoundPayload:(id)arg1 ;
-(void)parserFoundUnrecognizedElement:(id)arg1 ;
-(void)parserSuggestsBaseURL:(id)arg1 ;
-(long long)payloadAsNSInteger;
-(void)setPayloadAsString:(id)arg1 ;
-(id)generateXMLString;
-(void)setExtraChildItems:(NSMutableArray *)arg1 ;
-(BOOL)useCDATA;
-(void)setUseCDATA:(BOOL)arg1 ;
@end

