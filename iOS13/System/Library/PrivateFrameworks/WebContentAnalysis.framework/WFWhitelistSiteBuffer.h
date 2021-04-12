/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/


@class NSMutableDictionary;

@interface WFWhitelistSiteBuffer : NSObject {

	NSMutableDictionary* _siteTree;
	unsigned long long _maxSize;

}

@property (retain) NSMutableDictionary * siteTree;              //@synthesize siteTree=_siteTree - In the implementation block
@property (assign) unsigned long long maxSize;                  //@synthesize maxSize=_maxSize - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setMaxSize:(unsigned long long)arg1 ;
-(unsigned long long)maxSize;
-(NSMutableDictionary *)siteTree;
-(BOOL)treeContainsURLString:(id)arg1 ;
-(void)addURLString:(id)arg1 ;
-(BOOL)containsURLString:(id)arg1 ;
-(void)setSiteTree:(NSMutableDictionary *)arg1 ;
@end

