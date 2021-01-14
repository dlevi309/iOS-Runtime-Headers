/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASTask.h>

@class NSArray;

@interface ASMeetingResponseTask : ASTask {

	NSArray* _responseItems;

}

@property (nonatomic,retain) NSArray * responseItems;              //@synthesize responseItems=_responseItems - In the implementation block
-(void)finishWithError:(id)arg1 ;
-(id)requestBody;
-(NSArray *)responseItems;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(id)initWithResponseItems:(id)arg1 ;
-(int)commandCode;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(void)setResponseItems:(NSArray *)arg1 ;
@end

