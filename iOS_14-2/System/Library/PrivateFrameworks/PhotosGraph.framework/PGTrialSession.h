/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class TRIClient;

@interface PGTrialSession : NSObject {

	TRIClient* _trialClient;

}

@property (nonatomic,retain) TRIClient * trialClient;              //@synthesize trialClient=_trialClient - In the implementation block
+(id)newTrialSession;
-(id)init;
-(void)setTrialClient:(TRIClient *)arg1 ;
-(TRIClient *)trialClient;
-(id)levelForFactorName:(id)arg1 withNamespaceType:(unsigned short)arg2 ;
-(id)dictionaryForFactorName:(id)arg1 withNamespaceType:(unsigned short)arg2 ;
-(id)_namespaceNameForNamespaceType:(unsigned short)arg1 ;
@end

