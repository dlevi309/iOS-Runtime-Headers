/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)idsIdentifier;
-(id<HMDAccessorySymptomsDelegate>)delegate;
-(void)setDelegate:(id<HMDAccessorySymptomsDelegate>)arg1 ;
-(NSSet *)localSymptoms;
-(void)setLocalSymptoms:(NSSet *)arg1 ;
-(id)initWithIDSIdentifier:(id)arg1 ;
-(NSSet *)broadcastedSymptoms;
-(void)setBroadcastedSymptoms:(NSSet *)arg1 ;
@end

