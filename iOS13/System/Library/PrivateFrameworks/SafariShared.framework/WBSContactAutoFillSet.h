/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSDictionary, NSString, NSArray, NSSet;

@interface WBSContactAutoFillSet : NSObject {

	NSDictionary* _controlIDToValueMap;
	NSString* _label;
	NSArray* _fillDisplayProperties;
	NSArray* _skipDisplayProperties;
	NSSet* _propertiesToFillOrSkip;

}

@property (nonatomic,copy,readonly) NSDictionary * controlIDToValueMap;              //@synthesize controlIDToValueMap=_controlIDToValueMap - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                                //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fillDisplayProperties;                 //@synthesize fillDisplayProperties=_fillDisplayProperties - In the implementation block
@property (nonatomic,copy,readonly) NSArray * skipDisplayProperties;                 //@synthesize skipDisplayProperties=_skipDisplayProperties - In the implementation block
@property (nonatomic,copy,readonly) NSSet * propertiesToFillOrSkip;                  //@synthesize propertiesToFillOrSkip=_propertiesToFillOrSkip - In the implementation block
+(id)displayStringsForSkipMatches:(id)arg1 matchesForForm:(id)arg2 formDataController:(id)arg3 ;
+(id)displayStringsForFillMatches:(id)arg1 skipMatches:(id)arg2 matchesForForm:(id)arg3 label:(id)arg4 formDataController:(id)arg5 ;
-(NSString *)label;
-(NSDictionary *)controlIDToValueMap;
-(NSArray *)fillDisplayProperties;
-(id)initWithControlIDToValueMap:(id)arg1 label:(id)arg2 fillDisplayProperties:(id)arg3 skipDisplayProperties:(id)arg4 propertiesToFillOrSkip:(id)arg5 ;
-(NSArray *)skipDisplayProperties;
-(NSSet *)propertiesToFillOrSkip;
@end

