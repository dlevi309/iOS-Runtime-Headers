/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKMessageEntryViewLayoutMetrics : NSObject <NSSecureCoding> {

	double _defaultEntryContentViewHeight;
	double _defaultSubjectEntryContentViewHeight;
	double _defaultEntryViewHeight;
	double _defaultSubjectEntryViewHeight;
	UIEdgeInsets _entryViewContentInsets;
	UIEdgeInsets _entryViewTextAlignmentInsets;

}

@property (nonatomic,readonly) UIEdgeInsets entryViewContentInsets;                      //@synthesize entryViewContentInsets=_entryViewContentInsets - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets entryViewTextAlignmentInsets;                //@synthesize entryViewTextAlignmentInsets=_entryViewTextAlignmentInsets - In the implementation block
@property (nonatomic,readonly) double defaultEntryContentViewHeight;                     //@synthesize defaultEntryContentViewHeight=_defaultEntryContentViewHeight - In the implementation block
@property (nonatomic,readonly) double defaultSubjectEntryContentViewHeight;              //@synthesize defaultSubjectEntryContentViewHeight=_defaultSubjectEntryContentViewHeight - In the implementation block
@property (nonatomic,readonly) double defaultEntryViewHeight;                            //@synthesize defaultEntryViewHeight=_defaultEntryViewHeight - In the implementation block
@property (nonatomic,readonly) double defaultSubjectEntryViewHeight;                     //@synthesize defaultSubjectEntryViewHeight=_defaultSubjectEntryViewHeight - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cachedMetricsRecalculatingIfNecessary;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)calculateTextMetrics;
-(UIEdgeInsets)entryViewContentInsets;
-(UIEdgeInsets)entryViewTextAlignmentInsets;
-(id)initWithCoder:(id)arg1 ;
-(double)defaultEntryContentViewHeight;
-(double)defaultEntryViewHeight;
-(double)defaultSubjectEntryViewHeight;
-(double)defaultSubjectEntryContentViewHeight;
@end

