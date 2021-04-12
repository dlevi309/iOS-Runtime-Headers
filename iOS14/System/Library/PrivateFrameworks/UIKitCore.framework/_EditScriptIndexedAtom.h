/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface _EditScriptIndexedAtom : NSObject {

	long long _editOperation;
	unsigned long long _indexToEdit;
	unsigned long long _indexInArrayB;
	NSString* _replacementText;

}

@property (assign,nonatomic) long long editOperation;                       //@synthesize editOperation=_editOperation - In the implementation block
@property (assign,nonatomic) unsigned long long indexToEdit;                //@synthesize indexToEdit=_indexToEdit - In the implementation block
@property (assign,nonatomic) unsigned long long indexInArrayB;              //@synthesize indexInArrayB=_indexInArrayB - In the implementation block
@property (nonatomic,retain) NSString * replacementText;                    //@synthesize replacementText=_replacementText - In the implementation block
+(id)atomWithEditOperation:(long long)arg1 indexToEdit:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4 ;
-(id)description;
-(NSString *)replacementText;
-(long long)editOperation;
-(unsigned long long)indexToEdit;
-(void)setIndexToEdit:(unsigned long long)arg1 ;
-(unsigned long long)indexInArrayB;
-(void)setEditOperation:(long long)arg1 ;
-(void)setIndexInArrayB:(unsigned long long)arg1 ;
-(void)setReplacementText:(NSString *)arg1 ;
-(id)initWithEditOperation:(long long)arg1 indexToEdit:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4 ;
@end

