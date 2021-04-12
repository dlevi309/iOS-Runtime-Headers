/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHashGenerator:(id)arg1 ;
-(void)setChangeComparator:(id)arg1 ;
-(void)setAllowMoves:(BOOL)arg1 ;
-(void)setEqualComparator:(id)arg1 ;
-(id)equalComparator;
-(id)hashGenerator;
-(id)changeComparator;
-(BOOL)allowMoves;
@end

