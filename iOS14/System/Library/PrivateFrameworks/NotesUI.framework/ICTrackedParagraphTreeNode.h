/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableArray *)children;
-(ICTrackedParagraphTreeNode *)parent;
-(BOOL)checked;
-(void)addChild:(id)arg1 ;
-(void)setIndent:(long long)arg1 ;
-(long long)indent;
-(void)setParent:(ICTrackedParagraphTreeNode *)arg1 ;
-(id)description;
-(void)setChecked:(BOOL)arg1 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(void)setTrackedParagraph:(ICTrackedParagraph *)arg1 ;
-(ICTrackedParagraph *)trackedParagraph;
-(void)recursivlySortCheckedItemsToBottom;
-(id)linerizedRepresentation;
-(void)recursivlyAddTrackedParagraphsToArray:(id)arg1 ;
-(void)recursivlyAddDescriptionToString:(id)arg1 ;
-(NSString *)recurisiveDescription;
@end

