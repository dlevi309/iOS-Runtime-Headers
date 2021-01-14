/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TILexiconEntry : NSObject <NSCopying, NSSecureCoding> {

	NSString* _userInput;
	NSString* _documentText;

}

@property (nonatomic,readonly) NSString * documentText;              //@synthesize documentText=_documentText - In the implementation block
@property (nonatomic,readonly) NSString * userInput;                 //@synthesize userInput=_userInput - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)entryWithDocumentText:(id)arg1 userInput:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)userInput;
-(NSString *)documentText;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

