/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <UIKitCore/UICollectionViewController.h>

@protocol CACCorrectionsCollectionViewControllerDelegate;
@class NSString, NSArray;

@interface CACCorrectionsCollectionViewController : UICollectionViewController {

	id<CACCorrectionsCollectionViewControllerDelegate> _delegate;
	NSString* _text;
	NSArray* _alternatives;
	NSArray* _emojis;

}

@property (assign,nonatomic,__weak) id<CACCorrectionsCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text;                                                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSArray * alternatives;                                                            //@synthesize alternatives=_alternatives - In the implementation block
@property (nonatomic,copy) NSArray * emojis;                                                                  //@synthesize emojis=_emojis - In the implementation block
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)init;
-(id<CACCorrectionsCollectionViewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setAlternatives:(NSArray *)arg1 ;
-(void)setDelegate:(id<CACCorrectionsCollectionViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(NSString *)text;
-(NSArray *)emojis;
-(NSArray *)alternatives;
-(void)setEmojis:(NSArray *)arg1 ;
-(void)_didTapCancel:(id)arg1 ;
-(id)_itemsInSection:(long long)arg1 ;
@end

