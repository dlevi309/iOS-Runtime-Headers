/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <SearchFoundation/SFRichText.h>

@interface MKSearchFoundationRichText : SFRichText {

	/*^block*/id _completionHandlers;

}

@property (nonatomic,copy) id completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
-(id)initWithString:(id)arg1 ;
-(void)setCompletionHandlers:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(BOOL)isRichTextResolved;
-(void)_invokeCompletionHandlers;
-(void)setFormattedTextPieces:(id)arg1 ;
-(id)initRichTextTitleWithMapItem:(id)arg1 resultsType:(unsigned long long)arg2 ;
-(void)loadRichTextWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)completionHandlers;
@end

