/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@class NWPathEvaluator, NSString;

@interface _DKWiFiConnectionMonitor : _DKMonitor {

	NWPathEvaluator* _pathEvaluator;
	NSString* _currentWirelessSSID;

}

@property (nonatomic,retain) NWPathEvaluator * pathEvaluator;              //@synthesize pathEvaluator=_pathEvaluator - In the implementation block
@property (nonatomic,copy) NSString * currentWirelessSSID;                 //@synthesize currentWirelessSSID=_currentWirelessSSID - In the implementation block
-(void)stop;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NWPathEvaluator *)pathEvaluator;
-(void)setPathEvaluator:(NWPathEvaluator *)arg1 ;
-(NSString *)currentWirelessSSID;
-(void)setCurrentWirelessSSID:(NSString *)arg1 ;
@end

