/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

@class ICSearchResult;


@protocol ICNotePreviewing <NSObject>
@property (nonatomic,readonly) id<ICSearchIndexableNote> note; 
@property (nonatomic,readonly) ICSearchResult * searchResult; 
@required
-(ICSearchResult *)searchResult;
-(id<ICSearchIndexableNote>)note;
-(void)setupPreview;
-(id)initWithNote:(id)arg1;
-(id)initWithNote:(id)arg1 searchResult:(id)arg2;
-(void)setupPreviewWithInitialFrame:(CGRect)arg1;

@end

