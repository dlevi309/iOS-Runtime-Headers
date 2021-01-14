/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)sibling;
-(unsigned)tokenIndex;
-(id)initWithIndexAndType:(unsigned)arg1 type:(int)arg2 ;
-(void)setFirstChild:(id)arg1 ;
-(void)setSibling:(id)arg1 ;
@end

