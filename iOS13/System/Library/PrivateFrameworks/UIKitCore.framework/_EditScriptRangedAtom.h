/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString;

@interface _EditScriptRangedAtom : NSObject {

	NSString* _replacementText;
	NSRange _editRange;

}

@property (assign,nonatomic) NSRange editRange;                       //@synthesize editRange=_editRange - In the implementation block
@property (nonatomic,retain) NSString * replacementText;              //@synthesize replacementText=_replacementText - In the implementation block
+(id)atomWithEditRange:(NSRange)arg1 replacementText:(id)arg2 ;
-(id)description;
-(NSString *)replacementText;
-(NSRange)editRange;
-(void)setReplacementText:(NSString *)arg1 ;
-(void)setEditRange:(NSRange)arg1 ;
-(id)initWithEditRange:(NSRange)arg1 replacementText:(id)arg2 ;
@end

