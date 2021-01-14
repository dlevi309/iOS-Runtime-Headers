/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSArray, NSError;

@interface PPContactQueryResultGuardedData : NSObject {

	BOOL _joined;
	NSArray* _cnContacts;
	NSArray* _fiaContacts;
	NSError* _latestError;

}

@property (nonatomic,retain) NSArray * cnContacts;               //@synthesize cnContacts=_cnContacts - In the implementation block
@property (nonatomic,retain) NSArray * fiaContacts;              //@synthesize fiaContacts=_fiaContacts - In the implementation block
@property (nonatomic,retain) NSError * latestError;              //@synthesize latestError=_latestError - In the implementation block
@property (assign,nonatomic) BOOL joined;                        //@synthesize joined=_joined - In the implementation block
-(BOOL)joined;
-(NSArray *)cnContacts;
-(void)setCnContacts:(NSArray *)arg1 ;
-(NSArray *)fiaContacts;
-(void)setFiaContacts:(NSArray *)arg1 ;
-(NSError *)latestError;
-(void)setLatestError:(NSError *)arg1 ;
-(void)setJoined:(BOOL)arg1 ;
@end

