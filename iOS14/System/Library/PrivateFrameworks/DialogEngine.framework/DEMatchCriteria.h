/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSArray;

@interface DEMatchCriteria : NSObject {

	NSArray* _prefixes;
	NSArray* _suffixes;

}

@property (nonatomic,retain) NSArray * prefixes;              //@synthesize prefixes=_prefixes - In the implementation block
@property (nonatomic,retain) NSArray * suffixes;              //@synthesize suffixes=_suffixes - In the implementation block
+(id)matchCriteriaFromPb:(const MatchCriteria*)arg1 ;
+(void)matchCriteriaToPb:(id)arg1 matchCriteriaPb:(MatchCriteria*)arg2 ;
-(BOOL)any:(id)arg1 ;
-(BOOL)all:(id)arg1 ;
-(id)init;
-(id)initWithPrefixes:(id)arg1 suffixes:(id)arg2 ;
-(void)setPrefixes:(NSArray *)arg1 ;
-(void)setSuffixes:(NSArray *)arg1 ;
-(NSArray *)prefixes;
-(NSArray *)suffixes;
-(BOOL)isEqual:(id)arg1 ;
@end

