/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface EDTokenTreeNode : NSObject {

	unsigned mTokenIndex;
	int mTokenType;
	EDTokenTreeNode* mFirstChild;
	EDTokenTreeNode* mSibling;

}
+(id)tokenTreeNodeWithIndexAndType:(unsigned)arg1 type:(int)arg2 ;
-(id)init;
-(id)description;
-(id)firstChild;
-(unsigned)tokenIndex;
-(id)initWithIndexAndType:(unsigned)arg1 type:(int)arg2 ;
-(void)setFirstChild:(id)arg1 ;
-(void)setSibling:(id)arg1 ;
-(id)sibling;
@end

