/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <libobjc.A.dylib/CKTextKitTruncating.h>

@class CKTextKitContext, NSAttributedString, NSCharacterSet, NSString;

@interface CKTextKitTailTruncater : NSObject <CKTextKitTruncating> {

	CKTextKitContext* _context;
	NSAttributedString* _truncationAttributedString;
	NSCharacterSet* _avoidTailTruncationSet;
	CGSize _constrainedSize;
	vector<_NSRange, std::__1::allocator<_NSRange> >* _visibleRanges;
	CGRect _truncationStringRect;

}

@property (nonatomic,readonly) vector<_NSRange visibleRanges;              //@synthesize visibleRanges=_visibleRanges - In the implementation block
@property (nonatomic,readonly) CGRect truncationStringRect;                //@synthesize truncationStringRect=_truncationStringRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(vector<_NSRange)visibleRanges;
-(id)initWithContext:(id)arg1 truncationAttributedString:(id)arg2 avoidTailTruncationSet:(id)arg3 constrainedSize:(CGSize)arg4 ;
-(CGRect)truncationStringRect;
-(unsigned long long)_calculateCharacterIndexBeforeTruncationMessage:(id)arg1 textStorage:(id)arg2 textContainer:(id)arg3 ;
-(unsigned long long)_findTruncationInsertionPointAtOrBeforeCharacterIndex:(unsigned long long)arg1 layoutManager:(id)arg2 textStorage:(id)arg3 ;
-(void)_truncate;
@end

