/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKAppNavigationController.h>
#import <libobjc.A.dylib/IKDOMFeature.h>

@protocol IKAppNavigationController;
@class NSString, IKAppContext, NSMutableArray;

@interface IKDOMFeatureNavigationDocument : NSObject <IKAppNavigationController, IKDOMFeature> {

	id<IKAppNavigationController> _appNavigationController;
	NSMutableArray* _stackItems;
	NSString* _featureName;
	IKAppContext* _appContext;
	id<IKAppNavigationController> _navigationController;

}

@property (nonatomic,retain) id<IKAppNavigationController> navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                                   //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                              //@synthesize appContext=_appContext - In the implementation block
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(void)clear;
-(void)setNavigationController:(id<IKAppNavigationController>)arg1 ;
-(id)documents;
-(void)removeDocument:(id)arg1 ;
-(IKAppContext *)appContext;
-(NSString *)featureName;
-(id<IKAppNavigationController>)navigationController;
-(void)popToDocument:(id)arg1 ;
-(void)pushDocument:(id)arg1 options:(id)arg2 ;
-(void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3 ;
-(void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3 ;
-(void)popDocument;
-(void)popToRootDocument;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
@end

