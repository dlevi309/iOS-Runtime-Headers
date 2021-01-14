/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

