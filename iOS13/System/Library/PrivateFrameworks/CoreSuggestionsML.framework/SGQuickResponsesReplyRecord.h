/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@interface SGQuickResponsesReplyRecord : NSObject {

	double _displayed;
	double _selected;
	double _matched;

}

@property (nonatomic,readonly) double displayed;              //@synthesize displayed=_displayed - In the implementation block
@property (nonatomic,readonly) double selected;               //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) double matched;                //@synthesize matched=_matched - In the implementation block
-(double)selected;
-(double)displayed;
-(id)initWithDisplayed:(double)arg1 selected:(double)arg2 matched:(double)arg3 ;
-(double)matched;
@end

