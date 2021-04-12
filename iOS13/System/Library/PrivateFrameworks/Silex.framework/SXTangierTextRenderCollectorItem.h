/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol TSDRepDirectLayerHosting;
#import <Silex/Silex-Structs.h>
@class SXTextTangierFlowInfo, SXTextTangierStorage, SXTextTangierFlowStorage, NSString, UIView, SXTextTangierTextLayout, SXTextTangierFlowLayout;

@interface SXTangierTextRenderCollectorItem : NSObject {

	BOOL _selectable;
	SXTextTangierFlowInfo* _flowInfo;
	SXTextTangierStorage* _storage;
	SXTextTangierFlowStorage* _flowStorage;
	NSString* _componentIdentifier;
	UIView*<TSDRepDirectLayerHosting> _directLayerHost;
	SXTextTangierTextLayout* _layout;
	SXTextTangierFlowLayout* _flowLayout;
	NSRange _flowRange;

}

@property (nonatomic,retain) SXTextTangierStorage * storage;                                   //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) SXTextTangierTextLayout * layout;                                 //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) SXTextTangierFlowLayout * flowLayout;                             //@synthesize flowLayout=_flowLayout - In the implementation block
@property (nonatomic,readonly) SXTextTangierFlowInfo * flowInfo;                               //@synthesize flowInfo=_flowInfo - In the implementation block
@property (nonatomic,readonly) SXTextTangierFlowStorage * flowStorage;                         //@synthesize flowStorage=_flowStorage - In the implementation block
@property (nonatomic,readonly) NSRange flowRange;                                              //@synthesize flowRange=_flowRange - In the implementation block
@property (nonatomic,readonly) NSString * componentIdentifier;                                 //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL selectable;                                                //@synthesize selectable=_selectable - In the implementation block
@property (nonatomic,readonly) UIView*<TSDRepDirectLayerHosting> directLayerHost;              //@synthesize directLayerHost=_directLayerHost - In the implementation block
-(id)description;
-(id)debugDescription;
-(SXTextTangierStorage *)storage;
-(void)setStorage:(SXTextTangierStorage *)arg1 ;
-(SXTextTangierTextLayout *)layout;
-(void)setLayout:(SXTextTangierTextLayout *)arg1 ;
-(void)setFlowLayout:(SXTextTangierFlowLayout *)arg1 ;
-(SXTextTangierFlowLayout *)flowLayout;
-(BOOL)selectable;
-(NSString *)componentIdentifier;
-(UIView*<TSDRepDirectLayerHosting>)directLayerHost;
-(SXTextTangierFlowInfo *)flowInfo;
-(NSRange)flowRange;
-(id)initWithStorage:(id)arg1 layout:(id)arg2 directLayerHost:(id)arg3 selectable:(BOOL)arg4 componentIdentifier:(id)arg5 ;
-(void)updateWithLayout:(id)arg1 ;
-(void)appendToFlowStorage:(id)arg1 ;
-(id)flowLayoutWithICC:(id)arg1 ;
-(SXTextTangierFlowStorage *)flowStorage;
@end

