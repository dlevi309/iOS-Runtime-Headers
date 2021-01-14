/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/


@class NSPredicate;

@interface ASMailboxSearchPredicate : NSObject {

	NSPredicate* _predicate;

}

@property (nonatomic,retain) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
-(id)initWithPredicate:(id)arg1 ;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(BOOL)isValid;
-(id)getString;
-(id)getStringForPredicate:(id)arg1 ;
-(id)getStringForComparisonPredicate:(id)arg1 ;
-(id)getStringForCompoundPredicate:(id)arg1 ;
@end

