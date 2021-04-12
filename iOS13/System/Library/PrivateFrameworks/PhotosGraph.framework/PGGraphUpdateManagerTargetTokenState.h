/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PHPersistentChangeToken;

@interface PGGraphUpdateManagerTargetTokenState : NSObject {

	BOOL _encounteredTargetToken;
	PHPersistentChangeToken* _changeToken;

}

@property (nonatomic,readonly) PHPersistentChangeToken * changeToken;              //@synthesize changeToken=_changeToken - In the implementation block
@property (assign,nonatomic) BOOL encounteredTargetToken;                          //@synthesize encounteredTargetToken=_encounteredTargetToken - In the implementation block
-(id)description;
-(PHPersistentChangeToken *)changeToken;
-(id)initWithPersistentChangeToken:(id)arg1 ;
-(BOOL)encounteredTargetToken;
-(void)setEncounteredTargetToken:(BOOL)arg1 ;
@end

