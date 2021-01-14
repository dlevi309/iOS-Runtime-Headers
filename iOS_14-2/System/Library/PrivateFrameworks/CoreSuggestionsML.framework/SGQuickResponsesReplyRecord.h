/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class NSString;

@interface SGQuickResponsesReplyRecord : NSObject {

	NSString* _langResponse;
	double _displayed;
	double _selected;
	double _matched;

}

@property (nonatomic,readonly) NSString * langResponse;              //@synthesize langResponse=_langResponse - In the implementation block
@property (nonatomic,readonly) double displayed;                     //@synthesize displayed=_displayed - In the implementation block
@property (nonatomic,readonly) double selected;                      //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) double matched;                       //@synthesize matched=_matched - In the implementation block
-(double)selected;
-(double)matched;
-(double)displayed;
-(id)initWithDisplayed:(double)arg1 selected:(double)arg2 matched:(double)arg3 ;
-(NSString *)langResponse;
@end

