/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDefinitionValue:(id)arg1 ;
-(DUDefinitionValue *)definitionValue;
@end

