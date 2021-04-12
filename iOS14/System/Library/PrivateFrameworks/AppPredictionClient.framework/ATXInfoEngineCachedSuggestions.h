/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/ATXProtoBufWrapper.h>

@class NSArray;

@interface ATXInfoEngineCachedSuggestions : NSObject <ATXProtoBufWrapper> {

	NSArray* _entries;

}

@property (nonatomic,retain) NSArray * entries;              //@synthesize entries=_entries - In the implementation block
-(id)initWithProto:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(id)proto;
-(void)setEntries:(NSArray *)arg1 ;
-(id)encodeAsProto;
-(NSArray *)entries;
@end

