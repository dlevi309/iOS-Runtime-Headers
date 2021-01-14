/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)debugDescription;
-(id)description;
@end

