/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@class ICTrackedParagraph, NSMutableArray, NSString;

@interface ICTrackedParagraphTreeNode : NSObject {

	BOOL _checked;
	ICTrackedParagraph* _trackedParagraph;
	NSMutableArray* _children;
	ICTrackedParagraphTreeNode* _parent;
	long long _indent;
	NSString* _string;

}

@property (nonatomic,retain) ICTrackedParagraph * trackedParagraph;                   //@synthesize trackedParagraph=_trackedParagraph - In the implementation block
@property (nonatomic,retain) NSMutableArray * children;                               //@synthesize children=_children - In the implementation block
@property (assign,nonatomic,__weak) ICTrackedParagraphTreeNode * parent;              //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic) BOOL checked;                                            //@synthesize checked=_checked - In the implementation block
@property (assign,nonatomic) long long indent;                                        //@synthesize indent=_indent - In the implementation block
@property (nonatomic,retain) NSString * string;                                       //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSString * recurisiveDescription; 
+(id)nodeFromTrackedParagraph:(id)arg1 textView:(id)arg2 ;
+(id)placeholderNodeWithIndentation:(unsigned long long)arg1 ;
-(NSString *)string;
-(id)description;
-(void)addChild:(id)arg1 ;
-(ICTrackedParagraphTreeNode *)parent;
-(void)setParent:(ICTrackedParagraphTreeNode *)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(NSMutableArray *)children;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)checked;
-(long long)indent;
-(void)setIndent:(long long)arg1 ;
-(void)setTrackedParagraph:(ICTrackedParagraph *)arg1 ;
-(ICTrackedParagraph *)trackedParagraph;
-(void)recursivlySortCheckedItemsToBottom;
-(id)linerizedRepresentation;
-(void)recursivlyAddTrackedParagraphsToArray:(id)arg1 ;
-(void)recursivlyAddDescriptionToString:(id)arg1 ;
-(NSString *)recurisiveDescription;
@end

