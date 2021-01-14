/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)controlIDToValueMap;
-(id)initWithControlIDToValueMap:(id)arg1 label:(id)arg2 fillDisplayProperties:(id)arg3 skipDisplayProperties:(id)arg4 propertiesToFillOrSkip:(id)arg5 ;
-(NSArray *)fillDisplayProperties;
-(NSArray *)skipDisplayProperties;
-(NSSet *)propertiesToFillOrSkip;
-(NSString *)label;
@end

