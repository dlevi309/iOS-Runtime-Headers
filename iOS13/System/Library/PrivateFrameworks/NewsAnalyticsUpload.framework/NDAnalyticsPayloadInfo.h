/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
*/

#import <NewsAnalyticsUpload/NewsAnalyticsUpload-Structs.h>
#import <libobjc.A.dylib/NDAnalyticsPayloadInfo.h>
@class NSURL, NSDictionary, NSArray;


@protocol NDAnalyticsPayloadInfo <NSCopying>
@property (nonatomic,copy,readonly) NSURL * endpointURL; 
@property (nonatomic,copy,readonly) NSDictionary * valuesByHTTPHeaderField; 
@property (nonatomic,copy,readonly) NSArray * entriesToUpload; 
@property (nonatomic,copy,readonly) NSDictionary * droppedEntriesByReason; 
@required
-(NSURL *)endpointURL;
-(NSArray *)entriesToUpload;
-(NSDictionary *)droppedEntriesByReason;
-(NSDictionary *)valuesByHTTPHeaderField;

@end


@class NSURL, NSDictionary, NSArray;

@interface NDAnalyticsPayloadInfo : NSObject <NDAnalyticsPayloadInfo> {

	NSURL* _endpointURL;
	NSDictionary* _valuesByHTTPHeaderField;
	NSArray* _entriesToUpload;
	NSDictionary* _droppedEntriesByReason;

}

@property (nonatomic,copy) NSURL * endpointURL;                                 //@synthesize endpointURL=_endpointURL - In the implementation block
@property (nonatomic,copy) NSDictionary * valuesByHTTPHeaderField;              //@synthesize valuesByHTTPHeaderField=_valuesByHTTPHeaderField - In the implementation block
@property (nonatomic,copy) NSArray * entriesToUpload;                           //@synthesize entriesToUpload=_entriesToUpload - In the implementation block
@property (nonatomic,copy) NSDictionary * droppedEntriesByReason;               //@synthesize droppedEntriesByReason=_droppedEntriesByReason - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)endpointURL;
-(void)setEndpointURL:(NSURL *)arg1 ;
-(NSArray *)entriesToUpload;
-(NSDictionary *)droppedEntriesByReason;
-(NSDictionary *)valuesByHTTPHeaderField;
-(void)setValuesByHTTPHeaderField:(NSDictionary *)arg1 ;
-(void)setEntriesToUpload:(NSArray *)arg1 ;
-(void)setDroppedEntriesByReason:(NSDictionary *)arg1 ;
@end

