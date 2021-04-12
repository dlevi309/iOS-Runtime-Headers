/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WFNaming.h>

@class NSString, NSURL, NSDictionary;

@interface WFiTunesObject : MTLModel <MTLJSONSerializing, NSSecureCoding, WFNaming> {

	NSString* _identifier;
	NSString* _name;
	NSString* _kind;
	NSString* _censoredName;
	NSURL* _viewURL;
	NSDictionary* _artworkURLs;

}

@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * kind;                                    //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) NSString * censoredName;                          //@synthesize censoredName=_censoredName - In the implementation block
@property (nonatomic,readonly) NSURL * viewURL;                                  //@synthesize viewURL=_viewURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * artworkURLs;                       //@synthesize artworkURLs=_artworkURLs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(Class)classForParsingJSONDictionary:(id)arg1 ;
+(id)allowedSecureCodingClassesByPropertyKey;
+(id)identifierJSONTransformer;
+(id)artistIDJSONTransformer;
+(id)releaseDateJSONTransformer;
+(id)artworkURLsJSONTransformer;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(NSString *)wfName;
-(NSDictionary *)artworkURLs;
-(NSURL *)viewURL;
-(id)initWithName:(id)arg1 identifier:(id)arg2 kind:(id)arg3 ;
-(NSString *)censoredName;
@end

