/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSDictionary, NSArray;

@interface EDAMBusinessQueryResult : FATObject {

	NSNumber* _totalNotebooks;
	NSDictionary* _totalNotesByNotebook;
	NSArray* _experts;
	NSArray* _matchingNotebooks;

}

@property (nonatomic,retain) NSNumber * totalNotebooks;                        //@synthesize totalNotebooks=_totalNotebooks - In the implementation block
@property (nonatomic,retain) NSDictionary * totalNotesByNotebook;              //@synthesize totalNotesByNotebook=_totalNotesByNotebook - In the implementation block
@property (nonatomic,retain) NSArray * experts;                                //@synthesize experts=_experts - In the implementation block
@property (nonatomic,retain) NSArray * matchingNotebooks;                      //@synthesize matchingNotebooks=_matchingNotebooks - In the implementation block
+(id)structName;
+(id)structFields;
-(NSArray *)experts;
-(void)setExperts:(NSArray *)arg1 ;
-(NSNumber *)totalNotebooks;
-(void)setTotalNotebooks:(NSNumber *)arg1 ;
-(NSDictionary *)totalNotesByNotebook;
-(void)setTotalNotesByNotebook:(NSDictionary *)arg1 ;
-(NSArray *)matchingNotebooks;
-(void)setMatchingNotebooks:(NSArray *)arg1 ;
@end

