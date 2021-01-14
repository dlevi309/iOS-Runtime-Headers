/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/


@class NSMutableDictionary;

@interface WFWhitelistSiteBuffer : NSObject {

	NSMutableDictionary* _siteTree;
	unsigned long long _maxSize;

}

@property (retain) NSMutableDictionary * siteTree;              //@synthesize siteTree=_siteTree - In the implementation block
@property (assign) unsigned long long maxSize;                  //@synthesize maxSize=_maxSize - In the implementation block
-(void)setMaxSize:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)maxSize;
-(void)addURLString:(id)arg1 ;
-(BOOL)containsURLString:(id)arg1 ;
-(void)dealloc;
-(NSMutableDictionary *)siteTree;
-(BOOL)treeContainsURLString:(id)arg1 ;
-(void)setSiteTree:(NSMutableDictionary *)arg1 ;
@end

