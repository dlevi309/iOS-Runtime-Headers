/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RevealCore.framework/RevealCore
*/

#import <RevealCore/RevealCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, DDScannerResult, NSString;

@interface RVItem : NSObject <NSSecureCoding> {

	long long _type;
	long long _normalizedType;
	NSURL* _url;
	DDScannerResult* _ddResult;
	NSString* _text;
	NSRange _highlightRange;
	long long _contactPropertyType;
	NSString* _contactPropertyValue;
	BOOL _normalized;
	NSString* _clientIdentifier;
	id _clientHints;
	long long _selectionType;
	NSString* _leadingText;
	NSString* _trailingText;

}

@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long normalizedType;                     //@synthesize normalizedType=_normalizedType - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) DDScannerResult * ddResult;                   //@synthesize ddResult=_ddResult - In the implementation block
@property (nonatomic,readonly) NSString * text;                              //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * contactPropertyValue;              //@synthesize contactPropertyValue=_contactPropertyValue - In the implementation block
@property (nonatomic,readonly) long long contactPropertyType;                //@synthesize contactPropertyType=_contactPropertyType - In the implementation block
@property (nonatomic,readonly) long long selectionType;                      //@synthesize selectionType=_selectionType - In the implementation block
@property (nonatomic,readonly) NSString * textSearchContext; 
@property (nonatomic,retain) NSString * leadingText;                         //@synthesize leadingText=_leadingText - In the implementation block
@property (nonatomic,retain) NSString * trailingText;                        //@synthesize trailingText=_trailingText - In the implementation block
@property (nonatomic,readonly) NSRange highlightRange;                       //@synthesize highlightRange=_highlightRange - In the implementation block
@property (nonatomic,readonly) NSURL * normalizedURL; 
@property (nonatomic,readonly) NSString * clientIdentifier;                  //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) id clientHints;                                 //@synthesize clientHints=_clientHints - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSString *)leadingText;
-(NSString *)trailingText;
-(NSString *)text;
-(NSURL *)normalizedURL;
-(long long)normalizedType;
-(NSString *)clientIdentifier;
-(id)initWithText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(NSRange)highlightRange;
-(void)setLeadingText:(NSString *)arg1 ;
-(void)setTrailingText:(NSString *)arg1 ;
-(DDScannerResult *)ddResult;
-(id)clientHints;
-(void)setClientHints:(id)arg1 ;
-(id)initWithDDResult:(id)arg1 ;
-(void)normalize;
-(long long)selectionType;
-(id)initEmpty;
-(id)initWithURL:(id)arg1 rangeInContext:(NSRange)arg2 ;
-(id)initWithText:(id)arg1 clickedIndex:(unsigned long long)arg2 selectionRanges:(id)arg3 shouldUpdateSelection:(BOOL*)arg4 ;
-(id)initWithText:(id)arg1 selectedRange:(NSRange)arg2 customURLParser:(/*^block*/id)arg3 ;
-(void)commonInitWithText:(id)arg1 selectedRange:(NSRange)arg2 customURLParser:(/*^block*/id)arg3 lookup:(BOOL)arg4 ;
-(id)initWithClientIdentifier:(id)arg1 rangeInContext:(NSRange)arg2 ;
-(id)initWithContactProperty:(long long)arg1 value:(id)arg2 rangeInContext:(NSRange)arg3 ;
-(NSRange)textSearchRange;
-(NSString *)textSearchContext;
-(void)normalizeWithParser:(/*^block*/id)arg1 lookupOnly:(BOOL)arg2 ;
-(id)getClientHintKey:(id)arg1 ofType:(Class)arg2 ;
-(id)constrainContextSubstring:(id)arg1 range:(NSRange)arg2 leading:(BOOL)arg3 ;
-(NSString *)contactPropertyValue;
-(long long)contactPropertyType;
@end

