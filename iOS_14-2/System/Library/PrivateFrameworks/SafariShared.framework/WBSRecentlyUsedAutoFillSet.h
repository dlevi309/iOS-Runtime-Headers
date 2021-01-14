/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSArray, NSString;

@interface WBSRecentlyUsedAutoFillSet : NSObject {

	NSArray* _fillMatches;
	NSArray* _skipMatches;
	NSString* _label;

}

@property (nonatomic,copy,readonly) NSArray * fillMatches;              //@synthesize fillMatches=_fillMatches - In the implementation block
@property (nonatomic,copy,readonly) NSArray * skipMatches;              //@synthesize skipMatches=_skipMatches - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                   //@synthesize label=_label - In the implementation block
-(NSArray *)fillMatches;
-(id)initWithFillMatches:(id)arg1 skipMatches:(id)arg2 label:(id)arg3 ;
-(NSArray *)skipMatches;
-(NSString *)label;
@end

