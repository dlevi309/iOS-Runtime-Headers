/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDictionary;

@interface WFUlyssesSheet : MTLModel <MTLJSONSerializing, WFNaming, NSSecureCoding> {

	NSString* _identifier;
	NSString* _title;
	NSString* _text;
	NSArray* _keywords;
	NSArray* _notes;

}

@property (nonatomic,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSArray * keywords;                               //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,readonly) NSArray * notes;                                  //@synthesize notes=_notes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)allowedSecureCodingClassesByPropertyKey;
-(NSArray *)notes;
-(NSArray *)keywords;
-(NSString *)wfName;
-(NSString *)text;
-(NSString *)identifier;
-(NSString *)title;
@end

