/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKViewElement.h>

@class NSString, IKDOMFeatureNavigationDocument;

@interface IKSplitTemplate : IKViewElement {

	NSString* _displayMode;
	IKDOMFeatureNavigationDocument* _leftNavigationDocument;
	IKDOMFeatureNavigationDocument* _rightNavigationDocument;

}

@property (nonatomic,copy) NSString * displayMode;                                                    //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,readonly) IKDOMFeatureNavigationDocument * leftNavigationDocument;               //@synthesize leftNavigationDocument=_leftNavigationDocument - In the implementation block
@property (nonatomic,readonly) IKDOMFeatureNavigationDocument * rightNavigationDocument;              //@synthesize rightNavigationDocument=_rightNavigationDocument - In the implementation block
+(id)supportedFeatures;
-(NSString *)displayMode;
-(void)setDisplayMode:(NSString *)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)_featureWithName:(id)arg1 ;
-(IKDOMFeatureNavigationDocument *)leftNavigationDocument;
-(IKDOMFeatureNavigationDocument *)rightNavigationDocument;
@end

