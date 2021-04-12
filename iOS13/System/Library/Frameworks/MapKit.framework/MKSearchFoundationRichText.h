/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <SearchFoundation/SFRichText.h>

@interface MKSearchFoundationRichText : SFRichText {

	/*^block*/id _completionHandlers;

}

@property (nonatomic,copy) id completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
-(id)initWithString:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(id)completionHandlers;
-(void)setCompletionHandlers:(id)arg1 ;
-(void)loadRichTextWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isRichTextResolved;
-(void)_invokeCompletionHandlers;
-(id)initRichTextTitleWithMapItem:(id)arg1 resultsType:(unsigned long long)arg2 ;
@end

