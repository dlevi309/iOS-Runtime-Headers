/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


@class cNodeRestriction;

@interface cnodeBuilder : NSObject {

	unsigned _ulType;
	unsigned _weight;
	cNodeRestriction* _rootNode;

}

@property (assign) unsigned ulType;                          //@synthesize ulType=_ulType - In the implementation block
@property (assign) unsigned weight;                          //@synthesize weight=_weight - In the implementation block
@property (retain) cNodeRestriction * rootNode;              //@synthesize rootNode=_rootNode - In the implementation block
-(cNodeRestriction *)rootNode;
-(void)setWeight:(unsigned)arg1 ;
-(unsigned)weight;
-(void)setRootNode:(cNodeRestriction *)arg1 ;
-(id)initWithType:(unsigned)arg1 Weight:(unsigned)arg2 ;
-(int)appendRestriction:(id)arg1 ;
-(unsigned)ulType;
-(void)setUlType:(unsigned)arg1 ;
@end

