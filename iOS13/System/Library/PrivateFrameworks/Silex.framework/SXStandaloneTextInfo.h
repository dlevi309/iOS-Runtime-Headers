/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/TSDContainerInfo.h>

@protocol TSDOwningAttachment, TSDContainerInfo;
@class TSDInfoGeometry, TSPObject, NSObject, SXTextTangierStorage, NSString;

@interface SXStandaloneTextInfo : NSObject <TSDContainerInfo> {

	BOOL floatingAboveText;
	BOOL anchoredToText;
	BOOL inlineWithText;
	BOOL attachedToBodyText;
	TSDInfoGeometry* geometry;
	TSPObject*<TSDOwningAttachment> owningAttachment;
	NSObject*<TSDContainerInfo> parentInfo;
	SXTextTangierStorage* _storage;

}

@property (nonatomic,readonly) SXTextTangierStorage * storage;                                         //@synthesize storage=_storage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
-(void)dealloc;
-(SXTextTangierStorage *)storage;
-(id)initWithStorage:(id)arg1 ;
-(TSDInfoGeometry *)geometry;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(Class)layoutClass;
-(id)copyWithContext:(id)arg1 ;
-(void)setParentInfo:(NSObject*<TSDContainerInfo>)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1 ;
-(Class)repClass;
-(BOOL)isThemeContent;
-(NSObject*<TSDContainerInfo>)parentInfo;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(void)setOwningAttachment:(TSPObject*<TSDOwningAttachment>)arg1 ;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(BOOL)isFloatingAboveText;
-(BOOL)isAnchoredToText;
-(BOOL)isInlineWithText;
-(BOOL)isAttachedToBodyText;
-(id)childInfos;
-(BOOL)anchoredToText;
-(BOOL)attachedToBodyText;
-(BOOL)floatingAboveText;
-(BOOL)inlineWithText;
@end

