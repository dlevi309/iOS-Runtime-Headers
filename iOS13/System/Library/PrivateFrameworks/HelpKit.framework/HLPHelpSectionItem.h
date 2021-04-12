/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <HelpKit/HLPHelpItem.h>

@class NSArray;

@interface HLPHelpSectionItem : HLPHelpItem {

	BOOL _open;
	NSArray* _children;

}

@property (assign,getter=isOpen,nonatomic) BOOL open;              //@synthesize open=_open - In the implementation block
@property (nonatomic,copy) NSArray * children;                     //@synthesize children=_children - In the implementation block
-(id)debugDescription;
-(BOOL)isOpen;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(void)setOpen:(BOOL)arg1 ;
@end

