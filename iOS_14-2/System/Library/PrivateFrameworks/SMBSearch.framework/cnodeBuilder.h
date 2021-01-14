/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setWeight:(unsigned)arg1 ;
-(cNodeRestriction *)rootNode;
-(unsigned)weight;
-(void)setRootNode:(cNodeRestriction *)arg1 ;
-(unsigned)ulType;
-(id)initWithType:(unsigned)arg1 Weight:(unsigned)arg2 ;
-(int)appendRestriction:(id)arg1 ;
-(void)setUlType:(unsigned)arg1 ;
@end

