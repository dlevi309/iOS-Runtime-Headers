/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/


@class NSPredicate;

@interface ASMailboxSearchPredicate : NSObject {

	NSPredicate* _predicate;

}

@property (nonatomic,retain) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
-(BOOL)isValid;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(id)initWithPredicate:(id)arg1 ;
-(id)getString;
-(id)getStringForPredicate:(id)arg1 ;
-(id)getStringForComparisonPredicate:(id)arg1 ;
-(id)getStringForCompoundPredicate:(id)arg1 ;
@end

