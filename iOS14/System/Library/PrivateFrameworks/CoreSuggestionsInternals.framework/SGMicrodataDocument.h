/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSMutableDictionary, NSMutableArray, NSDictionary, NSArray;

@interface SGMicrodataDocument : NSObject {

	NSMutableDictionary* _htmlIds;
	NSMutableArray* _items;

}

@property (nonatomic,readonly) NSDictionary * htmlIds;              //@synthesize htmlIds=_htmlIds - In the implementation block
@property (nonatomic,readonly) NSArray * items;                     //@synthesize items=_items - In the implementation block
-(void)addItem:(id)arg1 ;
-(id)init;
-(NSArray *)items;
-(NSDictionary *)htmlIds;
-(id)jsonLdForItem:(id)arg1 ;
-(id)asJsonLd;
-(void)setHtmlIdItemScope:(id)arg1 forHtmlId:(id)arg2 ;
@end

