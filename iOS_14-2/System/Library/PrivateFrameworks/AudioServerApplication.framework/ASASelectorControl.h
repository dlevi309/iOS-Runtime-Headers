/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)currentItem;
-(NSArray *)currentItems;
-(NSArray *)availableItems;
-(void)setCurrentItem:(unsigned)arg1 ;
-(void)setCurrentItems:(NSArray *)arg1 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)coreAudioClassName;
-(id)nameForItem:(unsigned)arg1 ;
@end

