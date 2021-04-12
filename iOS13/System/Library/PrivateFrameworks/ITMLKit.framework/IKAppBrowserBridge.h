/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/IKDOMFeature.h>

@protocol IKAppBrowser;
@class IKAppContext, NSString;

@interface IKAppBrowserBridge : NSObject <IKDOMFeature> {

	double _cornerRadius;
	double _interitemSpacing;
	IKAppContext* _appContext;
	NSString* _featureName;
	id<IKAppBrowser> _appBrowser;
	UIEdgeInsets _maskInset;

}

@property (assign,nonatomic) double cornerRadius;                             //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                         //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets maskInset;                          //@synthesize maskInset=_maskInset - In the implementation block
@property (assign,nonatomic,__weak) id<IKAppBrowser> appBrowser;              //@synthesize appBrowser=_appBrowser - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                   //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;              //@synthesize appContext=_appContext - In the implementation block
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)present;
-(double)cornerRadius;
-(NSString *)featureName;
-(IKAppContext *)appContext;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
-(id<IKAppBrowser>)appBrowser;
-(double)interitemSpacing;
-(UIEdgeInsets)maskInset;
-(void)setInteritemSpacing:(double)arg1 ;
-(void)setMaskInset:(UIEdgeInsets)arg1 ;
-(void)setAppBrowser:(id<IKAppBrowser>)arg1 ;
@end

