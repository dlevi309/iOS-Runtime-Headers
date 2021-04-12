/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/_PXScoreLabGraphViewDelegate.h>

@class UIPickerView, UITextField, _PXScoreLabGraphView, PXRoundProgressView, NSArray, NSDictionary, NSString;

@interface PXScoreLabViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate, UITextFieldDelegate, _PXScoreLabGraphViewDelegate> {

	UIPickerView* _xScorePickerView;
	UITextField* _xScoreSceneNameField;
	UIPickerView* _graphTypePickerView;
	UIPickerView* _yScorePickerView;
	UITextField* _yScoreSceneNameField;
	UIPickerView* _assetFilterPickerView;
	_PXScoreLabGraphView* _graphView;
	PXRoundProgressView* _progressView;
	NSArray* _scoreNames;
	NSDictionary* _keyPathByScoreName;
	NSDictionary* _timestampKeyPathByPrefix;
	NSArray* _assetFilterNames;
	NSDictionary* _assetPredicateByFilterName;
	NSDictionary* _taxonomy;
	NSDictionary* _sceneIdentifierBySceneName;
	BOOL _redrawIsDisabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)init;
-(void)scoreLabGraphView:(id)arg1 reloadProgressed:(double)arg2 ;
-(void)scoreLabGraphViewDidFinishReloading:(id)arg1 ;
-(void)redrawGraph;
-(/*^block*/id)valueGetterForScoreKeyPath:(id)arg1 ;
-(/*^block*/id)valueGetterForSceneIdentifier:(unsigned)arg1 ;
-(unsigned)identifierForSceneName:(id)arg1 ;
-(void)sceneNameChanged:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
@end

