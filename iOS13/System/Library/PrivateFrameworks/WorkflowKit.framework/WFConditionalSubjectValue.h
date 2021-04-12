/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFContentCollection;

@interface WFConditionalSubjectValue : NSObject <NSSecureCoding> {

	BOOL _caseInsensitive;
	WFContentCollection* _content;
	long long _contentType;
	unsigned long long _comparableTimeUnits;

}

@property (nonatomic,readonly) WFContentCollection * content;                              //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) long long contentType;                                      //@synthesize contentType=_contentType - In the implementation block
@property (getter=isCaseInsensitive,nonatomic,readonly) BOOL caseInsensitive;              //@synthesize caseInsensitive=_caseInsensitive - In the implementation block
@property (nonatomic,readonly) unsigned long long comparableTimeUnits;                     //@synthesize comparableTimeUnits=_comparableTimeUnits - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)contentType;
-(WFContentCollection *)content;
-(unsigned long long)comparableTimeUnits;
-(BOOL)isCaseInsensitive;
-(id)initWithContent:(id)arg1 contentType:(long long)arg2 caseInsensitive:(BOOL)arg3 comparableTimeUnits:(unsigned long long)arg4 ;
@end

