/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, TIKeyboardCandidate;

@interface UITextSuggestion : NSObject <NSCopying> {

	BOOL _displayStylePlain;
	BOOL __shouldPersist;
	NSString* _inputText;
	NSString* _searchText;
	NSString* _displayText;
	NSString* _headerText;

}

@property (nonatomic,readonly) BOOL _shouldPersist;                                   //@synthesize _shouldPersist=__shouldPersist - In the implementation block
@property (nonatomic,readonly) TIKeyboardCandidate * _keyboardCandidate; 
@property (nonatomic,copy,readonly) NSString * inputText;                             //@synthesize inputText=_inputText - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                     //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,copy) NSString * displayText;                                    //@synthesize displayText=_displayText - In the implementation block
@property (nonatomic,copy) NSString * headerText;                                     //@synthesize headerText=_headerText - In the implementation block
@property (assign,nonatomic) BOOL displayStylePlain;                                  //@synthesize displayStylePlain=_displayStylePlain - In the implementation block
+(id)textSuggestionWithInputText:(id)arg1 ;
+(id)textSuggestionWithInputText:(id)arg1 searchText:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)inputText;
-(NSString *)searchText;
-(TIKeyboardCandidate *)_keyboardCandidate;
-(NSString *)displayText;
-(id)initWithInputText:(id)arg1 searchText:(id)arg2 displayText:(id)arg3 headerText:(id)arg4 ;
-(void)setSearchText:(NSString *)arg1 ;
-(void)setDisplayText:(NSString *)arg1 ;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(BOOL)displayStylePlain;
-(void)setDisplayStylePlain:(BOOL)arg1 ;
-(BOOL)_shouldPersist;
@end

