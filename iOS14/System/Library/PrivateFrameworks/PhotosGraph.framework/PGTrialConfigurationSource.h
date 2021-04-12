/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGConfigurationSource.h>

@class PGTrialSession, NSString;

@interface PGTrialConfigurationSource : NSObject <PGConfigurationSource> {

	unsigned short _namespaceType;
	PGTrialSession* _trialSession;

}

@property (nonatomic,retain) PGTrialSession * trialSession;              //@synthesize trialSession=_trialSession - In the implementation block
@property (assign,nonatomic) unsigned short namespaceType;               //@synthesize namespaceType=_namespaceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)objectForKey:(id)arg1 ;
-(unsigned short)namespaceType;
-(id)initWithTrialSession:(id)arg1 namespaceType:(unsigned short)arg2 ;
-(PGTrialSession *)trialSession;
-(void)setTrialSession:(PGTrialSession *)arg1 ;
-(void)setNamespaceType:(unsigned short)arg1 ;
@end

