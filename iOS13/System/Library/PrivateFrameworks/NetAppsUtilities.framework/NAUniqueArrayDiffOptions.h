/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/


@interface NAUniqueArrayDiffOptions : NSObject {

	BOOL _allowMoves;
	/*^block*/id _equalComparator;
	/*^block*/id _hashGenerator;
	/*^block*/id _changeComparator;

}

@property (nonatomic,copy) id equalComparator;               //@synthesize equalComparator=_equalComparator - In the implementation block
@property (nonatomic,copy) id hashGenerator;                 //@synthesize hashGenerator=_hashGenerator - In the implementation block
@property (nonatomic,copy) id changeComparator;              //@synthesize changeComparator=_changeComparator - In the implementation block
@property (assign,nonatomic) BOOL allowMoves;                //@synthesize allowMoves=_allowMoves - In the implementation block
-(id)init;
-(id)equalComparator;
-(void)setEqualComparator:(id)arg1 ;
-(id)hashGenerator;
-(void)setHashGenerator:(id)arg1 ;
-(id)changeComparator;
-(void)setChangeComparator:(id)arg1 ;
-(BOOL)allowMoves;
-(void)setAllowMoves:(BOOL)arg1 ;
@end

