/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/ADSingleton.h>

@class NSMutableDictionary;

@interface ADDESRecordManager : ADSingleton {

	NSMutableDictionary* _desRecords;

}

@property (nonatomic,retain) NSMutableDictionary * desRecords;              //@synthesize desRecords=_desRecords - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)recordForRequestID:(id)arg1 ;
-(void)updateAdData:(id)arg1 forRequestID:(id)arg2 ;
-(void)addTapForRequestID:(id)arg1 ;
-(void)addImpressionForRequestID:(id)arg1 ;
-(NSMutableDictionary *)desRecords;
-(void)setDesRecords:(NSMutableDictionary *)arg1 ;
@end

