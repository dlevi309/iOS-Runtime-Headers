/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(WFContentCollection *)content;
-(long long)contentType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContent:(id)arg1 contentType:(long long)arg2 caseInsensitive:(BOOL)arg3 comparableTimeUnits:(unsigned long long)arg4 ;
-(BOOL)isCaseInsensitive;
-(unsigned long long)comparableTimeUnits;
@end

