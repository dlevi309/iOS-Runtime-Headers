/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(IKDOMFeatureNavigationDocument *)leftNavigationDocument;
-(IKDOMFeatureNavigationDocument *)rightNavigationDocument;
-(id)_featureWithName:(id)arg1 ;
@end

