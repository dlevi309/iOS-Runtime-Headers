/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@class NSArray, MAGraph;

@interface MAGraphDomainsToken : NSObject {

	BOOL _deregistered;
	NSArray* _domains;
	MAGraph* _graph;

}

@property (nonatomic,retain) MAGraph * graph;                  //@synthesize graph=_graph - In the implementation block
@property (assign,nonatomic) BOOL deregistered;                //@synthesize deregistered=_deregistered - In the implementation block
@property (nonatomic,readonly) NSArray * domains;              //@synthesize domains=_domains - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(MAGraph *)graph;
-(void)setGraph:(MAGraph *)arg1 ;
-(NSArray *)domains;
-(id)initWithDomains:(id)arg1 graph:(id)arg2 ;
-(void)deregister;
-(BOOL)isEqualToGraphDomainToken:(id)arg1 ;
-(BOOL)deregistered;
-(void)setDeregistered:(BOOL)arg1 ;
@end

