/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class AVMetadataItem, NSString, NSDictionary;

@interface MPTimedMetadata : NSObject {

	AVMetadataItem* _metadataItem;

}

@property (nonatomic,readonly) NSString * key; 
@property (nonatomic,readonly) NSString * keyspace; 
@property (nonatomic,readonly) id value; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) NSDictionary * allMetadata; 
-(id)init;
-(double)timestamp;
-(NSDictionary *)allMetadata;
-(id)_initWithMetadataItem:(id)arg1 ;
-(NSString *)keyspace;
-(NSString *)key;
-(id)value;
@end

