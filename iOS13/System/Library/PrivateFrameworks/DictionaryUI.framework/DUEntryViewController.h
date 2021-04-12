/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DictionaryUI.framework/DictionaryUI
*/

#import <UIKitCore/UIViewController.h>

@class DUDefinitionValue;

@interface DUEntryViewController : UIViewController {

	DUDefinitionValue* _definitionValue;

}

@property (retain) DUDefinitionValue * definitionValue;              //@synthesize definitionValue=_definitionValue - In the implementation block
+(id)entryViewControllerWithDefinitionValue:(id)arg1 ;
-(void)viewDidLoad;
-(void)setDefinitionValue:(DUDefinitionValue *)arg1 ;
-(DUDefinitionValue *)definitionValue;
-(id)initWithDefinitionValue:(id)arg1 ;
@end

