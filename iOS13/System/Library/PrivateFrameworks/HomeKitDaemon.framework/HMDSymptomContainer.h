/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDAccessorySymptomsDelegate;
@class NSString, NSSet;

@interface HMDSymptomContainer : NSObject {

	NSString* _idsIdentifier;
	id<HMDAccessorySymptomsDelegate> _delegate;
	NSSet* _broadcastedSymptoms;
	NSSet* _localSymptoms;

}

@property (nonatomic,copy,readonly) NSString * idsIdentifier;                               //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<HMDAccessorySymptomsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSSet * broadcastedSymptoms;                                     //@synthesize broadcastedSymptoms=_broadcastedSymptoms - In the implementation block
@property (nonatomic,copy) NSSet * localSymptoms;                                           //@synthesize localSymptoms=_localSymptoms - In the implementation block
-(id<HMDAccessorySymptomsDelegate>)delegate;
-(void)setDelegate:(id<HMDAccessorySymptomsDelegate>)arg1 ;
-(NSString *)idsIdentifier;
-(NSSet *)localSymptoms;
-(void)setLocalSymptoms:(NSSet *)arg1 ;
-(id)initWithIDSIdentifier:(id)arg1 ;
-(NSSet *)broadcastedSymptoms;
-(void)setBroadcastedSymptoms:(NSSet *)arg1 ;
@end

