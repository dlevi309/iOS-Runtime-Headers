/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
*/

#import <AudioServerApplication/ASAControl.h>

@class NSArray;

@interface ASASelectorControl : ASAControl {

	NSArray* _currentItems;

}

@property (assign,nonatomic) unsigned currentItem; 
@property (assign,nonatomic) NSArray * currentItems;                       //@synthesize currentItems=_currentItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availableItems; 
-(void)setCurrentItem:(unsigned)arg1 ;
-(unsigned)currentItem;
-(NSArray *)availableItems;
-(NSArray *)currentItems;
-(void)setCurrentItems:(NSArray *)arg1 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)coreAudioClassName;
-(id)nameForItem:(unsigned)arg1 ;
@end

