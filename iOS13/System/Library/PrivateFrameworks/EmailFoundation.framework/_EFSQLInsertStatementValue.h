/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@class NSMutableOrderedSet, NSMutableDictionary;

@interface _EFSQLInsertStatementValue : NSObject {

	NSMutableOrderedSet* _requiredColumns;
	NSMutableDictionary* _bindables;
	NSMutableDictionary* _expressables;

}

@property (nonatomic,retain) NSMutableOrderedSet * requiredColumns;              //@synthesize requiredColumns=_requiredColumns - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bindables;                    //@synthesize bindables=_bindables - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * expressables;                 //@synthesize expressables=_expressables - In the implementation block
-(id)initWithRequiredColumns:(id)arg1 ;
-(NSMutableOrderedSet *)requiredColumns;
-(void)setRequiredColumns:(NSMutableOrderedSet *)arg1 ;
-(NSMutableDictionary *)bindables;
-(void)setBindables:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)expressables;
-(void)setExpressables:(NSMutableDictionary *)arg1 ;
@end

