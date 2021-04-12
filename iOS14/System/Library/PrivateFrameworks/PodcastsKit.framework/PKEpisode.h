/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, PKEpisodeStoreId, PKShow;

@interface PKEpisode : NSObject <NSSecureCoding> {

	 title;
	 isExplicit;
	 duration;
	 storeId;
	 show;
	 guid;
	 uuid;
	 streamUrl;
	 episodeUuid;

}

@property (readonly,nonatomic) BOOL isInLibrary; 
@property (readonly,nonatomic) NSString * title; 
@property (readonly,nonatomic) NSDate * releaseDate; 
@property (readonly,nonatomic) BOOL isExplicit; 
@property (readonly,nonatomic) double duration; 
@property (readonly,nonatomic) PKEpisodeStoreId * storeId; 
@property (readonly,nonatomic) PKShow * show; 
@property (copy,nonatomic) NSString * guid; 
@property (copy,nonatomic) NSString * uuid; 
@property (readonly,nonatomic) NSString * streamUrl; 
@property (copy,nonatomic) NSString * episodeUuid; 
+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg1 ;
+(long long)mediaTaskType;
+(id)contentFrom:(id)arg1 ;
+(id)itemFrom:(id)arg1 ;
+(void)fetchEpisodeFrom:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDate *)releaseDate;
-(NSString *)uuid;
-(NSString *)guid;
-(PKEpisodeStoreId *)storeId;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(PKShow *)show;
-(NSString *)streamUrl;
-(BOOL)isExplicit;
-(id)initWithCoder:(id)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(double)duration;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)title;
-(void)setEpisodeUuid:(NSString *)arg1 ;
-(NSString *)episodeUuid;
-(id)initFrom:(id)arg1 ;
-(BOOL)isInLibrary;
-(void)updateForDatabaseMatch;
-(id)initWithTitle:(id)arg1 releaseDate:(id)arg2 isExplicit:(BOOL)arg3 duration:(double)arg4 storeId:(id)arg5 show:(id)arg6 guid:(id)arg7 uuid:(id)arg8 streamUrl:(id)arg9 ;
-(id)lookupEpisode;
@end

