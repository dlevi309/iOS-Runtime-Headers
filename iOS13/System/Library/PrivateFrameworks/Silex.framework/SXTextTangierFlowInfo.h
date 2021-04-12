/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/TSDContainerInfo.h>
#import <libobjc.A.dylib/SXTangierRepDirectLayerHostingInfo.h>

@protocol TSDOwningAttachment, TSDContainerInfo, TSDRepDirectLayerHosting;
@class TSDInfoGeometry, TSPObject, NSObject, SXTextTangierFlowStorage, NSString;

@interface SXTextTangierFlowInfo : NSObject <TSDContainerInfo, SXTangierRepDirectLayerHostingInfo> {

	BOOL floatingAboveText;
	BOOL anchoredToText;
	BOOL inlineWithText;
	BOOL attachedToBodyText;
	TSDInfoGeometry* geometry;
	TSPObject*<TSDOwningAttachment> owningAttachment;
	NSObject*<TSDContainerInfo> parentInfo;
	SXTextTangierFlowStorage* _storage;
	id<TSDRepDirectLayerHosting> _directLayerHost;
	NSRange _range;

}

@property (nonatomic,readonly) SXTextTangierFlowStorage * storage;                                     //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSRange range;                                                          //@synthesize range=_range - In the implementation block
@property (assign,nonatomic,__weak) id<TSDRepDirectLayerHosting> directLayerHost;                      //@synthesize directLayerHost=_directLayerHost - In the implementation block
@property (nonatomic,readonly) BOOL hasSpeakableContent; 
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
-(SXTextTangierFlowStorage *)storage;
-(NSRange)range;
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
-(id<TSDRepDirectLayerHosting>)directLayerHost;
-(id)initWithStorage:(id)arg1 range:(NSRange)arg2 ;
-(BOOL)hasSpeakableContent;
-(void)setDirectLayerHost:(id<TSDRepDirectLayerHosting>)arg1 ;
@end

