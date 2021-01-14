/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

